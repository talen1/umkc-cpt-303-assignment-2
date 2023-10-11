#pragma once

template <typename Item_Type>
class Single_Linked_List {
public:
    Single_Linked_List();  // Constructor
    ~Single_Linked_List(); // Destructor

    // Basic operations
    void push_front(const Item_Type& item);
    void push_back(const Item_Type& item);
    void pop_front();
    void pop_back();
    Item_Type front() const;
    Item_Type back() const;
    bool empty() const;

    // List manipulation
    void insert(size_t index, const Item_Type& item);
    bool remove(size_t index);
    size_t find(const Item_Type& item);

private:
    struct Node {
        Item_Type data;
        Node* next;
        Node(const Item_Type& item) : data(item), next(nullptr) {}
    };
    Node* head;
    Node* tail;
    size_t num_items;
};
