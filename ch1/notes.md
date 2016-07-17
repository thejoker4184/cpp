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

in c++, an expression yields

1.2
===
c++ includes an extensive standard library that provides IO

iostream library:
+ fundamental to the iostream library are two types named istream and ostream which represent input and output streams. A stream is a sequence of characters read from or written to an IO device
   
+ the library defines 4 IO objects. 
	+ to handle input we use object of type istream named _cin_. the object is also refrerred to as standard input
	+ for output we use an ostream object named _cout_ also referred to as standard output
	+ the lib also defines two other ostream objects, _cerr_ and _clog_. cerr is referred to as standard error and is used for warning and error messages while clog is used for logging general information about the execution of program
	

'# include <iostream>' - every program that uses a library like iostream, must include its associated header
