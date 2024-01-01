#include <iostream>
using namespace std;
int perfect_square(int n)
{

    for (int i = 1; i <= n / 2; i++)
    {
        if (i * i == n)
        {
            return true;
        }
    }

    return false;
}
int main()
{
    int n;
    cout << "Enter the Number";
    cin >> n;

    if (perfect_square(n))
    {
        cout << n << " is Perfect square : " << endl;
    }
    else
    {
        cout << n << " is not Perfect square :" << endl;
    }
}
