# Gilded Rose

●    Information on how to setup our environments to run your application.

The API (server/client/API) is self contained and should run on any platform 
 -> (OS X and Windows binaries provided, iOS and Andriod can be built from the Builds directory).
 The app will start a (Mongoose) httpServer on localhost port 8080 (http://localhost:8080)
 -> Some firewalls may prompt to allow connection (dd: todo, use sockets to bypass this)
 -> dd: todo: provide optional port setting for environments which are already running something on port 8080

●    Information on how to run your application.

Simply run the .exe on Windows or .dmg on OS X
The app will start an instance of your default OS browser contained in webView to issue commands to the API
-> optionally run app and use any http client (e.g. curl, chrome, etc.) pointed to localhost:8080 to communicate with API

Examples:

1) GET:  check availability for 3 guests with 3 luggage

http://localhost:8080/booking?guests=3&luggage=3
```
Booking =
{
   "Inn": {
     "available_guests": 3,
     "guests": 3,
     "available_luggage": 0,
     "luggage": 3,
     "max_guests": 6,
     "max_luggage": 3,
     "id": "Gilded Rose",
     "error": "",
     "cost": 28,
     "rooms": {
       "array": [
         {
           "available_guests": 0,
           "guests": 2,
           "available_luggage": 0,
           "luggage": 1,
           "max_guests": 2,
           "max_luggage": 1,
           "id": 0,
           "cost": 14,
           "guest": {
             "array": [
               {
                 "id": 0,
                 "guests": 2,
                 "luggage": 1
               },
               {
                 "id": 0,
                 "guests": 2,
                 "luggage": 1
               }
             ]
           }
         },
         {
           "available_guests": 0,
           "guests": 1,
           "available_luggage": 0,
           "luggage": 2,
           "max_guests": 1,
           "max_luggage": 2,
           "id": 2,
           "cost": 14,
           "guest": {
             "array": [
               {
                 "id": 0,
                 "guests": 1,
                 "luggage": 2
               }
             ]
           }
         },
         {
           "available_guests": 2,
           "guests": 0,
           "available_luggage": 0,
           "luggage": 0,
           "max_guests": 2,
           "max_luggage": 0,
           "id": 1
         },
         {
           "available_guests": 1,
           "guests": 0,
           "available_luggage": 0,
           "luggage": 0,
           "max_guests": 1,
           "max_luggage": 0,
           "id": 3
         }
       ]
     }
   },
   "error": "",
   "bookingCost": 28
 }
```
2) POST:  book 3 guests with 3 luggage

http://localhost:8080/booking?guests=3&luggage=3&method=post
```
Booking =
{
   "Inn": {
     "available_guests": 3,
     "guests": 3,
     "available_luggage": 0,
     "luggage": 3,
     "max_guests": 6,
     "max_luggage": 3,
     "id": "Gilded Rose",
     "error": "",
     "cost": 28,
     "rooms": {
       "array": [
         {
           "available_guests": 0,
           "guests": 2,
           "available_luggage": 0,
           "luggage": 1,
           "max_guests": 2,
           "max_luggage": 1,
           "id": 0,
           "cost": 14,
           "guest": {
             "array": [
               {
                 "id": 1,
                 "guests": 2,
                 "luggage": 1
               },
               {
                 "id": 1,
                 "guests": 2,
                 "luggage": 1
               }
             ]
           }
         },
         {
           "available_guests": 0,
           "guests": 1,
           "available_luggage": 0,
           "luggage": 2,
           "max_guests": 1,
           "max_luggage": 2,
           "id": 2,
           "cost": 14,
           "guest": {
             "array": [
               {
                 "id": 1,
                 "guests": 1,
                 "luggage": 2
               }
             ]
           }
         },
         {
           "available_guests": 2,
           "guests": 0,
           "available_luggage": 0,
           "luggage": 0,
           "max_guests": 2,
           "max_luggage": 0,
           "id": 1,
           "cost": 0
         },
         {
           "available_guests": 1,
           "guests": 0,
           "available_luggage": 0,
           "luggage": 0,
           "max_guests": 1,
           "max_luggage": 0,
           "id": 3,
           "cost": 0
         }
       ]
     }
   },
   "error": "",
   "bookingCost": 28
 }
```
3) GET:  check the schedule. Note the gnomes are scheduled to clean the rooms at the same time the guests are scheduled to check out.

http://localhost:8080/schedule
```
Schedule =
{
   "Inn": {
     "available_guests": 0,
     "guests": 6,
     "available_luggage": 0,
     "luggage": 3,
     "max_guests": 6,
     "max_luggage": 3,
     "id": "Gilded Rose",
     "error": "",
     "cost": 48,
     "rooms": {
       "array": [
         {
           "available_guests": 0,
           "guests": 2,
           "available_luggage": 0,
           "luggage": 1,
           "max_guests": 2,
           "max_luggage": 1,
           "id": 0,
           "cost": 14,
           "guest": {
             "array": [
               {
                 "checkout": "6 Dec 2018 6:04:59pm",
                 "type": "guest",
                 "id": 1,
                 "guests": 2,
                 "luggage": 1
               },
               {
                 "checkout": "6 Dec 2018 6:04:59pm",
                 "type": "guest",
                 "id": 1,
                 "guests": 2,
                 "luggage": 1
               }
             ]
           }
         },
         {
           "available_guests": 0,
           "guests": 1,
           "available_luggage": 0,
           "luggage": 2,
           "max_guests": 1,
           "max_luggage": 2,
           "id": 2,
           "cost": 14,
           "guest": {
             "array": [
               {
                 "checkout": "6 Dec 2018 6:04:59pm",
                 "type": "guest",
                 "id": 1,
                 "guests": 1,
                 "luggage": 2
               }
             ]
           }
         },
         {
           "available_guests": 0,
           "guests": 2,
           "available_luggage": 0,
           "luggage": 0,
           "max_guests": 2,
           "max_luggage": 0,
           "id": 1,
           "cost": 10,
           "guest": {
             "array": [
               {
                 "checkout": "6 Dec 2018 6:05:59pm",
                 "type": "guest",
                 "id": 2,
                 "guests": 2,
                 "luggage": 0
               },
               {
                 "checkout": "6 Dec 2018 6:05:59pm",
                 "type": "guest",
                 "id": 2,
                 "guests": 2,
                 "luggage": 0
               }
             ]
           }
         },
         {
           "available_guests": 0,
           "guests": 1,
           "available_luggage": 0,
           "luggage": 0,
           "max_guests": 1,
           "max_luggage": 0,
           "id": 3,
           "cost": 10,
           "guest": {
             "array": [
               {
                 "checkout": "6 Dec 2018 6:05:59pm",
                 "type": "guest",
                 "id": 2,
                 "guests": 1,
                 "luggage": 0
               }
             ]
           }
         }
       ]
     },
     "gnomes": {
       "array": [
         {
           "id": 0,
           "checkin": "6 Dec 2018 6:04:59pm",
           "room": 0
         },
         {
           "id": 1,
           "checkin": "6 Dec 2018 6:05:59pm",
           "room": 1
         },
         {
           "id": 2,
           "checkin": "6 Dec 2018 6:04:59pm",
           "room": 2
         },
         {
           "id": 3,
           "checkin": "6 Dec 2018 6:05:59pm",
           "room": 3
         }
       ]
     }
   },
   "error": "",
   "bookingCost": 20
 }
```
4) GET:  check the schedule. The scheduling thread has evicted the guests upon their checkout time and the room are now occupied (for one hour) by the gnomes.  Booking these rooms while occupied by gnomes will not succeed until the gnome are done cleaning.

http://localhost:8080/schedule
```
Schedule =
{
   "Inn": {
     "available_guests": 0,
     "guests": 6,
     "available_luggage": 0,
     "luggage": 3,
     "max_guests": 6,
     "max_luggage": 3,
     "id": "Gilded Rose",
     "error": "",
     "cost": 24,
     "rooms": {
       "array": [
         {
           "available_guests": 1,
           "guests": 1,
           "available_luggage": 1,
           "luggage": 0,
           "max_guests": 2,
           "max_luggage": 1,
           "id": 0,
           "cost": 10,
           "guest": {
             "array": [
               {
                 "checkout": "6 Dec 2018 6:59:59pm",
                 "type": "gnome",
                 "id": 3,
                 "guests": 1,
                 "luggage": 0
               }
             ]
           }
         },
         {
           "available_guests": 0,
           "guests": 1,
           "available_luggage": 0,
           "luggage": 2,
           "max_guests": 1,
           "max_luggage": 2,
           "id": 2,
           "cost": 14,
           "guest": {
             "array": [
               {
                 "checkout": "6 Dec 2018 6:59:59pm",
                 "type": "gnome",
                 "id": 2,
                 "guests": 1,
                 "luggage": 2
               }
             ]
           }
         },
         {
           "available_guests": 2,
           "guests": 0,
           "available_luggage": 0,
           "luggage": 0,
           "max_guests": 2,
           "max_luggage": 0,
           "id": 1,
           "cost": 0,
           "guest": {
             "array": [
               {
                 "checkout": "6 Dec 2018 6:59:59pm",
                 "type": "gnome",
                 "id": 2,
                 "guests": 1,
                 "luggage": 2
               }
             ]
           }
         },
         {
           "available_guests": 1,
           "guests": 0,
           "available_luggage": 0,
           "luggage": 0,
           "max_guests": 1,
           "max_luggage": 0,
           "id": 3,
           "cost": 0,
           "guest": {
             "array": []
           }
         }
       ]
     },
     "gnomes": {
       "array": []
     }
   },
   "error": "",
   "bookingCost": 20
 }
```
●    At a high level, how does your system work? 

The app provides a self contained, multi-threaded, full stack environment to test API (client->API/middleware->server) minus a full featured database.  Simple array based objects are used to define the data strucures and logic which might otherwise be handled by the backend->db layers.

* A Singleton ServerModule controller is implemented to forward client requests/response to/from the webserver, 
    manage service callbacks (observer pattern), and provide an interface to the database Models.
* Models: are implemented as "DynamicObjects" which provide interchangability with Javascript, JSON and XML objects.  Meaning the
    structure and states of the Models can be directly mutated or observed as JSON/XML.
* Services: The bulk of the API is implemented via indepedenant (encapsulated) Services, which can be be implemented in Javascript, Java, C++, C#, and Obj-C.
    * Each Service implements a Service Interface which creates a defualt implementation prototype and registers the new service / endpoint(s) with the API.  
    * The Service prototype structure allows new service implementations to be dynamically added to the API without modifying any other aspect of the system.
    * Each Service can optionally implement it's own thread to allow for background processing based on any client/service requirements. 

●    How would we extend your system if we had to add more rooms, more business logic constraints, more cleaning gnomes requirements?

The Models contain all of the object structures, parameters and the related logic.  In this case only the Models (and/or underlying database in a real world system) would need to be modified or extended.
For the most part the Models are well encapsulated and extensible.  Adding more rooms would simply involve changing the value of a global define, and any additional logic or constraints would likely be isolated to one or two methods which handle the core logic.

●    What documentation, websites, papers, etc. did you consult for this assignment?

* StackOverflow
* JUCE Doxygen and forums
* RESTfulAPI.net

●    What third-party libraries or other tools does your application use? How did you choose each library or framework you used?

JUCE Cross Platform API: https://github.com/WeAreROLI/JUCE

JUCE Mongoose http Server: https://github.com/cpenny42/juce_mongoose

I decided to work with a cross-platform API which I am currently most familiar with and have all current tools / environment already installed. 
I have used the JUCE cross-platform API extensively to develop several applications at all level in the stack (client, middleware, server).

While the API Excercise may have been easier, faster, to implement directly in node.js, I felt using the JUCE API would help me best demonstrate developing the API itself as well as an understanding of development / implementation of adjacent layers in the stack (e.g. client, server).  

Also, while this example uses primarly C++ and javascript, similar to node.js, the use of the JUCE cross-platform API would allow for any middleware API services, as well as any backend or client applications, to be implemented in native and managed code languages (C++, Obj-C, C#, Java, Javascript, etc.).
This allows greater flexibility based on the project requirements and/or developer experience.

●    How long did you spend on this exercise? If you had unlimited time to spend on this, how would you spend it and how would you prioritize each item? 

Due to some scheduling conflicts, I worked on this during a couple sessions for a total of about four or five hours.

1) Optimize business logic which handles the booking / scheduling.
2) Better documentation, use of auto-documentation tools such as Doxygen.
3) Code cleanup, and error checking:  Functional error cecking, implement try/catch blocks, critical sections, etc.
4) Add some layer of security and session handling; even if this was simple user:password to start, then adding layerd authentication model for different user levels.  Also adding encrytion / encoding to the communication transport.
5) I chose to ensure the services were threadable so that the Shceduling / Calender could ultimately be made "live".  In this way, the system could also automate certain tasks such as sending push notifications to the gnomes when it was time to clean room[x], to guests when their checkout time was near, etc.  And for the Innkeeper, obviously, admin level services to show occupancy and profitability over time, etc.
6) Setup a real-world database and server for the API
7) Implement unit testing and profiling (performance testing) for all layer of the stack; middleware/API, backend and clients. 

●    If you were going to implement a level of automated testing to prepare this for a production environment, how would you go about doing so?

* In the case of JUCE, setting up unit testing is as simple as inheriting from UnitTest class, which can automate execution of each service/method and verify output.
* The same can be done for all server and client modules.  
* Had I been using another API, purely Java based for example, I might leverage existing toolsets (JUnit for example), or implement custom UnitTest classes, if such toolsets were unavailable, in much the same way existing 3rd party tools (e.g. PostMan) have established as standards.  
* These approaches might also include:
  * performing unit tests both at compile time and run time 
  * providing developer and QA department/engineers real world test cases for verification.
  * leveraging mutliple live environments (e.g. staging, Beta/RC, and release) for internal and external testing, including backwards compatibility.

 

 
