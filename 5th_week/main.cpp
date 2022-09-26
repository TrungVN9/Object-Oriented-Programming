#include <iostream>

#include "node_struct.h"

int main()
{
    node<int> *my_list = nullptr;
    insert_before_head(my_list, 10);
    print_nodes(my_list);
    return 0;
}