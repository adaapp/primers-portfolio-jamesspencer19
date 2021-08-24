# Primer Portfolio
### TODO:
* Primer 5
* Primer 6
 
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
#### Reflection (as well as issues, challenges & resolutions)


### Primer 6 - Data File Parser
Process the records and display them as a formatted, aligned and evenly spaced table

#### Reflection (as well as issues, challenges & resolutions)

### Primer 7 - Sleep Timer
For Primer 6 I created a C++ program that blocked further execution (in seconds, based on the value) of a passed
parameter when called.
#### Reflection (as well as issues, challenges & resolutions)

### Primer 8 - Joining & Detaching Threads (Part A)
Part A - Write a C++ function that initialises two threads; each thread should call a unique timer function (e.g., thread1 calls timer1, thread 2 calls timer2). Each timer is set using a global variable; your first timer duration should be 5 seconds, your second should be 10 seconds. Display the start and end of each timer as well as the start and end of the main thread.

### Primer 8 - Joining & Detaching Threads (Part B)
Write a C++ function that executes once part A completed, your new function should create and detache
two threads; each thread should call a unique timer function (e.g. thread1 calls timer1, thread 2 calls timer2). Each timer is set using a global variable; your first timer duration should be 5 seconds, your second should be 10 seconds. Display the start and end of each timer as well as the start and end of the main
thread; reuse the timer functions from the previous exercise.

#### Reflection (as well as issues, challenges & resolutions)

### Primer 9 - Car Class
Using simple C++, complete a program that instantiates an instance of a ‘Car’ class. Your class should be
structured in such a way to ensure that all internal properties (a.k.a., variables or attributes) are private. The
class must support the following (public) methods and expected types:
* void set_colour(string) – used to set the car’s colour, e.g., Blue, White, etc.
* string get_colour(void) – returns the car’s colour
* void set_make(string) – used to set the car’s make, e.g., Toyota, Honda, Ford, Kia, etc,
* string get_make(void) – returns the car’s make
* void engine_on(void) – used to turn the car’s engine on
* void engine_off(void) – used to turn the car’s engine off
* void locked(bool) – locks / unlocks the car.
* void status(void) – displays the car’s current status (see example output below)
Your program should display the car’s current status and a menu allowing user interaction with the car.

#### Reflection (as well as issues, challenges & resolutions)

### Primer 10 - Area of
Using C++ build on the concept Area of a circle class and functionality (as illustrated in the lecture slide deck) to design and create a general “AreaOf” class that provides a single method ‘size’ that can differentiate and correctly calculate 3 out of the 5 specific shape types from the list: rectangles, circles, squares, triangles or trapezoids; ensure you implement the version that includes constructor, destructor and overloaded methods. Remove or suitable renaming or retype any variables to improve its overall quality standard. Once implemented, ensure your program includes several calls in order to recreate the example output (as illustrated below), your examples will be related to your selected shape types.

#### Reflection (as well as issues, challenges & resolutions)
PI
---
## Section 2 - Programming Paradigms
### Programming Paradigms
Simply put, a programming paradigm, for example, procedural, object-oriented, functional, structured, declarative, imperative and event driven can be described as a specific approach used when trying to solve a problem.  Although many programming languages can (and do) support multiple paradigms this discussion will focus more specifically on the possible benefits with examples of the potential differences and similarities of five from the above list. These are ...


---
## Section 3 - Continued Professional Development
### Benefits of becoming a Polyglot Programmer
Vestibulum vitae semper sem. Duis leo leo, suscipit at felis non, pellentesque varius massa. Sed sit amet orci nibh. Morbi scelerisque faucibus elit, vitae mollis turpis finibus eget. In convallis euismod nunc non imperdiet. Duis ultricies pulvinar lorem, sed molestie nunc porta at. Aenean arcu ante, efficitur nec felis sed, feugiat iaculis turpis. Vestibulum eu elementum diam. Quisque nec tortor auctor, scelerisque ante vitae, fringilla tellus.

Quisque ligula lectus, efficitur quis malesuada sit amet, malesuada sed nibh. In lorem erat, elementum quis tempus nec, rhoncus ac ante. Mauris suscipit massa tempor, pulvinar neque vel, gravida nulla. Donec massa diam, molestie in diam nec, vulputate faucibus ligula. Aliquam erat volutpat. Aliquam sit amet dui ligula. Nullam euismod eros ultrices magna convallis lobortis. Proin convallis placerat tincidunt. Quisque interdum, nisi id egestas luctus, augue libero lacinia urna, sit amet tempus nisl sem nec quam. Vestibulum interdum urna mauris, vel dignissim nisi dignissim egestas. Donec volutpat dictum dui, at egestas sem tristique nec.
