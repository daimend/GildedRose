#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/** WebView Container to implement "traditional" REST API calls via 
	GET|POST|PUT|DEL, etc.
	This could be done just as easily (perhaps more elegantly) in C++ or other
	client side APIs (e.g. node.js).  However, this will satisfy legacy systems,
	provide platform/device agnostic solution, and self contained (not dependent
	on another API) solution. 
	Notes:
	* We'll load a standard HTML using XMLHttpRequest for the REST API endpoint
	calls, and provide input/output to/from sever.  Unfortunately we cannot
	assume the browser will support Fetch() API natively unless we inject it into
	DOM, but this is beyond scope of exercise.
	* We'll use a subclass of WebBrowserComponent to handle any callbacks from the
	browser, however a separate Server thread will handle the actual http_request
	callbacks.
*/
class WebView : public WebBrowserComponent
{
public:
	//==============================================================================
	WebView()
		//		: addressTextBox(addressBox)
	{}

	// This method gets called when the browser is about to go to a new URL..
	bool pageAboutToLoad(const String& newURL) override
	{
		return true;
	}

	// This method gets called when the browser is requested to launch a new window
	void newWindowAttemptingToLoad(const String& newURL) override
	{
		// We'll just load the URL into the main window
		goToURL(newURL);
	}

private:
	//	TextEditor& addressTextBox;

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(WebView)
};


//==============================================================================
class WebViewComponent : public Component
{
public:
	WebViewComponent()
	{
		setOpaque(true);

		// create the actual browser component
		webView.reset(new WebView());
		addAndMakeVisible(webView.get());

		URL path = URL(File::getSpecialLocation(File::currentExecutableFile).getParentDirectory().getChildFile("index.html"));
		webView->goToURL(path.toString(false));

		setSize(1000, 1000);
	}

	~WebViewComponent()
	{
		if (webView)
			webView = nullptr;
	}

	void paint(Graphics& g) override
	{

	}

	void resized() override
	{
		webView->setBounds(0, 0, getWidth(), getHeight());
	}

private:
	std::unique_ptr<WebView> webView;

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(WebViewComponent)
};