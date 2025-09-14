#ifndef LLULIST_H
#define LLULIST_H
#include <iostream>
#include <stdexcept>
class LLUList {
private:
    struct Node {
        int data;
        Node* next;
        Node(int val) : data(val), next(nullptr) {}
    };
    Node* head;
public:
    LLUList();
    ~LLUList();
    void insert(int value);
    int getMin() const;
    int getRange() const;
    void display() const;
    // Added missing functions
    void MakeEmpty();
    void PutItem(int val);
};
#endif
