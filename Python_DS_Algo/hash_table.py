'''
    Hash table is always with prime number
'''
class hash_table:
    def __init__(self, size = 7):
        self.data_map = [None] * size #create a list with size 7 with values None
        
    def __hash(self, key):
        my_hash = 0
        for letter in key:
            my_hash = (my_hash + ord(letter) * 23) % len(self.data_map)
        return my_hash
    
    def print_hash_table(self):
        for index, value in enumerate(self.data_map):
            print("index: {} and value: {}".format(index, value))

    def set_hash_items(self, key, value):
        index = self.__hash(key)
        if self.data_map[index] == None:
            self.data_map[index] = []
        self.data_map[index].append([key, value])
    
    def get_hash_items(self, key):
        index = self.__hash(key)
        if self.data_map[index] is not None:
            for index in range(len(self.data_map[index])):
                if self.data_map[index][i][0] == key:
                    return self.data_map[index][i][1]
        return None

    def keys(self):
        all_keys = []
        for index in range(len(self.data_map)):
            if self.data_map[index] is not None:
                for index_j in range(len(self.data_map[index])):
                    all_keys.append(self.data_map[index][index_j][0])
        return all_keys

def common_items(list_1, list_2):
    hash_table = {}
    for num in list_1:
        hash_table[num] = True
    for num in list_2:
        if num in hash_table:
            return True
    return False
    
my_hash_table = hash_table()
my_hash_table.set_hash_items('bolts', 100)
my_hash_table.set_hash_items('washer', 300)
my_hash_table.set_hash_items('lumber', 70)
my_hash_table.print_hash_table()

list_1 = [1, 3, 5]
list_2 = [2, 4, 5]
print(common_items(list_1, list_2))