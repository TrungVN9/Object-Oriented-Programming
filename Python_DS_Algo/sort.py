#Swap helper function
def swap_helper(num1, num2):
    return num2, num1

#Selection sort
def selection_sort(my_list):
    for i in range(len(my_list) - 1):
        min_index = i
        for j in range(i + 1, len(my_list)):
            if my_list[min_index] > my_list[j]:
                min_index = j
        if i!= min_index:
            temp = my_list[i]
            my_list[i] = my_list[min_index]
            my_list[min_index] = temp
    return my_list

#Insertion sort
def insertion_sort(my_list):
    for i in range(1, len(my_list)-1):
        temp_val = my_list[i]
        j = i - 1
        while temp_val < my_list[j] and j > -1:
            my_list[j+1] = my_list[j]
            my_list[j] = temp_val
            j -= 1
    return my_list
            
        
print(selection_sort([1, 10, 2, 20, 3, 30, 4, 40, 5, 50]))
print(insertion_sort([1, 10, 2, 20, 3, 30, 4, 40, 5, 50]))
