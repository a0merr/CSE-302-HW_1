#include "AUList.h"
#include <iostream>
#include <stdexcept>
using namespace std;

AUList::AUList(int cap) {
    capacity = cap;
    size = 0;
    data = new int[capacity];
}
	AUList::AUList(const AUList& other) {
    capacity = other.capacity;
    size = other.size;
    data = new int[capacity];
    for (int i = 0; i < size; i++)
        data[i] = other.data[i];
}
AUList::~AUList() {
    delete[] data;
}
void AUList::insert(int val) {
    if (size >= capacity)
        throw runtime_error("List capacity exceeded");
    data[size++] = val;
}
int AUList::getMin() const {
    if (size == 0)
        throw runtime_error("List is empty!");

    int minVal = data[0];
    for (int i = 1; i < size; i++) {
        if (data[i] < minVal)
            minVal = data[i];
    }
    return minVal;
}


int AUList::getRange() const {
    if (size == 0)
        throw runtime_error("List is empty!");

    int minVal = data[0];
    int maxVal = data[0];
    for (int i = 1; i < size; i++) {
        if (data[i] < minVal) minVal = data[i];
        if (data[i] > maxVal) maxVal = data[i];
    }
    return maxVal - minVal;
}
AUList AUList::DuplicateSE(int first, int last) {
    if (first < 0 || last >= size || first > last)
        throw runtime_error("Invalid indices");

    AUList newList(last - first + 1);
    for (int i = first; i <= last; i++)
        newList.insert(data[i]);

    return newList;
}

// 
int AUList::getAt(int index) const {
    if (index < 0 || index >= size)
        throw out_of_range("Index out of bounds");
    return data[index];
}
