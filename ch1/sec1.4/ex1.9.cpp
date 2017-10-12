#include <iostream>

int main() 
{
    int start = 50;
    int end = 100;
    int sum = 0;
    
    while(start <= end)
    {
        sum += start++;
    }
    
    std::cout << "Sum = " << sum << std::endl;
    
    return 0;
}