#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }};
void inorder(Node* root) {
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);}
void preorder(Node* root) {
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);}
void postorder(Node* root) {
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";}
void levelorder(Node* root) {
    if (root == NULL)
        return;
    Node* q[100];
    int front = 0;
    int rear = 0;
    q[rear++] = root;
    while (front < rear) {
        Node* temp = q[front++];
        cout << temp->data << " ";
        if (temp->left != NULL)
            q[rear++] = temp->left;
        if (temp->right != NULL)
            q[rear++] = temp->right;}}
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout << "Inorder: ";
    inorder(root);
    cout << "\nPreorder: ";
    preorder(root);
    cout << "\nPostorder: ";
    postorder(root);
    cout << "\nLevel Order: ";
    levelorder(root);
    return 0;
}