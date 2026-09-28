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
Node* insert(Node* root, int x) {
    if (root == NULL)
        return new Node(x);
    if (x < root->data)
        root->left = insert(root->left, x);
    else if (x > root->data)
        root->right = insert(root->right, x);
    return root; }
void inorder(Node* root) {
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right); }
int main() {
    Node* root = NULL;
    int a[] = {50, 30, 70, 20, 40, 60, 80};
    for (int x : a)
        root = insert(root, x);
    cout << "Inorder: ";
    inorder(root);
    return 0; }