#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    int table[10];
    for (int i = 0; i < 10; i++)
        table[i] = -1;
    cout << "Enter student IDs:\n";
    for (int i = 0; i < n; i++) {
        int id;
        cin >> id;
        int h1 = id % 10;
        int h2 = 7 - (id % 7);
        int pos = h1;
        int j = 0;
        while (table[pos] != -1 && j < 10) {
            j++;
            pos = (h1 + j * h2) % 10;
        }
        if (j < 10)
            table[pos] = id;
        else
            cout << "Table is full.\n";
    }
    cout << "Final table:\n";
    for (int i = 0; i < 10; i++)
        cout << "Slot " << i << ": " << table[i] << endl;
    return 0;
}