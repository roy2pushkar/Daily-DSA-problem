#include <iostream>
using namespace std;
int hcfOfNumber(int num1, int num2)
{
    if (num1 == 0)
    {
        return num2;
    }
    if (num2 == 0)
    {
        return num1;
    }
    if (num1 == num2)
    {
        return num1;
    }
    else if (num1 > num2)
    {
        return hcfOfNumber(num1 - num2, num2);
    }
    else
    {
        return hcfOfNumber(num1, num2 - num1);
    }
}
int main()
{
    int num1;
    cout << "Enter first number";
    cin >> num1;
    int num2;
    cout << "Enter second number";
    cin >> num2;

    cout << "HCF of Given two Number is : " << hcfOfNumber(num1, num2) << endl;
}
