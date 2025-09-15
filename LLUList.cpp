    MakeEmpty();
}
void LLUList::MakeEmpty() {
    Node* current = head;
    while (current) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
    head = nullptr;
}
void LLUList::PutItem(int val) {
    insert(val);
}
void LLUList::insert(int value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
int LLUList::getMin() const {
    if (!head) {
        throw runtime_error("LLUList is empty!");
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
        throw runtime_error("LLUList is empty!");
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
    Node* current = head;
    cout << "{ ";
    while (current) {
        cout << current->data;
        if (current->next)
            cout << ", ";
        current = current->next;
    }
    cout << " }" << endl;
}
