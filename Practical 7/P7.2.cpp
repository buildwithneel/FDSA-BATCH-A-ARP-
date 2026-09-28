#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
class Queue {
    Node* front;
    Node* rear;
public:
    Queue() {
        front = NULL;
        rear = NULL;
    }
    void arrive(int x) {
        Node* newNode = new Node;
        newNode->data = x;
        newNode->next = NULL;
        if (rear == NULL) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }printFront();
    }
    void attend() {
        if (front == NULL) {
            cout << "Error: Queue is empty\n";
            return;}
        Node* temp = front;
        front = front->next;
        if (front == NULL)
            rear = NULL;
        delete temp;
        printFront();
    }
    void printFront() {
        if (front == NULL)
            cout << "Front: Empty\n";
        else
            cout << "Front: " << front->data << endl;
    }
};

int main() {
    Queue q;
    cout<<"The Queue Will Be: \n";
    q.arrive(101);
    q.arrive(102);
    q.arrive(103);
    q.attend();
    q.arrive(104);
    q.attend();
    q.attend();
    q.attend();
}
