#include <iostream>
using namespace std;

int main()
{
    string word;
    cout << "Enter the word: ";
    cin >> word;

    string str = "";
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == ' ' || word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
            word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
        {
            continue;
        }
        else
        {
            str = str + word[i];
        }
    }

    cout << "String after removing vowels: " << str << endl;

    return 0;
}
