#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtHead(Node*& head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

int main() {
    // Creating the first node with data
    Node* node1 = new Node(10);  // Example data value
    cout << "Node 1 data: " << node1->data << endl;
    cout << "Node 1 next: " << node1->next << endl;

    Node* head = node1;

    // Inserting a new node at the head
    InsertAtHead(head, 20);
    cout << "New head data: " << head->data << endl;
    cout << "Next node data: " << head->next->data << endl;

    return 0;
}
