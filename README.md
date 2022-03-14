# Lab4

## CS 308 Lab 4 Data Types in C++ (explicit pointers)

 

In order to do this lab, you need access to a C++ compiler. If you don't have one, jGrasp (https://www.jgrasp.org/) is a lightweight app originally developed as an IDE for Java.

jGrasp (Links to an external site.): (https://www.jgrasp.org/ (Links to an external site.))

https://www.onlinegdb.com/online_c++_compiler (Links to an external site.)

 

To run a C++ program

Write the program
Build the program (compiles, links)
Run the program
jGraspPic-1.PNG

Once you  have a C++ compiler installed, let's look at data types, particularly pointers and references in C++.

 

Incidental things:

cout is in the iostream.h library and outputs to the screen (there's a cin for input)
for many C++ environments you have to specify the "namespace" as std (for standard)
declarations are like java (type and variable name) and variables are implemented like java (storage slots, primitives on the stack, objects and arrays on the heap)
 

There are two explicit pointer/ reference data types:

  int x = 5;
  int* y = &x;    

  cout <<"y:  "<<y <<endl;
  cout <<"*y: " <<  *y <<endl;

 

 

 

 

For this lab,

get a C++ compiler and
run the test C++ code (helloworld.cpp first and then add the pointer/reference example code above).
Change the value of the value pointed to by y and print out the value of x
Print out the value of x
*y = 182;

cout << "x : " << x << endl;

 

What is being printed out in the following lines?
cout << "&x : " << &x << endl;
cout << "y : " << y << endl;


 

Arrays are declared in C++ like this:
int a[] = {1,2,3};


Declare a pointer that points at the beginning of the array and then print out the value in the second cell using only pointer arithmetic (pointer + a number).
    

 

If you change a value using a pointer, does it change the value of the original variable (either x in the first example or a cell of the array a in the second). Try it.
 

 

 

Write a for loop that uses pointer arithmetic to search along the array a for the value 2 (in a[1]) and then for the value 5 (not there). Report the index if the search is successful or "not found" if not.