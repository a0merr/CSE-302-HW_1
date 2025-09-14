#include "LLUList.h"
#include <iostream>
#include <stdexcept>
using namespace std;
	LLUList::LLUList() {
    head = nullptr;
}
	LLUList::~LLUList() {
    Node *current = head;
    while (current) {
        Node *temp = current;
        current = current->next;
        delete temp;
    }
}
	void LLUList::insert(int value) {
    Node *newNode = new Node(value);
    if (!head) {
        head = newNode;
    } else {
        Node *temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
	int LLUList::getMin() const {
    if (!head)
        throw runtime_error("List is empty!");

    int minVal = head->data;
    Node *temp = head->next;
    while (temp) {
        if (temp->data < minVal)
            minVal = temp->data;
        temp = temp->next;
    }
    return minVal;
}
	int LLUList::getRange() const {
    if (!head)
        throw runtime_error("List is empty!");

    int minVal = head->data;
    int maxVal = head->data;

    Node *temp = head->next;
    while (temp) {
        if (temp->data < minVal)
            minVal = temp->data;
        if (temp->data > maxVal)
            maxVal = temp->data;
        temp = temp->next;
    }
    return maxVal - minVal;
}
	void LLUList::display() const {
    Node *temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
