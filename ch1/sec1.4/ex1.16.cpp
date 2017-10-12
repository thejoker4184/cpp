#include <iostream>

int main()
{
    int value = 0;
    int sum = 0;
    
    while (std::cin >> value)
    {
        sum += value;
    }
    
    std::cout << "Sum of entered numbers is: " << sum << std::endl;
    
    return 0;
}