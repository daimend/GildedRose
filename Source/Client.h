#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/** WebView Container to implement "traditional" REST API calls via 
	GET|POST|PUT|DEL, etc.
	This could be done just as easily (perhaps more elegantly) in C++ or other
	client side APIs (e.g. node.js).  However, this will satisfy legacy systems,
	provide platform/device agnostic solution, and self contained (not dependent
	on another API) solution.
*/
class WebView : public WebBrowserComponent
{
public:
	//==============================================================================
	WebView(TextEditor& addressBox): addressTextBox(addressBox)
	{}

	// This method gets called when the browser is about to go to a new URL..
	bool pageAboutToLoad(const String& newURL) override
	{
		addressTextBox.setText(newURL, false);
		return true;
	}

	// This method gets called when the browser is requested to launch a new window
	void newWindowAttemptingToLoad(const String& newURL) override
	{
		// We'll just load the URL into the main window
		goToURL(newURL);
	}

private:
	TextEditor& addressTextBox;

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(WebView)
};


//==============================================================================
class WebViewComponent : public Component
{
public:
	WebViewComponent()
	{
		setOpaque(true);

		// Create an address box..
		addAndMakeVisible(addressTextBox);
		addressTextBox.setTextToShowWhenEmpty(API_DEFAULT_URL, Colours::grey);
		addressTextBox.onReturnKey = [this] { webView->goToURL(addressTextBox.getText()); };

		// create the actual browser component
		webView.reset(new WebView(addressTextBox));
		addAndMakeVisible(webView.get());

//		URL path = URL(File::getSpecialLocation(File::currentExecutableFile).getParentDirectory().getChildFile("index.html"));
		webView->goToURL(API_DEFAULT_URL);

		setSize(1000, 1000);
	}

	~WebViewComponent()
	{
		if (webView)
			webView = nullptr;
	}

	void paint(Graphics& g) override
	{
		g.fillAll(Colours::grey);
	}

	void resized() override
	{
		addressTextBox.setBounds(0, 0, getWidth(), 25);
		webView->setBounds(0, addressTextBox.getHeight(), getWidth(), getHeight() - addressTextBox.getHeight());
	}

private:
	std::unique_ptr<WebView> webView;

	TextEditor addressTextBox;

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(WebViewComponent)
};
