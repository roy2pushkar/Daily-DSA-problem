#include <iostream>
using namespace std;
int sumOfDivisors(int n)
{
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }

    return sum;
}
int main()
{
    int n = 12, sum = 0;

    int sum = sumOfDivisors(n);
    if (sum > n)
    {
        cout << n << " is an Abundant Number\n";
        }
    else
        cout << n << " is not an Abundant Number\n";
}