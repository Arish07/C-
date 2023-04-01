#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "Enter a word: ";
    cin >> str;

    string rev_str = "";

    for (int i = str.length() - 1; i >= 0; i--)
    {
        rev_str += str[i];
    }

    cout << "Reverse String: " << rev_str << endl;

    return 0;
}

