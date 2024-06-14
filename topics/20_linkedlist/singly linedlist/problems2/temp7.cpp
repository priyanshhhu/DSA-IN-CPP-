// flattening a linkedlist (without using extra memory)

#include <iostream>

struct Node {
    int data;
    Node* next;
    Node* bottom;

    Node(int value) {
        data = value;
        next = nullptr;
        bottom = nullptr;
    }
};


Node* createLinkedListFromArray(int arr[], int size) {
    if (size == 0) {
        return nullptr;
    }

    Node* head = new Node(arr[0]);
    Node* current = head;

    for (int i = 1; i < size; ++i) {
        current->next = new Node(arr[i]);
        current = current->next;
    }

    return head;
}

Node *merge(Node* head1, Node *head2){
    Node *head = new Node(0);
    Node *tail = head;
    while(head1 && head2){
        if(head1->data<=head2->data){
            tail->bottom = head1;
            head1=head1->bottom;
            tail=tail->bottom;
            tail->bottom=NULL;
        }else{
            tail->bottom = head2;
            head2 = head2->bottom;
            tail=tail->bottom;
            tail->bottom=NULL;
        }
    }if(head1){
        tail->bottom=head1;
    }else{
        tail->bottom=head2;
    }
    return head->next;
}

int main() {
    // creating the linkedlist
    int mainListArr[] = {5, 10, 19, 28, 30};
    Node* mainList = createLinkedListFromArray(mainListArr, sizeof(mainListArr) / sizeof(mainListArr[0]));

    int sublist1Arr[] = {7, 8, 30};
    mainList->bottom = createLinkedListFromArray(sublist1Arr, sizeof(sublist1Arr) / sizeof(sublist1Arr[0]));

    int sublist2Arr[] = {20, 40};
    mainList->next->bottom = createLinkedListFromArray(sublist2Arr, sizeof(sublist2Arr) / sizeof(sublist2Arr[0]));

    int sublist3Arr[] = {22, 50};
    mainList->next->next->bottom = createLinkedListFromArray(sublist3Arr, sizeof(sublist3Arr) / sizeof(sublist3Arr[0]));

    int sublist4Arr[] = {35, 40, 45};
    mainList->next->next->next->bottom = createLinkedListFromArray(sublist4Arr, sizeof(sublist4Arr) / sizeof(sublist4Arr[0]));

    int sublist5Arr[] = {34, 40};
    mainList->next->next->next->next->bottom = createLinkedListFromArray(sublist5Arr, sizeof(sublist5Arr) / sizeof(sublist5Arr[0]));

    // solution:



    return 0;
}

