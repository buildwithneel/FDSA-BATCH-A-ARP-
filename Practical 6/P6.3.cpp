#include <iostream>
using namespace std;
int priority(char c) {
    if (c == '^')
        return 3;
    if (c == '*' || c == '/')
        return 2;
    if (c == '+' || c == '-')
        return 1;
    return 0;
}
int main() {
    string s, ans = "";
    char st[1000];
    int top = -1;
    cout<<"Enter Your Expression: ";
    cin >> s;
for (char c : s) {
    if (isalnum(c))
        ans += c;
    else if (c == '(')
        st[++top] = c;
    else if (c == ')') {
        while (top != -1 && st[top] != '(') {
            ans += st[top--];
    }
    if (top != -1)
    top--;
    }
    else {
    while (top != -1 && st[top] != '(' &&
        priority(st[top]) >= priority(c)) {
        ans += st[top--];
        }
    st[++top] = c;
    }
    }
    while (top != -1)
    ans += st[top--];
    cout << ans;
    return 0;
}