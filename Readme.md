### DD: TODO: Complete all questions...

●	Information on how to setup our environments to run your application.

The API (server/client/API) is self contained and should run on any platform 
 -> (OS X and Windows binaries provided, iOS and Andriod can be built from the Builds directory).
 The app will start a (Mongoose) httpServer on localhost port 8080 (http://localhost:8080)
 -> Some firewalls may prompt to allow connection (dd: todo, use sockets to bypass this)
 -> dd: todo: provide optional port setting for environments which are already running something on port 8080

●	Information on how to run your application.

Simply the .exe on Windows or .dmg on OS X
The app will start an instance of your default OS browser contained in webView to issue commands to the API
-> optionally run app and use any http client (e.g. curl) pointed to localhost:8080 to communicate with API

●	At a high level, how does your system work? 

The app provides a self contained, multi-threaded, full stack environment to test API (client->API/middleware->server) minus a full featured database.  
Simple array based objects are used to define the data strucures and logic which might otherwise be handled by the backend->db layers.

* A Singleton ServerModule controller is implemented to forward client requests/response to/from the webserver, 
    manage service callbacks (observer pattern), and provide an interface to the database Models.
* Models: are implemented as "DynamicObjects" which provide interchangability with Javascript, JSON and XML objects.  Meaning the
    structure and states of the Models can be directly mutated or observed as JSON/XML.
* Services: The bulk of the API is implemented via indepedenant (encapsulated) Services, which can be be implemented in Javascript, Java, C++, C#, and Obj-C.
    * Each Service implements a Service Interface which creates a defualt implementation prototype and registers the new service / endpoint(s) with the API.  
    * The Service prototype structure allows new service implementations to be dynamically added to the API without modifying any other aspect of the system.
    * Each Service can optionally implement it's own thread to allow for background processing based on any client/service requirements. 

●	How would we extend your system if we had to add more rooms, more business logic constraints, more cleaning gnomes requirements?

The Models contain all of the object structures, parameters and the related logic.  
In this case only the Models (and/or underlying database in a real world system) would need to be modified or extended.

●	What documentation, websites, papers, etc. did you consult for this assignment?


●	What third-party libraries or other tools does your application use? How did you choose each library or framework you used?

JUCE Cross Platform API: https://github.com/WeAreROLI/JUCE

JUCE Mongoose http Server: https://github.com/cpenny42/juce_mongoose

I decided to work with a cross-platform API which I am currently most familiar with and have all current tools / environment already installed. 
I have used the JUCE cross-platform API extensively to develop several applications at all level in the stack (client, middleware, server).

While the API Excercise may have been easier, faster, to implement directly in node.js, I felt using the JUCE API would help me best demonstrate developing the API itself as well as an understanding of development / implementation of adjacent layers in the stack (e.g. client, server).  Also, while this example uses primarly C++ and javascript, similar to node.js, the use of the JUCE cross-platform API would allow for any middleware API services, as well as any backend or client applications, to be implemented in native and managed code languages (C++, Obj-C, C#, Java, Javascript, etc.) based on the developers choice/experience.

●	How long did you spend on this exercise? If you had unlimited time to spend on this, how would you spend it and how would you prioritize each item? 

●	If you were going to implement a level of automated testing to prepare this for a production environment, how would you go about doing so?
