// remove loop in linkedlist

    // solution
    /*
    steps:
    1. detect loop
    2. move slow to head
    3. both slow and fast will meet at starting of loop
    4. move slow until it meets slow->next==fast
    */

#include <iostream>
#include <vector>

// Node structure
struct Node {
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



    // solution
    Node *slow = head, *fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            break;
        }
    }
    if(fast==NULL||fast->next==NULL){
        return 0;
    }
    slow = head;
    while(slow!=fast){
        slow = slow->next;
        fast = fast->next;
    }
    while(slow->next!=fast){
        slow=slow->next;
    }
    slow->next = NULL;

    

    return 0;
}
