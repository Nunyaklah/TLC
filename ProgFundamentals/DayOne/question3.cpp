#include <iostream>

void numberFunction()
{
    int userNum;
    std::cout << "Please enter a number, any number actually\n";
    std::cin >> userNum;
    if (userNum % 2 == 0)
    {
        for (int i = 1; i < 21; i++)
        {
            std::cout << i << "*" << userNum << "=" << i * userNum << "\n";
        }
    }
    else
    {
        for (int j = 1; j < 31; j++)
        {
            if (j % userNum != 0)
            {
                std::cout << j << "\n";
            }
        }
    }
}

int main()
{
    numberFunction();
}
