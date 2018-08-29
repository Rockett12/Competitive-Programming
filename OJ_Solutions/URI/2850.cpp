#include <iostream>
using namespace std;

int main() {
    string s;
    while (cin >> s) {
        if (s[0] == 'e') cout << "ingles\n";
        else if (s[0] ==  'd') cout << "frances\n";
        else if (s[0] == 'n') cout<< "portugues\n";
        else cin>>s, cout << "caiu\n";
    }
}

