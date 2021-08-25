# Primer Portfolio
## Section 1 - Primer Challenges
### Primer 1 - Fahrenheit / Centigrade Conversion
This challenge requires us to allow a user to enter a value before selecting whether to convert it from Fahrenheit to Centigrade or Centigrade to Fahrenheit. As part of the initial design the conversion algorithms were needed for both calculations. 

To help complete this challenge I needed to break the overall problem down into the following main tasks: 
* Get data from the user
* Verify the data is in a suitable format
* Create a method to convert F->C
* Create a method to convert C->F
 
#### Reflection (as well as issues, challenges & resolutions)
The biggest issue was related to testing the areas my solution failed, originally, I tested to see if it worked - however, it wasn’t until I tried to break it that I found some of the more serious issues with my design and implementation.  For example, ...

### Primer 2 - Self-service Checkout
This challenge requires us to allow the user to enter a quantity of an item and then followed by the ‘per item’ cost. This process is then repeated until the quantity entered is <= 0. At which point three values are calculated and displayed to the user.

To complete this challenge I broke the task down into the following steps:
* Create a loop that repeatedly asks the user for the amount of items and the price per the item, which stops when the user enters zero.
* To take this information and calculate the: Subtotal, Shopping Tax and the overall Total.

#### Reflection (as well as issues, challenges & resolutions)
An issue that I encountered whilst completing Primer 2 was how I should approach the loop to ask the user to enter item quantity and price. The resolution to this was to research the different types of loops, I came to the conclusion to use a while loop. Another issue that I faced was with the rounding of the Subtotal, Shopping Tax and Total, this is where I had to multiply the value by 100 and then divide by 100 to round the float to 2dp.

### Primer 3 - Password Complexity Checker
This primer required me to write a C++ program that determines the complexity of password based around the following rules:
* Weak (value: 1) – only numeric or only alphabetic characters
* Moderate (value: 2) – at least 4 characters and is not ‘Weak’, ‘Strong’ or ‘Very Strong’
* Strong (value: 3) – at least 8 characters; including at least 2 numeric and at least 4 alphabetic
* Very Strong (value: 4) – at least 8 characters; including at least 2 numeric, at least 4 alphabetic and 1 special

I approached this by creating a for loop that iterated through the password to check if each character was either a Letter, Number or Special Character. I then used if statements to categorise the password into the above categories.
#### Reflection (as well as issues, challenges & resolutions)
I first created this program by directly returning the outcome of the password complexity checker, however after reading the brief I realised that I was unable to return a "String" as my function may need to be used with other languages. So I then changed this to return a numeric value which is then converted to the password strength.

### Primer 4 - Employee List Removal
Primer 3 required me to create a C++ program that displays a list of employee names. Once finished, I needed to prompt the user for an employee name and remove it for the list and then display the remaining names, each on its own line.
To complete this challenge I broke the task down into the following steps:
* Create a vector containing the employees that are part of the list.
* Display the employee names to the user with the amount of employees in the list.
* Take the users input of which employee they would like to remove and then remove that employee.
* Re-display the new list without the employee that the user wanted to remove.
#### Reflection (as well as issues, challenges & resolutions)
I initially tried to approach this primer using an array to store the employees. However after some research I realised that I could use a vector to store the list of the employees and then easily remove the desired user by iterating through the list and when found, remove the employee by using ```.erase(value)```. I also added the functionality to tell the user that the "Employee not found" if an invalid employee name was entered.

### Primer 5 - Phone Directory
This challenge required me to write a program that uses an external data stream to permanently hold phone contacts. My program prompted the user for either a name or phone number and provided any matched record or records. After consideration I decided to use csv as the format for my data file.
To complete this challege I:
* Created a two dimensional vector to store the values from the CSV.
* Iterate through each column and row to then compare to the search criteria.
* Return the details of the record if found.
* Return the contact details could not be found if there was not a match.
#### Reflection (as well as issues, challenges & resolutions)
I first attempted this challenge by reading the file and directly comparing the search criteria to the contents of the file, once I had completed that I then introduced the use of vectors to create 2d vector to hold all rows. I was then able to iterate through the first vector containing the names of the records to try and match my search, and then iterate through the second vector containing the users phone number. Once there was a match this information is then displayed to the user.

### Primer 6 - Data File Parser
Primer 6 required me to process the records stored in a csv and then display them as a formatted, aligned and evenly spaced table. I approached this in a similar way to primer 5 by storing the contents of the csv in a 2d vector. And then comparing each entry in the csv to one another until I found the longest one. Then using ```setw()``` and the buffer to format my table.

#### Reflection (as well as issues, challenges & resolutions)
For Primer 6 I spent the majority of my time understanding sample code for the proccesses that were taken to format the data in the employee CSV file into the table that is displayed for the user. I then tried to optimise the code by separating where the user is displayed the table into a separate function however this led to various errors and I had to revert my code back to the sample.

### Primer 7 - Sleep Timer
For Primer 6 I created a C++ program that blocked further execution (in seconds, based on the value) of a passed parameter when called. To complete this I used the standard function```::sleep_for(std::chrono::seconds(seconds))```. This meant that the thread was paused for the given amount of time in seconds.
#### Reflection (as well as issues, challenges & resolutions)
I found this particular primer the simplest after I discovered the use of sleep_for. The outcome of this primer was that the thread was stopped for the given duration of time and resumed after the timer had completed.

### Primer 8 - Joining & Detaching Threads (Part A)
Part A - I wrote a function that initialises two threads; each thread called a unique timer function. Each timer is set using a global variable; my first timer duration being 5 seconds, my second was for 10 seconds. I displayed the start and end of each timer as well as the start and end of the main thread. After creating the two timers I then ran each on an individual thread and used ```.join``` to join the threads which blocked the main thread from executing

### Primer 8 - Joining & Detaching Threads (Part B)
For Primer 8- Part B I wrote a function that creates and detaches two threads; each thread calling a unique timer function. Each timer is set using a global variable; my first timer duration should being 5 seconds, your second should be 10 seconds. Display the start and end of each timer as well as the start and end of the main thread; reuse the timer functions from the previous exercise. After creating the two timers I then used ```.detach()``` to detach the threads. The outcome of this was the threads ran in the background and did not block the main thread from executing.

#### Reflection (as well as issues, challenges & resolutions)
From Primer 8 Part A and Part B, I was able to provide a working implementation of threads being joined and detached. I was able to see in Part A that the main thread was blocked until timer 1 and timer 2 had completed, whereas in Part B the main thread executed independently with timer 1 and timer 2 executing in the background and appearing on the screen after the function had finished.

### Primer 9 - Car Class
For Primer 9 I created a complete program that instantiates an instance of a ‘Car’ class. My class is be structured in such a way to ensure that all internal properties (a.k.a., variables or attributes) are private. The class was then used within the carClass function menu to create a car by entering the cars colour and/or make, if these details aren't entered default values are used. The user is then shown an interaction menu where they are able to turn on/off the engine and lock/unclock the car.

#### Reflection (as well as issues, challenges & resolutions)
A challenge with this primer is that the user should not be able to turn an engine that is on, on likewise for turning the engine off and locking/unlocking the car. So to do this I needed to check the current state of the engine against the desired change. If they then matched an error message was displayed to the user.

### Primer 10 - Area of
I designed and created a general “AreaOf” class that provides a single method ‘size’ that can differentiate and correctly calculate 3 out of the 5 specific shape types from the list: rectangles, circles, squares, triangles or trapezoids; ensure you implement the version that includes constructor, destructor and overloaded methods. Remove or suitable renaming or retype any variables to improve its overall quality standard. Once implemented, ensure your program includes several calls in order to recreate the example output (as illustrated below), your examples will be related to your selected shape types.

#### Reflection (as well as issues, challenges & resolutions)
With Primer 10 I managed to correctly calculate the area of the given shape, however within the timeframe I was unable to add overloaded methods or add the functionality to differentiate and correctly calculate 3 out of the 5 specific shape types from the list.
---
## Section 2 - Programming Paradigms
### Programming Paradigms
Simply put, a programming paradigm, for example, procedural, object-oriented, functional, structured, declarative, imperative and event driven can be described as a specific approach used when trying to solve a problem.  Although many programming languages can (and do) support multiple paradigms this discussion will focus more specifically on the possible benefits with examples of the potential differences and similarities of five from the above list. I will be discussing the use of Functional Programming first, Functional Programming is a programming paradigm where programs are constructed by applying and composing functions. When one of the functions is called with specific arguments, it will always return the same result, and will avoid three factors: 
* Shared State
* Mutable Data
* Side Effects
Certain code that runs individually in single threads do not encounter simultaneous processing errors, a pure function can help to prevent simultaneous processing errors occurring as parallel programming is easier. Functional Programming can also prove to be very useful to perform many different operations on the same set of data due to the use of pure functions, testing can also be much easier due to the use of pure functions. A functional program can be much easier to comprehend as it will be written at a much higher level. Another benefit of the use of Functional Programming is that functions can be immutable meaning that the immutable objects can not be changed, in comparison to Object-Oriented Programming when const is used the contents of the object can be reassigned. However Functional Programming is very difficult to scale up and is limited to mathematical calculations. This is therefore similar to Procedural Programming which also doesn't scale well into large systems.

The next programming paradigm that I will be discussing will be the use of Object-Oriented Programming where data structures/objects are defined, each with their own properties or attributes. Each object can also contain its own procedures or methods, which are then used to interact with one another within a large piece of software. Object-Oriented Programming is great for building 
* Large complex systems
This is due to the fact that that large parts of a program that needs to be used elsewhere in the code can be created as an object.
* Highly flexible systems
Through polymorphism, Object-Oriented Programs can be highly flexible as a single function can shape-shift to adapt to whichever class it's in. Highly abstract systems can also be built using an Object-Oriented Programming paradigm.

The third paradigm that I will be discussing is the Procedural Programming, derived from imperative programming procedures contain a series of steps to be carried out. Procedural Programming can be seen as advantageous when sequential or iterative processes need to be performed due to the step by step nature of the paradigm. Another benefit of this paradigm is that calculations are highly optimized either in speed or size. However, a drawback similar to that of Functional Programming is that it does not scale well into large systems as there is not any inheritance or polymorphism. Another disadvantage being that a large and complex process can lead to very unclear code being written, therefore making it harder to both test and debug.

The next programming paradigm is Event Driven, this is where blocks of structured code are used to manage the action and behaviour of a program. Each block then processes and responds to asynchronous events where each event has an emitter and a listener. This provides a great advantage that data can be streamed and processed in real time, due to how the program will always be listening for an event to be emitted. However for more simple programs like Object-Oriented Programming, Event Driven will be very time consuming and will make the process more complex. This is where Functional and Procedural programming would be perfect as a small set of computational steps would be simple and effective to complete the basic process.

The final paradigm that I will be discussing is Declarative Programming, which is where a program specifies what needs to be done rather than how to do it. An advantage of using Declarative Programming is that short and effective code can be written which is easy to read and therefore easy to debug and then test. This is because the language's engine is relied upon to interpret the code and provide the expected result. Optimisation does not need to be taken into account with Declarative Programming as implementation is controlled by the language's engine again.


---
## Section 3 - Continued Professional Development
### Benefits of becoming a Polyglot Programmer
A Polyglot Programmer is one who has the ability to use and understand several programming languages. The first benefit that I can see with being a Polyglot Programmer is that with the number of languages, frameworks, and tools changing rapidly and dynamically, it’s easy for a language to quickly go out of style. So, learning different languages and staying on top of new development trends ensures that you can quickly adapt to languages that are becoming more prominent within software development. 

The second benefit of being a Polygot Programmer is that you become more creative when approaching a problem, you are able to in vision various solutions and contemplate which one will be best. You will start to notice the benefits and drawbacks of different solutions, and you will end up with a more in depth understanding of programming. In comparison to one who only knows a single language and approaches the projects in the same way, you then start to become more rigid in these ways as time passes due to this logic getting set into your problem solving techniques.

he next benefit of being a Polygot Programmer that I will be discussing is how better career opportunities can arise for an individual that is fluent in many programming languages. Where many think that knowing one language will be vital for their career in the long term, this isn't necessarily the case. The reason for this is that companies will look for developers that can quickly adapt to the different language requirements of very diverse projects. companies will increasingly look for more flexible and creative candidates. Within software development, recently the focus is on staying relevant in a highly competitive and dynamic world of programming.

The next advantage that I will be discussing is that you will be able to use a tool/language that is specific to the job that needs to be performed. For example Java is great for building a complex Object-Oriented back-end system, however there are many other languages/frameworks that are best suited to building a front end for the desired application.

Building on the previous advantage that I have discussed, the final advantage of being a Polyglot Programmer, is the ability to integrate various different languages to produce an optimised system. This is great when using REST API's as you are able to have a seamless front-end, backend and a database that all work together to provide an application.

