#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    int newNumber = 0;
    int multiplier = 1;

    // Input: User enters a number
    cin >> num;

    while (num > 0)
    {
        // Extract the last digit
        int digit = num % 10;

        // If the digit is 0, replace it with 1
        if (digit == 0)
        {
            digit = 1;
        }

        // Update the newNumber with the modified digit
        newNumber = newNumber + digit * multiplier;

        // Remove the last digit from num
        num = num / 10;

        // Update the multiplier for the next iteration
        multiplier *= 10;
    }
    // Display the previous and new values at each step
    cout << "Previous value: " << num << endl;
    cout << "New value is: " << newNumber << endl;

    return 0;
}
