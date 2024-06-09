#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

Node* createLinkedList(int arr[], int index, int size) {
    if (index == size) {
        return NULL;
    }

    Node* temp;
    temp = new Node(arr[index]);
    temp->next = createLinkedList(arr, index + 1, size);

    return temp;
}

Node* reverse(Node* curr, Node* prev) {
    if (curr == NULL) {
        return prev;
    }
    Node* front = curr->next;
    curr->next = prev;
    return reverse(front, curr);
}

int main() {
    Node* Head1;
    Head1 = NULL;

    int arr[] = {9,7,6,8,4};
    Head1 = createLinkedList(arr, 0, 5);

    Node* Head2;
    Head2 = NULL;

    int arr2[] = {6,4,3,8};
    Head2 = createLinkedList(arr2, 0, 4);

    Node* first, *second;
    first = reverse(Head1, NULL);
    second = reverse(Head2, NULL);

    Node* curr1 = first;
    Node* curr2 = second;

    Node* head = new Node(0);
    Node* tail = head;
    int carry = 0;

    while (curr1 && curr2) {
        int sum = curr1->data + curr2->data + carry;
        tail->next = new Node(sum % 10);
        tail = tail->next;
        curr1 = curr1->next;
        curr2 = curr2->next;
        carry = sum / 10;
    }

    while (curr1) {
        int sum = curr1->data + carry;
        tail->next = new Node(sum % 10);
        tail = tail->next;
        curr1 = curr1->next;
        carry = sum / 10;
    }

    while (curr2) {
        int sum = curr2->data + carry;
        tail->next = new Node(sum % 10);
        curr2 = curr2->next;
        carry = sum / 10;
    }

    while (carry) {
        tail->next = new Node(carry % 10);
        tail = tail->next;
        carry /= 10;
    }

    head = reverse(head->next, NULL);

    // Print

    Node* trav3 = head;
    while (trav3) {
        cout << trav3->data << " ";
        trav3 = trav3->next;
    }

    return 0;
}
