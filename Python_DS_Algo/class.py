class Cookie:
    # Constructor
    def __init__(self, color):
        # Self is a method of the class
        self.color = color
    # Return color of the cookie

    def get_color(self):
        return self.color

    def set_color(self, color):
        self.color = color


# Constructor
cookie_one = Cookie("Green")
cookie_two = Cookie("Blue")

# print("Cookie one is: ", cookie_one.get_color())
# print("Cookie two is: ", cookie_two.get_color())

# # Set cookie one with different color
# cookie_one.set_color("Yello")
# print("Cookie one is: ", cookie_one.get_color())
# print("Cookie two is: ", cookie_two.get_color())

# Class of Linked List


class LinkedList:
    # Constructor
    def __init__(self, value):
        self.value = value
    # def append(self, value):

    # def pop(self):

    # def prepend(self, value):

    # def insert(self, index, value):

    # def remove(self, index):


s = "aacc"
t = "ccac"
print(s.reversed())
hash_s, hash_t = {}, {}
hash_s[0] = 1 + hash_s.get(s[0], 1000)
hash_s[1] = 1 + hash_s.get(s[1], 50)
hash_t[0] = hash_t.get(t[0], 999)
hash_t[3] = hash_t.get(t[1], 333)
print(hash_s)

print(hash_t)


for index in range(len(s)):
    hash_s[s[index]] = 1 + hash_s.get(s[index], 0)
    hash_t[t[index]] = 1 + hash_t.get(t[index], 0)
    print(hash_s.get(s[index]))
