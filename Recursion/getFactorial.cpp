#include <iostream>
using namespace std;
int getFactorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * getFactorial(n - 1);
}
int main()
{
    int n;
    cout << "Enter the Number";
    cin >> n;

    cout << "Factorial of number : " << getFactorial(n) << endl;
}
