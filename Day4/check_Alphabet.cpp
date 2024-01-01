#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the Character";
    cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout << ch << " is Alphabet : " << endl;
    }
    else
    {
        cout << ch << " is not a Alphabet :" << endl;
    }
}
