// 40. Program to find and print the length of a singly linked list.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

int lengthOfLinkedList(Node* head) {
    int length = 0;
    Node* current = head;
    while (current != nullptr) {
        length++;
        current = current->next;
    }
    return length;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    int length = lengthOfLinkedList(head);
    cout << "Length of the linked list: " << length << endl;
    return 0;
}
