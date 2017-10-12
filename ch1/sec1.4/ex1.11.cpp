#include <iostream>

int main()
{
    int start = 0;
    int end = 0;
    
    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> start >> end;
    
    while (start <= end) 
    {
        std::cout << start++ << std::endl;
    }
    
    return 0;
}