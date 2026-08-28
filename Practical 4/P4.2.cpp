#include <iostream>
using namespace std;

class Queue {
    struct Node {
        int data;
        Node* next;
    };
    Node* front;
public:
    Queue() {
        front = NULL;
    }
    void pushback(int x) {
        Node* newNode = new Node;
        newNode->data = x;
        newNode->next = NULL;

        if (front == NULL) {
            front = newNode;
            return;
        }
        Node* temp = front;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
    }
    void deletevalue(int x) {
        if (front == NULL)
            return;
        if (front->data == x) {
            Node* temp = front;
            front = front->next;
            delete temp;
            return;}
        Node* temp = front;
        while (temp->next != NULL && temp->next->data != x)
            temp = temp->next;
        if (temp->next != NULL) {
            Node* del = temp->next;
            temp->next = temp->next->next;
            delete del;
        }
    }
    void forwardtraversal() {
        Node* temp = front;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;}
    void reverseprint(Node* temp) {
        if (temp == NULL)
            return;
        reverseprint(temp->next);
        cout << temp->data << " ";
    }

    void reverse() {
        reverseprint(front);
        cout << endl;
    }
};
int main() {
    Queue q;

    q.pushback(10);
    q.pushback(20);
    q.pushback(30);
    q.pushback(40);
    q.pushback(50);
    q.forwardtraversal();
    q.deletevalue(30);
    q.forwardtraversal();
    q.reverse();
    return 0;
}