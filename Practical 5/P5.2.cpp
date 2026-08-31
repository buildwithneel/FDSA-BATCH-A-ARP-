#include <iostream>
#include <string>
using namespace std;
class Node {
public:
    string name;
    Node* next;
    Node* prev;
    Node(string n) {
        name = n;
        next = NULL;
        prev = NULL;
    }
};
class CircularList {
    Node* head;
public:
    CircularList() {
        head = NULL;
    }
    void pushfront(string name) {
        Node* newNode = new Node(name);
        if (head == NULL) {
            head = newNode;
            head->next = head;
            head->prev = head;
            return;}
        Node* last = head->prev;
        newNode->next = head;
        newNode->prev = last;
        last->next = newNode;
        head->prev = newNode;
        head = newNode;}
    void pushafter(string student, string name) {
        if (head == NULL) {
            cout << "Student not found" << endl;
            return;}
        Node* current = head;
        do {
            if (current->name == student) {
                Node* newNode = new Node(name);
                Node* nextNode = current->next;
                newNode->prev = current;
                newNode->next = nextNode;
                current->next = newNode;
                nextNode->prev = newNode;
                return;
            }
            current = current->next;
        } while (current != head);
        cout << "Student not found" << endl;
    }
    void pop(string student) {
        if (head == NULL) {
            cout << "Circle is empty" << endl;
            return;}
        Node* current = head;
        do {
            if (current->name == student)
                break;
            current = current->next;
        } while (current != head);
        if (current->name != student) {
            cout << "Student not found" << endl;
            return;}
        if (current->next == current) {
            delete current;
            head = NULL;
            return;}
        current->prev->next = current->next;
        current->next->prev = current->prev;
        if (current == head)
            head = current->next;
        delete current;}
    void display() {
        if (head == NULL) {
            cout << "Circle is empty" << endl;
            return;
        }
        Node* current = head;
        do {
            cout << current->name << " ";
            current = current->next;
        } while (current != head);
        cout << endl;}};
int main() {
    CircularList circle;
    circle.pushfront("A");
    circle.pushafter("A", "B");
    circle.pushafter("B", "C");
    circle.pushafter("C", "D");
    circle.display();
    circle.pop("B");
    circle.display();
    circle.pop("A");
    circle.display();
    circle.pop("D");
    circle.display();
    return 0;
}