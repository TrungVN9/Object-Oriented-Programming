#include <iostream>
#include <random>
#include <chrono>
#include <vector>
#include <algorithm>
#include "bubble_sort.h"

// Sort numerical data from least to greatest as fast as possible using few resources.
// void swap(T &x, T &y)
// {
//     T temp = x;
//     x = y;
//     y = temp;
// }
// Process `n - 1` times to generate sort.
// template <typename T>
// void bubble_sort(std::vector<int> &items)
void bubble_sort(int items[], int size_arr)
{
    for (size_t index = 0; index < size_arr - 1; index++)
    {
        for (size_t index_j = 0; index_j < size_arr - 1; index_j++)
        {
            if (items[index_j] > items[index_j + 1])
            {
                std::swap(items[index_j], items[index_j + 1]);
            }
        }
    }
}
void print_arr(int arr[], int size_arr)
{
    for (int index = 0; index < size_arr; index++)
    {
        std::cout << arr[index] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> sizes = {10000, 20000, 30000, 40000, 50000};
    for (auto size : sizes)
    {
        std::vector<int> nums;
        nums.resize(size);
        // std::vector<int> nums(10000);
        std::mt19937 e;
        std::uniform_int_distribution<int> u;
        for (auto &n : nums)
            n = u(e);
        auto start = std::chrono::steady_clock::now();
        std::sort(nums.begin(), nums.end());
        auto end = std::chrono::steady_clock::now();
        auto diff = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
        std::cout << "The running time for std::sort: with " << nums.size() << " is " << diff.count() << std::endl;

        auto start_1 = std::chrono::steady_clock::now();
        bubble_sort_vect(nums);
        auto end_1 = std::chrono::steady_clock::now();
        auto diff_1 = std::chrono::duration_cast<std::chrono::milliseconds>(end_1 - start_1);
        std::cout << "The running time for bubble sort: with " << nums.size() << " is " << diff_1.count() << std::endl;
    }
    // Print
    // for (int index = 0; index < 50; index++)
    // {
    //     std::cout << nums[index] << "\t";
    // }

    /// ***********
    // std::vector<int> nums(10000);
    // std::mt19937 e;
    // std::uniform_int_distribution<int> u;
    // for (auto &n : nums)
    //     n = u(e);
    // timer<std::chrono::microseconds> my_timer;
    // my_timer.start();
    // std::sort(nums.begin(), nums.end());
    // my_timer.stop();
    // std::cout << "The running time: " << my_timer.count() << std::endl;

    // int arr[10] = {1, 10, 2, 20, 3, 30, 4, 40, 5, 50};
    // print_arr(arr, 10);

    // bubble_sort(arr, 10);
    // print_arr(arr, 10);
    //************ Day 1 ************
    // std::default_random_engine e;
    // std::vector<int> vect(0, 0);
    // std::mt19937 e;
    // std::uniform_int_distribution<int> u(0, 10000);
    // for (int index = 0; index < 1000000; index++)
    // {
    //     vect.push_back(u(e));
    // }
    // auto start = std::chrono::steady_clock::now();
    // std::sort(vect.begin(), vect.end());
    // auto end = std::chrono::steady_clock::now();
    // // std::chrono::duration<double> elapsed_second = end - start;
    // auto diff = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    // std::cout << "Difference: "<< diff.count() << std::endl;

    // *********************

    return 0;
}