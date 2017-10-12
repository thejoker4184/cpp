#include <iostream>

int main()
{
    int start = 0;
    int end = 0;
    
    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> start >> end;

    if (start > end) 
    {
        start += end;
        end = start - end;
        start = start - end;
    }
    
    while (start <= end) 
    {
        std::cout << start++ << std::endl;
    }
    
    return 0;
}