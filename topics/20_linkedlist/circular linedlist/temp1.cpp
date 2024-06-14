// detect loop in linkedlist
#include <iostream>
#include <vector>
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

// Function to check if a loop exists using visited nodes
bool check(vector<Node*>& visited, Node* curr) {
    for (int i = 0; i < visited.size(); i++) {
        if (visited[i] == curr) {
            return true;
        }
    }
    return false;
}

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
    vector<Node*> visited;

    while (curr != nullptr) {
        if (check(visited, curr)) {
            cout << "Loop exists in the circular linked list." << endl;
            break;
        }
        visited.push_back(curr);
        curr = curr->next;
    }

    if (curr == nullptr) {
        cout << "No loop in the circular linked list." << endl;
    }


    return 0;
}
