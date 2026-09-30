#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of vehicles: ";
    cin >> n;
    int table[10];
    for (int i = 0; i < 10; i++)
        table[i] = -1;
    cout << "Enter vehicle registration numbers:\n";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        int pos = num % 10;
        int start = pos;
        while (table[pos] != -1) {
            pos = (pos + 1) % 10;
            if (pos == start) {
                cout << "Parking lot is full.\n";
                break;
            }
        }
        if (table[pos] == -1)
            table[pos] = num;
    }
    cout << "Final parking slots:\n";
    for (int i = 0; i < 10; i++)
        cout << "Slot " << i << ": " << table[i] << endl;
    return 0;
}