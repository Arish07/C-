#include <iostream>
#include <string>

using namespace std;

bool isPrime(int num)
{
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    string input;
    getline(cin, input);

    int prime_count = 0;
    int composite_count = 0;

    int start = 0;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == ' ')
        {
            int num = 0;
            for (int j = start; j < i; j++) {
                num = num * 10 + (input[j] - '0');
            }
            start = i + 1;

            if (isPrime(num))
            {
                prime_count++;
            }
            else
            {
                composite_count++;
            }
        }
    }
    int num = 0;
    for (int j = start; j < input.length(); j++) {
        num = num * 10 + (input[j] - '0');
    }
    if (isPrime(num))
    {
        prime_count++;
    }
    else
    {
        composite_count++;
    }

    cout << composite_count << endl;
    cout << prime_count << endl;

    return 0;
}

