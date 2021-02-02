#include <iostream>

int main()
{
    int one, two, three, four, five;
    int sum;
    int mean;
    std::cout << "Enter five numbers to find the mean\n";
    std::cin >> one >> two >> three >> four >> five;
    sum = one + two + three + four + five;
    mean = sum / 5;
    std::cout << "=================The mean of your five numbers is :";
    std::cout << mean;
}
