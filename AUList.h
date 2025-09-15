#ifndef AULIST_H
#define AULIST_H
#include <stdexcept>
class AUList {
private:
    int* data;
    int size;
    int capacity;
    int currentPos;  // for iteration
public:
    AUList(int cap = 100);
    AUList(const AUList& other);
    ~AUList();
    void insert(int val);
    int getMin() const;
    int getRange() const;
    AUList DuplicateSE(int first, int last);
    void MakeEmpty();
    void PutItem(int val);
    // Iteration support
    void ResetList();
    int GetNextItem();
    int GetLength() const;
    int getAt(int index) const;
};
#endif

