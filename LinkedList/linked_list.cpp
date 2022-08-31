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
    int index = 0;
    while (ptr != NULL)
    {
        cout << "Index " << index << ": " << ptr->data << endl;
        ptr = ptr->next;
        index++;
    }
}
// Create Linked List based on the array
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
void linked_list(int arr[], int SIZE)
{
    int index;
    struct Node *last_node, *ptr;

    // Every new node is created
    first = new Node;
    first->data = arr[0];
    first->next = NULL;
    last_node = first;
}
// Count the number of nodes
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
// Sum of all nodes
int sum_nodes(struct Node *ptr)
{
    int sum = 0;
    while (ptr != NULL)
    {
        sum += ptr->data;
        ptr = ptr->next;
    }
    return sum;
}
// Max value of nodes in the linked list
int max_node(struct Node *ptr)
{
    int max = ptr->data;
    while (ptr != NULL)
    {
        if (max < ptr->data)
        {
            max = ptr->data;
        }
        ptr = ptr->next;
    }
    return max;
}
// Min value of nodes in the linked list
int min_node(struct Node *ptr)
{
    int min = ptr->data;
    while (ptr)
    {
        if (min > ptr->data)
        {
            min = ptr->data;
        }
        ptr = ptr->next;
    }
    return min;
}
// Linear Search for key returning the associated index
int linear_search(struct Node *ptr, int key)
{
    int index = 0;
    while (ptr != NULL)
    {
        if (key == ptr->data)
        {
            return index;
        }
        ptr = ptr->next;
        index++;
    }
    return 0;
}

/* Insert Nodes 
 1. Insert a node before first node (constant time)
    + Create a new node
    + Initialize the new node
    + Make it become first node by pointing to the first.
    + Make it to become first
    -----
    Node *inserted_node = new Node;
    inserted_node-> data = x;
    inserted_node->next = first;
    first = inserted_node;
2. Insert a node to a certain position O(n)
    Ex: pos = 4

    Node *inserted_node = new Node;
    inserted_node->data = x;
    ptr = first;
    for(int i = 0; i < pos - 1; i++){
        ptr = ptr->next;
    }
    inserted_node->next = ptr->next;
    ptr->next = inserted_node;
*/
void insert_node(int position, int value){
    Node *track, *ptr;
    //Insert a node before first node
    if(position == 0){
        track = new Node;
        track->data = value;
        track->next = first;
        first = track;
    }
    else if (position > 0){
        ptr = first;
        for (int i = 0; i < position - 1 && ptr; i++){
            ptr = ptr->next;
        }
        if (ptr != NULL){
            track = new Node;
            track->data = value;
            track->next = ptr->next;
            ptr->next = track;
        }
    }
}

int main()
{
    int arr[5] = {100, 50, 20, 2000, 10};
    create_linked_list(arr, 5);
    display(first);
    cout << "Number of Nodes: "<< count_node(first) << endl;
    cout << "Sum: " <<sum_nodes(first) << endl;
    cout << "Number of Nodes: " << count_node(first) << endl;
    cout << "Max: " << max_node(first) << endl;
    cout << "Min : " << min_node(first) << endl;
    int key = 10;
    cout << "Linear Search Key " << key << ": "
         << "at Index " << linear_search(first, key) << endl;
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
