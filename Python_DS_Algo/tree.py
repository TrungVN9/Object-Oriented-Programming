'''
    Tree is designed based on linked list where one node points to many other nodes
                4
               /  \
              3   23
             /      \
            5        50
    {
        "value" : 4,
        "left" : { "value" : 3,
                    "left" : 5,
                    "right": None
                },
        "right" : { "value" : 23,
                    "right" : 50,
                    "left" : None
                    }
    }   
    lookup(), insert(), remove(): O(log n)
'''
class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

class binary_search_tree:
    def __init__(self):
        self.root = None
    '''
        create new_node
        temp = self.root
        while loop
            if new_node == temp return False
            if < left
                else > right
            if None Insert new_node else move to next
    '''
    def insert(self, value):
        new_node = Node(value)
        if self.root is None:
            self.root = new_node
            return True
        temp = self.root
        while True:
            if new_node.value == temp.value:
                return False
            if new_node.value < temp.value:
                if temp.left is None:
                    temp.left = new_node
                    return True
                temp = temp.left
            else:
                if temp.right is None:
                    temp.right = new_node
                    return True
                temp = temp.right
    '''
        if root == None return False
        temp = self.root
        while temp is not None:
            if < left 
            elif > right
            else = return True
        return False
    '''
    def contain(self, value):
        if self.root is None: #Check empty tree
            return False
        temp = self.root
        while temp:
            if value == temp.value:
                return True
            if value < temp.value:
                temp = temp.left
            else:
                temp = temp.right
        return False
    def min_value_node(self, current_node):
        while current_node.left is not None:
            current_node = current_node.left
        return current_node
        
        
                
        
my_tree = binary_search_tree()
print(my_tree.insert(2))
print(my_tree.insert(1))
print(my_tree.insert(3))
print(my_tree.insert(5))
print(my_tree.root.value)
print(my_tree.root.left.value)
print(my_tree.root.right.value)
print(my_tree.contain(5))
        