#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool isOpen(char c) {
    return c == '(' || c == '{' || c == '[';
}

bool isClose(char c) {
    return c == ')' || c == '}' || c == ']';
}

bool match(char l, char r) {
    return l == '(' && r == ')' 
    || l == '{' && r == '}'
    || l == '[' && r == ']';
}

int main() {
    string text;
    while (getline(cin, text)) {
        stack<char>s;
        int i = 0;
        bool exit = false;
        while (i < text.size() && !exit) {
            char c = text[i];
            if (isOpen(c))
                s.push(c);
            else if (isClose(c) && s.empty()) 
                exit = true;
            else if (isClose(c) && match(s.top(), c))
                s.pop();
            ++i;
        }

        if (!s.empty() || exit) 
            cout << "NO\n";
        else 
            cout << "YES\n";
    }
    return 0;
}