
# Functions in C++

A function is a set of statements that takes input, does some specific computation, and produces output. The idea is to put some commonly or repeatedly done tasks together to make a function so that instead of writing the same code again and again for different inputs, we can call this function.

In simple terms, a function is a block of code that runs only when it is called.




## Syntax:

![App Screenshot](https://media.geeksforgeeks.org/wp-content/uploads/20220719131329/syntaxofFunction-660x214.png)


## Why Do We Need Functions?
Functions help us in reducing code redundancy. If functionality is performed at multiple places in software, then rather than writing the same code, again and again, we create a function and call it everywhere. This also helps in maintenance as we have to make changes in only one place if we make changes to the functionality in future.

Functions make code modular. Consider a big file having many lines of code. It becomes really simple to read and use the code,  if the code is divided into functions.

Functions provide abstraction. For example, we can use library functions without worrying about their internal work.

Function Declaration

A function declaration tells the compiler about the number of parameters, data types of parameters, and returns type of function. Writing parameter names in the function declaration is optional but it is necessary to put them in the definition. Below is an example of function declarations. (parameter names are not present in the below declarations) 

![App Screenshot](https://media.geeksforgeeks.org/wp-content/uploads/20220719123136/FunctionPrototypeincppmin-660x330.png)