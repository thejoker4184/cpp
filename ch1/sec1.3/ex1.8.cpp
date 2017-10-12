#include <iostream>

int main()
{
    // std::cout << "/*" << std::endl; // works
    // std::cout << "*/" << std::endl; // works
    // std::cout << /* "*/" */; //doesn't work
    std::cout << /* "*/" /* "/*" */; //works
    return 0;
}