#include "LLUList.h"

LLUList::LLUList() {
    head = nullptr;
}

LLUList::~LLUList() {
    Node* current = head;
    while (current) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
}

void LLUList::insert(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

int LLUList::getMin() const {
    if (!head) {
        throw underflow_error("LLUList is empty!");
    }
    int minVal = head->data;
    Node* current = head->next;
    while (current) {
        if (current->data < minVal)
            minVal = current->data;
        current = current->next;
    }
    return minVal;
}

int LLUList::getRange() const {
    if (!head) {
        throw underflow_error("LLUList is empty!");
    }
    int minVal = head->data;
    int maxVal = head->data;
    Node* current = head->next;
    while (current) {
        if (current->data < minVal) minVal = current->data;
        if (current->data > maxVal) maxVal = current->data;
        current = current->next;
    }
    return maxVal - minVal;
}

void LLUList::display() const {
    cout << "{ ";
    Node* current = head;
    while (current) {
        cout << current->data;
        if (current->next)
            cout << ", ";
        current = current->next;
    }
    cout << " }" << endl;
}
