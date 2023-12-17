/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int noOfDivisors(int num)
{

    int count = 0;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            count++;
    }

    return count;
}

int main()
{
    int n = 7, x = 2, cnt = 0;
    ;

    for (int i = 1; i <= n; i++)
    {
        if (noOfDivisors(i) == x)
        {
            cnt++;
        }
    }
    cout << "No of Integers :" << cnt;
}