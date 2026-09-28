#include <iostream>
using namespace std;
int main() {
    string history[1000];
    int top = -1;
    int ch;
    string page;
    cout<<"Enter the current Page: ";
    cin >> page;
    history[++top] = page;
    cout << "Current Page: " << history[top] << "\n";
while (cin >> ch) {
    if (ch == 1) {
    cin >> page;
    history[++top] = page;
    cout << "Current Page: " << history[top] << "\n";
    }
    else if (ch == 2) {
    if (top == 0)
    cout << "No previous page\n";
    else {
    top--;
    cout << "Current Page: " << history[top] << "\n";
    }
    }
    else
    break;
    }
    return 0;
}
