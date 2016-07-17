1.1
===

Every C++ program contains one or more functions, one of which must be called main. The OS runs a c++ program by calling main

A function definition has 4 elements:
+ A return type
+ A function name
+ A possibly empty parameter list
+ A funtion body

A return statement terminates a function, and can also send a value back to functions caller
When a return statement includes a value, the value must have a type that is compatible with the return type of the function

semi-colons mark the end of most statements in c++ 

The value returned from main is a status indicator, 0 indicates success while non-zero indicates what kind of error occurred. echo $? to see the return value on unix terminal

A type defines both, the content of a data element and the operations that are possible on those data

