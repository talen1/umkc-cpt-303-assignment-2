#include <iostream>
#include "Single_Linked_List.h"
#include "Employee.h"

int main() {
    // Test Single_Linked_List
    Single_Linked_List<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.insert(1, 4);
    list.remove(2);

    std::cout << "List contents: ";
    for (size_t i = 0; i < list.find(3); i++) {
        std::cout << list.front() << " ";
        list.pop_front();
    }
    std::cout << list.front
