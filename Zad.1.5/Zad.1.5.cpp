

#include <iostream>
#include <string>

bool palindromeCheck(std::string str)
{
    int dl = str.size();

    for (int i = 0; i < dl / 2; i++)
    {
        if (str[i] =! str[dl - i - 1])
        {
            return 0;
        }
        return 1;
    }

}




int main()
{
    std::string tekst = {};
        std::cout << "Podaj tekst: ";
    std::cin >> tekst;
    std::cout << palindromeCheck(tekst);
}

