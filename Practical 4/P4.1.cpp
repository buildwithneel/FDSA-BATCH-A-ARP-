#include <iostream>
using namespace std;

class Queue {
    int arr[100];
    int n;

public:
    Queue() {
        n = 0;}
    void pushfront(int x) {
        for (int i = n; i > 0; i--)
            arr[i] = arr[i - 1];
        arr[0] = x;
        n++;
        display();
    }
    void pushback(int x) {
        arr[n] = x;
        n++;
        display();
    }
    void pushat(int x, int pos) {
        if (pos < 0 || pos > n) {
            display();
            return;
        }
        for (int i = n; i > pos; i--)
            arr[i] = arr[i - 1];
        arr[pos] = x;
        n++;
        display();
    }
    void display() {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;}
};

int main() {
    Queue q;
    q.pushfront(10);
    q.pushback(20);
    q.pushfront(5);
    q.pushat(15, 2);
    q.pushat(25, 10);



    return 0;
}