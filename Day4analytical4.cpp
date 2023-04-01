#include <iostream>
#include <string>

using namespace std;

bool isValidUsername(string username) {
   
    if (username.length() < 5 || username.length() > 15) {
        return false;
    }

    
    for (int i = 0; i < username.length(); i++) {
        char c = username[i];
        if (!isalnum(c) && c != '_' && c != '-') {
            return false;
        }
    }

    
    string reserved_keywords[] = {"admin", "root", "superuser", "guest"};
    for (int i = 0; i < sizeof(reserved_keywords)/sizeof(reserved_keywords[0]); i++) {
        if (username.compare(reserved_keywords[i]) == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    string username;
    cout << "Enter username: ";
    getline(cin, username);

    if (isValidUsername(username)) {
        cout << "Valid username" << endl;
    } else {
        cout << "Invalid username" << endl;
    }

    return 0;
}

