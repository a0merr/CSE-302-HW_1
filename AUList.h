#ifndef AUList_h
#define AUList_h

#include <stdexcept>

class AUList {
private:
    int* data;      
    int size;       
    int capacity;   

public:
    // Constructors & Destructor
    AUList(int cap = 100);           
    AUList(const AUList& other);     
    ~AUList();                       

    // Core functions
    void insert(int val);            
    int getMin() const;              
    int getRange() const;            
    AUList DuplicateSE(int first, int last);  

    // Utility functions
    int getSize() const { return size; }      
    int getAt(int index) const;               
};

#endif

