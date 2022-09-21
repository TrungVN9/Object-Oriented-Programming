#include <algorithm>
#include <vector>

void bubble_sort_vect(std::vector<int> &items)
{
    for (size_t index = 0; index < items.size() - 1; index++)
    {
        for (size_t index_j = 0; index_j < items.size() - 1; index_j++)
        {
            if (items[index_j] > items[index_j + 1])
            {
                std::swap(items[index_j], items[index_j + 1]);
            }
        }
    }
}