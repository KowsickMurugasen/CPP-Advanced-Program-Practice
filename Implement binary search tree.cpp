#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int v) : data(v), left(NULL), right(NULL) {}
};

Node* insert(Node* root, int val) {
    if (!root) return new Node(val);
    val < root->data ? root->left = insert(root->left, val) : root->right = insert(root->right, val);
    return root;
}

void inorder(Node* root) {
    if (root) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    Node* root = NULL;
    int n, val;
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter values:\n";
    while (n--) {
        cin >> val;
        root = insert(root, val);
    }
    cout << "Inorder traversal: ";
    inorder(root);
}
