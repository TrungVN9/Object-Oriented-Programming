class Node:
    def __init__(self, value):
        self.value = value
        self.next = None
class LinkedList:
    def __init__(self, value):
        new_node = Node(value)
        self.head = new_node
        self.tail = new_node
        self.length = 1
    
    def print_list(self):
        temp = self.head
        while temp:
            print(temp.value)
            temp = temp.next
    
    def append_list(self, value):
        new_node = Node(value)
        if self.head is None:
            self.head = new_node
            self.tail = new_node
        else:
            self.tail.next = new_node
            self.tail = new_node
            self.length += 1
    #Create temp and pre vars to keep track the list
    #Traverse along the list, if temp is not None, pre = temp until temp is None, pre = tail
    def pop_list(self):
        if self.length == 0:
            return None
        temp = self.head
        pre = self.head
        while (temp.next):
            pre = temp
            temp = temp.next
        self.tail = pre
        self.tail.next = None
        self.length -= 1
        if self.length == 0:
            self.head = None
            self.tail = None
        return temp.value #To get value that is popped 
myList = LinkedList(4)
myList.append_list(2)
myList.append_list(5)
print('value popped: ',myList.pop_list())
myList.append_list(10)
myList.append_list(20)
print('value popped: ', myList.pop_list())
myList.print_list()
      

