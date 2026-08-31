#include <iostream>
#include <string>
using namespace std;
class Node {
public:
    string song;
    Node* prev;
    Node* next;
    Node(string s) {
        song = s;
        prev = NULL;
        next = NULL;}};
class Playlist {
    Node* head;
    Node* tail;
    int count;
public:
    Playlist() {
        head = NULL;
        tail = NULL;
        count = 0;}
    void display() {
        Node* current = head;
        cout << "Playlist: ";
        while (current != NULL) {
            cout << current->song;
            if (current->next != NULL) {
                cout << " <-> ";
            }
            current = current->next;
        }
        cout << endl;
        cout << "Count: " << count << endl;
        cout << endl;
    }void pushfront(string song) {
        Node* newNode = new Node(song);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        count++;
        display();
    }void pushback(string song) {
        Node* newNode = new Node(song);
        if (tail == NULL) {
            head = tail = newNode;
        } else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
        count++;
        display();
    }void pushafter(string target, string song) {
        Node* current = head;
        while (current != NULL && current->song != target) {
            current = current->next;
        }if (current == NULL) {
            cout << "Song not found. Insertion failed." << endl;
            display();
            return;
        }Node* newNode = new Node(song);
        newNode->prev = current;
        newNode->next = current->next;
        if (current->next != NULL) {
            current->next->prev = newNode;}
         else {
            tail = newNode;}
        current->next = newNode;
        count++;
        display();
    }
     void popfront() {
        if (head == NULL) {
            cout << "Playlist is empty." << endl;
            display();
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        } else {
            tail = NULL;
        }
        delete temp;
        count--;
        display();
    }
};
int main() {
    Playlist playlist;
    playlist.pushfront("Song A");
    playlist.pushback("Song B");
    playlist.pushback("Song C");
    playlist.pushafter("Song B", "Song X");
    playlist.pushafter("Song C", "Song D");
    playlist.popfront();
    playlist.pushafter("Song Z", "Song E");
    playlist.popfront();
    return 0;
}