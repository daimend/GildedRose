/* ==================================== JUCER_BINARY_RESOURCE ====================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

namespace BinaryData
{

//================== WebView.html ==================
static const unsigned char temp_binary_data_0[] =
"<HTML>\r\n"
"<HEAD>\r\n"
"<META NAME=\"GENERATOR\" Content=\"Microsoft Visual Studio\">\r\n"
"<TITLE></TITLE>\r\n"
"</HEAD>\r\n"
"<BODY>\r\n"
"\r\n"
"    Gilded Rose!\r\n"
"\r\n"
"    <div id=\"response\">\r\n"
"    </div>\r\n"
"\r\n"
"    <div id=\"demo\">\r\n"
"        <h1>The XMLHttpRequest Object</h1>\r\n"
"        <button type=\"button\" onclick=\"loadDoc()\">Change Content</button>\r\n"
"    </div>\r\n"
"\r\n"
"    <script>\r\n"
"    function loadDoc() {\r\n"
"      var xhttp = new XMLHttpRequest();\r\n"
"      xhttp.onreadystatechange = function() {\r\n"
"        if (this.readyState == 4 && this.status == 200) {\r\n"
"          document.getElementById(\"response\").innerHTML =\r\n"
"          this.responseText;\r\n"
"        }\r\n"
"      };\r\n"
"      xhttp.open(\"GET\", \"http://localhost:8080/hello?name=Daimen\", true);\r\n"
"      xhttp.send();\r\n"
"    }\r\n"
"    </script>\r\n"
"\r\n"
"</BODY>\r\n"
"</HTML>\r\n";

const char* WebView_html = (const char*) temp_binary_data_0;


const char* getNamedResource (const char* resourceNameUTF8, int& numBytes)
{
    unsigned int hash = 0;

    if (resourceNameUTF8 != nullptr)
        while (*resourceNameUTF8 != 0)
            hash = 31 * hash + (unsigned int) *resourceNameUTF8++;

    switch (hash)
    {
        case 0xf9618c31:  numBytes = 759; return WebView_html;
        default: break;
    }

    numBytes = 0;
    return nullptr;
}

const char* namedResourceList[] =
{
    "WebView_html"
};

const char* originalFilenames[] =
{
    "WebView.html"
};

const char* getNamedResourceOriginalFilename (const char* resourceNameUTF8)
{
    for (unsigned int i = 0; i < (sizeof (namedResourceList) / sizeof (namedResourceList[0])); ++i)
    {
        if (namedResourceList[i] == resourceNameUTF8)
            return originalFilenames[i];
    }

    return nullptr;
}

}
