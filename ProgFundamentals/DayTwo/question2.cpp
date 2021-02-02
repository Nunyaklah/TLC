#include <iostream>

using namespace std;
int main()
{
    int number;
    int *numberptr;
    *numberptr = &number;
    int &rnumber = number;
    const int cnumber = 10;

    number = 5;
    *numberptr++;
    rnumber++;

    cout << number << '\n';

    float x = 0xf3f2;
    float y = 0437;
    float z = 'a';

    cout << x << '\n';
    cout << y << '\n';
    cout << z << '\n';
}