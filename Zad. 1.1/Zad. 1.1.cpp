

#include <iostream>

int main()
{
    int number1 = 1;
    int number2 = 2;
    int number3 = 3;

    if ((number1 > number2) && (number1 > number3))
    {
        std::cout << "Najwieksza:" << number1 << std::endl;
    }
    else if ((number2 > number1) && (number2 > number3))
    {
        std::cout << "Najwieksza:" << number2 << std::endl;
    }
    else
    {
    std::cout << "Najwieksza:" << number3 << std::endl;
    }

    int l = 0;
    std::cin >> l;

    std::cout << (l > 5) ? 0 : 1;


}

