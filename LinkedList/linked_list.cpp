#include <iostream>

using namespace std;

// Self referential structure
struct Node
{
    int data;
    struct Node *next;
} *first = NULL; // Size of this struct is 12 bytes

// Display Linked List
void display(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Data: " << ptr->data << endl;
        ptr = ptr->next;
    }
}
void create_linked_list(int A[], int size)
{
    int i;
    struct Node *ptr, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < size; i++)
    {
        ptr = new Node;
        ptr->data = A[i];
        ptr->next = NULL;
        last->next = ptr;
        last = ptr;
    }
}
int count_node(struct Node *ptr)
{
    int count = 0;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    return count;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    create_linked_list(arr, 5);
    display(first);
    cout << count_node(first) << endl;

    /*
        Node *node_1 = NULL;
        Node *node_2 = NULL;
        Node *node_3 = NULL;

        node_1 = new Node; // Node is created in HEAP
        first = node_1;
        node_1->data = 100;
        node_1->next = node_2;

        node_2->data = 200;
        node_2->next = node_3;

        node_3->data = 300;
        node_3->next = NULL;
        //Traverse through the linked list
        while (first != NULL){
            cout << "Data: " << first->data <<endl;
            first = node_1;
        }
        // Move to the next Node

        // Create another pointer for keeping track the ptr
        Node *ptr = NULL;
        ptr = new Node;
        Node *q_ptr;
        q_ptr = ptr;
    */
    return 0;
}