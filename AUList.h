#ifndef AULIST_H
#define AULIST_H
#include <stdexcept>
class AUList {
private:
    int* data;
    int size;
    int capacity;
public:
    AUList(int cap = 100);
    AUList(const AUList& other);
    ~AUList();

    void insert(int val);
    int getMin() const;
    int getRange() const;
    AUList DuplicateSE(int first, int last);
    // Added missing functions used in your tests
    void MakeEmpty();
    void PutItem(int val);

    int getSize() const { return size; }
    int getAt(int index) const;
};
#endif

