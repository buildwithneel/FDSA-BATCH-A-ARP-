#include <iostream>
using namespace std;
class Queue {
    int a[5];
    int front, rear, n;
public:
    Queue(int size) {
        n = size;
        front = 0;
        rear = -1;}
    void join(int x) {
        if (rear == n - 1) {
            cout << "Error: Queue is full\n";
            return;}
        rear++;
        a[rear] = x;
        printFront();}
    void serve() {
        if (front > rear) {
            cout << "Error: Queue is empty\n";
            return;}
        front++;
        printFront();
    }
    void printFront() {
        if (front > rear)
            cout << "Front: Empty\n";
        else
            cout << "Front: " << a[front] << endl;
    }
};
int main() {
    Queue q(5);
    cout<<"The Queue is: \n";
    q.join(101);
    q.join(102);
    q.join(103);
    q.serve();
    q.join(104);
    q.join(105);
    q.join(106);
    q.serve();
}
