#include <iostream>
#include <string>

using namespace std;

int main()
{
    string words;
    cout << "Enter a word with hyphens as separation" << "\n";
    cin >> words;
    string singleWord;
    for (int i = 0; i < words.length(); i++)
    {
        if(words[i]=='-'){
            continue;
        }

        singleWord += words[i];
        if (words[i + 1] == '-' ||i+1== words.length())
        {
            cout << singleWord.length() << ' ' << words << "\n";
            singleWord.clear();
        }
    }
}

