

#include <iostream>

int main()
{
    int number = 0;
    std::cout << "Podaj liczbe: " << std::endl;
    std::cin >> number;

    if (number > 0)
    {
        std::cout << "Liczba wieksza od 0" << std::endl;
    }
    else if (number < 0)
    {
        std::cout << "Liczba mniejsza od 0" << std::endl;
    }
    else (number == 0)
    {
        std::cout << "Liczba rowna 0" << std::endl;
    }
}

