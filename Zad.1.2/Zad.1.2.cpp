

#include <iostream>

int main()
{
    std::cout << "Podaj wartosc: " << std::endl;

    int l = 0;
    std::cin >> l;

    if (l % 2)
    {
        std::cout << "Liczba jest nieparzysta" << std::endl;
    }
    else
    {
        std::cout << "Liczba jest parzysta" << std::endl;
    }
}

