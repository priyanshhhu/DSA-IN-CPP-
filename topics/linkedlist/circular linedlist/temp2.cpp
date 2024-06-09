// detect loop in linkedlist (using map)

#include <iostream>
#include <unordered_map>

using namespace std;
// Node structure
class Node {
    public:
    int data;
    Node* next;

    // Constructor
    Node(int value) {
        data = value;
        next = nullptr;
    }
};


int main() {
    int values[] = {1, 2, 3, 4};
    int size = sizeof(values) / sizeof(values[0]);
    Node* head = nullptr;
    Node* temp = nullptr;
    for (int i = 0; i < size; ++i) {
        Node* newNode = new Node(values[i]);
        if (head == nullptr) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = temp->next;
        }
    }
    if (temp != nullptr) {
        temp->next = head;
    }



    // Checking if a loop exists using the check function
    Node* curr = head;
    unordered_map<Node*,bool>visited;

    while (curr != nullptr) {
        if (visited[curr]==1) {
            cout << "Loop exists in the circular linked list." << endl;
            break;
        }
        visited[curr] = 1;
        curr = curr->next;
    }

    if (curr == nullptr) {
        cout << "No loop in the circular linked list." << endl;
    }


    return 0;
}
