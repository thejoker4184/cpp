#include <iostream>

int main()
{
    int curVal = 0;
    int val = 0;
    int count = 0;
    
    if (std::cin >> curVal)
    {
        count = 1;
        while (std::cin >> val)
        {
            if (val == curVal)
                ++count;
            else 
            {
                std::cout << curVal << " occurs " << count << " times" << std::endl;
                count = 1;
                curVal = val;
            }
        }

        std::cout << curVal << " occurs " << count << " times" << std::endl;
    }
    
    return 0;
}