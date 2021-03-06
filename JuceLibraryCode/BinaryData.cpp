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
"### DD: TODO: Complete all questions...\r\n"
"\r\n"
"\xe2\x97\x8f\tInformation on how to setup our environments to run your application.\r\n"
"\r\n"
"The API (server/client/API) is self contained and should run on any platform \r\n"
" -> (OS X and Windows binaries provided, iOS and Andriod can be built from the Builds directory).\r\n"
" The app will start a (Mongoose) httpServer on localhost port 8080 (http://localhost:8080)\r\n"
" -> Some firewalls may prompt to allow connection (dd: todo, use sockets to bypass this)\r\n"
" -> dd: todo: provide optional port setting for environments which are already running something on port 8080\r\n"
"\r\n"
"\xe2\x97\x8f\tInformation on how to run your application.\r\n"
"\r\n"
"Simply the .exe on Windows or .dmg on OS X\r\n"
"The app will start an instance of your default OS browser contained in webView to issue commands to the API\r\n"
"-> optionally run app and use any http client (e.g. curl) pointed to localhost:8080 to communicate with API\r\n"
"\r\n"
"\xe2\x97\x8f\tAt a high level, how does your system work? \r\n"
"\r\n"
"The app provides a self contained, multi-threaded, full stack environment to test API (client->API/middleware->server) minus a full featured database.  \r\n"
"Simple array based objects are used to define the data strucures and logic which might otherwise be handled by the backend->db layers.\r\n"
"\r\n"
"* A Singleton ServerModule controller is implemented to forward client requests/response to/from the webserver, \r\n"
"    manage service callbacks (observer pattern), and provide an interface to the database Models.\r\n"
"* Models: are implemented as \"DynamicObjects\" which provide interchangability with Javascript, JSON and XML objects.  Meaning the\r\n"
"    structure and states of the Models can be directly mutated or observed as JSON/XML.\r\n"
"* Services: The bulk of the API is implemented via indepedenant (encapsulated) Services, which can be be implemented in Javascript, Java, C++, C#, and Obj-C.\r\n"
"    * Each Service implements a Service Interface which creates a defualt implementation prototype and registers the new service / endpoint(s) with the API.  \r\n"
"    * The Service prototype structure allows new service implementations to be dynamically added to the API without modifying any other aspect of the system.\r\n"
"    * Each Service can optionally implement it's own thread to allow for background processing based on any client/service requirements. \r\n"
"\r\n"
"\xe2\x97\x8f\tHow would we extend your system if we had to add more rooms, more business logic constraints, more cleaning gnomes requirements?\r\n"
"\r\n"
"The Models contain all of the object structures, parameters and the related logic.  \r\n"
"In this case only the Models (and/or underlying database in a real world system) would need to be modified or extended.\r\n"
"\r\n"
"\xe2\x97\x8f\tWhat documentation, websites, papers, etc. did you consult for this assignment?\r\n"
"\r\n"
"* StackOverflow\r\n"
"* JUCE Doxygen and forums\r\n"
"* RESTfulAPI.net\r\n"
"\r\n"
"\xe2\x97\x8f\tWhat third-party libraries or other tools does your application use? How did you choose each library or framework you used?\r\n"
"\r\n"
"JUCE Cross Platform API: https://github.com/WeAreROLI/JUCE\r\n"
"\r\n"
"JUCE Mongoose http Server: https://github.com/cpenny42/juce_mongoose\r\n"
"\r\n"
"I decided to work with a cross-platform API which I am currently most familiar with and have all current tools / environment already installed. \r\n"
"I have used the JUCE cross-platform API extensively to develop several applications at all level in the stack (client, middleware, server).\r\n"
"\r\n"
"While the API Excercise may have been easier, faster, to implement directly in node.js, I felt using the JUCE API would help me best demonstrate developing the API itself as well as an understanding of development / implementation of adjacent layers "
"in the stack (e.g. client, server).  \r\n"
"\r\n"
"Also, while this example uses primarly C++ and javascript, similar to node.js, the use of the JUCE cross-platform API would allow for any middleware API services, as well as any backend or client applications, to be implemented in native and managed "
"code languages (C++, Obj-C, C#, Java, Javascript, etc.).\r\n"
"This allows greater flexibility based on the project requirements and/or developer experience.\r\n"
"\r\n"
"\xe2\x97\x8f\tHow long did you spend on this exercise? If you had unlimited time to spend on this, how would you spend it and how would you prioritize each item? \r\n"
"\r\n"
"Due to some scheduling conflicts, I worked on this during a couple sessions for a total of about four or five hours.\r\n"
"\r\n"
"1) I did not have time to complete the business logic which handles the booking / scheduling.  I would make this first priority to make the Excercise feature complete, and would give it a time estimate of a couple hours given abuncance of queue and s"
"orting methods which would simplify the logic.\r\n"
"2) Code cleanup, leak detection, and Error Checking:  Functional error cecking, implement try/catch blocks, critical sections, etc.\r\n"
"3) Add some layer of security, even if this was simple user:password to start, then adding layerd authentication model for different user levels.  Also adding encrytion / encoding to the communication transport.\r\n"
"4) While not yet fully implemented, I chose to ensure the services were threadable so that the Shceduling / Calender could ultimately be made \"live\".  In this way, the system could also automate certain tasks such as sending notifications to the gn"
"omes when it was time to clean room[x], to guests when their checkout time was near, etc.  And for the Innkeeper, obviously, admin level services to show occupancy and profitability over time, etc.\r\n"
"5) Setup a real-world database and server for the API\r\n"
"6) Implement unit testing and profiling (performance testing) for all layer of the stack; middleware/API, backend and clients. \r\n"
"\r\n"
"\xe2\x97\x8f\tIf you were going to implement a level of automated testing to prepare this for a production environment, how would you go about doing so?\r\n"
"\r\n"
"* In the case of JUCE, setting up unit testing is as simple as inheriting from UnitTest class, which can automate execution of each service/method and verify output.\r\n"
"* The same can be done for all server and client modules.  \r\n"
"* Had I been using another API, purely Java based for example, I might leverage existing toolsets (JUnit for example), or\r\n"
"implement custom UnitTest classes, if such toolsets were unavailable, in much the same way existing 3rd party tools have established as standards.  \r\n"
"* These approaches might also include:\r\n"
"  * performing unit tests both at compile time and run time well \r\n"
"  * providing developer and QA department/engineers real world test cases for verification.\r\n"
"  * leveraging mutliple live environments (e.g. staging, Beta/RC, and release) for internal and external testing, including backwards compatibility.\r\n"
"\r\n"
" ";

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
        case 0x35d2b1a8:  numBytes = 6604; return Readme_md;
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
