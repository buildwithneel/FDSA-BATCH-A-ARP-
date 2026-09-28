#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of elements:";
    cin >> n;
    int st[n], top = -1;
    int ch, x;
    cout<<"Enter 1 for Insertion and 2 for deletion \n";
    cout<<"Input Example 1/2 Element \n";
while (cin >> ch) {
    if (ch == 1) {
    cout<<"Enter the Numbers : ";
    cin >> x;
    if (top == n - 1)
        cout << "Stack Overflow\n";
    else {
        st[++top] = x;
        cout << "Top: " << st[top] << "\n";
    }}
    else if (ch == 2) {
    if (top == -1)
        cout << "Stack Underflow\n";
    else {
        --top;
    if (top == -1)
        cout << "Stack Empty\n";
    else
        cout << "Top: " << st[top] << "\n";}}
    else
        break;}
    return 0;
}
