#include <iostream>

template <typename T>
struct node
{
    T value;
    node<T> *next = nullptr;
};

template <typename T>
void print_nodes(const node<T> *head)
{
    if (head != nullptr)
    {
        std::cout << head->value << "\n";
        print_nodes(head->next);
    }
}

template <typename T>
void insert_before_head(node<T> *&head, const T &value)
{
    // Create a new node with a value and a pointer to prev head
    node<T> *new_node = new node<T> {value, head};
    // New head is a new node
    head = new_node;
}

template <typename T>
void insert_at_end(node<T> *&head, const T &value)
{
    if (head == nullptr)
    {
        node<T> *new_node = new node<T>{value};
        head = new_node;
    }
    insert_at_end(head->next, value);
}