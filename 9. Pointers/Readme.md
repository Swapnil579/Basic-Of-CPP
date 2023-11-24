
# Pointers



Pointers are symbolic representations of addresses. They enable programs to simulate call-by-reference as well as to create and manipulate dynamic data structures. Iterating over elements in arrays or other data structures is one of the main use of pointers. 

The address of the variable you’re working with is assigned to the pointer variable that points to the same data type (such as an int or string).

Syntax:

datatype *var_name; 

int *ptr;   // ptr can point to an address which holds int data
## How Pointers Works in C++

![App Screenshot](https://media.geeksforgeeks.org/wp-content/uploads/20221013162237/PointersinC.png)

How to use a pointer?

Define a pointer variable

Assigning the address of a variable to a pointer using the unary operator (&) which returns the address of that variable.

Accessing the value stored in the address using unary operator (*) which returns the value of the variable located at the address specified by its operand.

The reason we associate data type with a pointer is that it knows how many bytes the data is stored in. When we increment a pointer, we increase the pointer by the size of the data type to which it points.

![App Screenshot](https://media.geeksforgeeks.org/wp-content/uploads/pointers-in-c.png)