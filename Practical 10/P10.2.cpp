#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of books: ";
    cin >> n;
    int shelf[10][100];
    int count[10] = {0};
    cout << "Enter book codes:\n";
    for (int i = 0; i < n; i++) {
        int code;
        cin >> code;
        int pos = code % 10;
        shelf[pos][count[pos]] = code;
        count[pos]++;}
    cout << "Final shelf contents:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Shelf " << i << ": ";
        if (count[i] == 0) {
            cout << "Empty";
        } else {
            for (int j = 0; j < count[i]; j++)
                cout << shelf[i][j] << " ";}
        cout << endl;}
    return 0;
}