#include <iostream>
using namespace std;

int lengthOfString(string s, int index)
{
    // Termination condition: if the current character is null
    if (s[index] == '\0')
    {
        return 0;
    }
    // Recursive call: move to the next character in the string
    return (1 + lengthOfString(s, index + 1));
}

int main()
{
    string s;
    cout << "Enter the String: ";
    cin >> s;

    // Start the recursion from the first character (index 0)
    cout << "Length of String is : " << lengthOfString(s, 0) << endl;

    return 0;
}
