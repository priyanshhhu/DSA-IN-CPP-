// detect loop in linkedlist (using slow and fast pointer)

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
    Node *slow = head;
    Node *fast = head;
    while(fast!=NULL&&fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            cout<<"loop exists";
            break;
        }
    }


    return 0;
}
