#include <iostream>

int main()
{
    //sum 50 to 100
    int sum = 0;
    for (int i = 50; i <= 100; ++i )
        sum += i;    

    std::cout << "Sum of 50 to 100 is : " << sum << std::endl;
    
    //print 10 to 0
    for (int i = 10; i >= 0; --i)
        std::cout << i << std::endl;
    
    
    //print numbers from start to end
    int start = 0;
    int end = 0;
    
    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> start >> end;
    
    for (int i = start; i <= end; ++i) 
    {
        std::cout << i << std::endl;
    }
    
    return 0;
}