#include <iostream>
using namespace std;
int powerOfNumber(int base, int power)
{

    int res = 1;
    for (int i = 1; i <= power; i++)
    {
        res = res * base;
    }

    return res;
}
int main()
{
    int base, power;
    cout << "Enter the base of Number";
    cin >> base;
    cout << "Enter the power of Number";
    cin >> power;

    cout << "Power of Given number is :" << powerOfNumber(base, power) << endl;
}
