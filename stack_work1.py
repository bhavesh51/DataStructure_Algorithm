class Stack:
    def __init__(self):
        self.items = []
    
    def isEmpty(self):
        return self.items == []
    
    def push(self,item):
        self.items.append(item)
    
    def pop(self):
        return self.pop()

    def peek(self):
        return self.items[len(self.items) - 1]

    def size(self):
        return len(self.items)
    
    def printstack(self):
        return print(self.items)

s = Stack()
s.push(10)
s.push(20)
s.printstack()
print(s.peek())
