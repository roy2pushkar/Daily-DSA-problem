#include <iostream>
using namespace std;
int powerOfNumber(int base, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return base *powerOfNumber(base , n-1);
    }
}
int main()
{
    int base;
    cout << "Enter base";
    cin >> base;
    int n;
    cout << "Enter power";
    cin >> n;

    cout << "Power of given number is : " << powerOfNumber(base, n) << endl;
}
