/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdio.h>

using namespace std;
int getDivisorsSum(int num)
{

    int sum = 0;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
            sum = sum + i;
    }
    return sum;
}

int main()
{
    int num1 = 6, num2 = 140;

    if (getDivisorsSum(num1) / num1 == getDivisorsSum(num2) / num2)
        cout << num1 << " & " << num2 << " are friendly pairs";
    else
        cout << num1 << " & " << num2 << " are not friendly pairs";
}