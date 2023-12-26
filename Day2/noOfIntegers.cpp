#include <iostream>
using namespace std;
int noOfIntegers(int n)
{

    int count = 0,rem;
    while (n > 0)
    {
        rem = n % 10;
        count++;
        n = n / 10;
    }

    return count;
}
int main()
{
    int n;
    cout << "Enter the Number";
    cin >> n;

    cout << "No of Integers are in Given No is :" << noOfIntegers(n) << endl;
}
