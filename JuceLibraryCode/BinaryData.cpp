/* ==================================== JUCER_BINARY_RESOURCE ====================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

namespace BinaryData
{

//================== index.html ==================
static const unsigned char temp_binary_data_0[] =
"<HTML>\r\n"
"<HEAD>\r\n"
"<META NAME=\"GENERATOR\" Content=\"Microsoft Visual Studio\">\r\n"
"<TITLE></TITLE>\r\n"
"</HEAD>\r\n"
"<BODY>\r\n"
"\r\n"
"    Welcome to Gilded Rose!\r\n"
"\r\n"
"    <div id=\"response\">\r\n"
"    </div>\r\n"
"\r\n"
"    <div id=\"demo\">\r\n"
"        <h1>The XMLHttpRequest Object</h1>\r\n"
"        <button type=\"button\" onclick=\"loadDoc()\">Test Load</button>\r\n"
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
"      xhttp.open(\"GET\", \"http://localhost:8080/gildedrose?name=\", true);\r\n"
"      xhttp.send();\r\n"
"    }\r\n"
"    </script>\r\n"
"\r\n"
"</BODY>\r\n"
"</HTML>\r\n";

const char* index_html = (const char*) temp_binary_data_0;

//================== Readme.md ==================
static const unsigned char temp_binary_data_1[] =
"\xef\xbb\xbf### DD: TODO\r\n"
"\r\n"
"\xe2\x97\x8f\tInformation on how to setup our environments to run your application.\r\n"
"\r\n"
"\xe2\x97\x8f\tInformation on how to run your application.\r\n"
"\r\n"
"\xe2\x97\x8f\tAt a high level, how does your system work? \r\n"
"\r\n"
"\xe2\x97\x8f\tHow would we extend your system if we had to add more rooms, more business logic constraints, more cleaning gnomes requirements?\r\n"
"\r\n"
"\xe2\x97\x8f\tWhat documentation, websites, papers, etc. did you consult for this assignment?\r\n"
"\r\n"
"\xe2\x97\x8f\tWhat third-party libraries or other tools does your application use? How did you choose each library or framework you used?\r\n"
"\r\n"
"\xe2\x97\x8f\tHow long did you spend on this exercise? If you had unlimited time to spend on this, how would you spend it and how would you prioritize each item? \r\n"
"\r\n"
"\xe2\x97\x8f\tIf you were going to implement a level of automated testing to prepare this for a production environment, how would you go about doing so?\r\n";

const char* Readme_md = (const char*) temp_binary_data_1;


const char* getNamedResource (const char* resourceNameUTF8, int& numBytes)
{
    unsigned int hash = 0;

    if (resourceNameUTF8 != nullptr)
        while (*resourceNameUTF8 != 0)
            hash = 31 * hash + (unsigned int) *resourceNameUTF8++;

    switch (hash)
    {
        case 0x2c834af8:  numBytes = 764; return index_html;
        case 0x35d2b1a8:  numBytes = 853; return Readme_md;
        default: break;
    }

    numBytes = 0;
    return nullptr;
}

const char* namedResourceList[] =
{
    "index_html",
    "Readme_md"
};

const char* originalFilenames[] =
{
    "index.html",
    "Readme.md"
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
