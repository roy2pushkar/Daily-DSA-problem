#include <iostream>
using namespace std;

int main()
{
    string word;
    cout << "Enter the word: ";
    getline(cin, word);

    string result = "";
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == ' ' || word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
            word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
        {
            continue;
        }
        else
        {

            result += word[i];
        }
    }

    cout << "String after removing vowels: " << result << endl;

    return 0;
}
