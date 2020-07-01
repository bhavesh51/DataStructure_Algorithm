class node:
    def __init__(self,data):
        self.data = data
        self.next = None

class LinkList:
    def __init__(self):
        self.head = None

    def printLL(self):
        temp = self.head
        while temp:
            print(temp.data)
            temp = temp.next

    def push(self, new_data):
        new_node = node(new_data)
        new_node.next = self.head
        self.head = new_node

    # def insertNodeAtHead(llist, data):
    # # Write your code here
    # new_node = SinglyLinkedListNode(data)
    # new_node.next = llist
    # llist = new_node 
    # return llist
    
    def insert_after(self, prev_node, new_data):
        if prev_node is None:
            print("bhavesh")
            return 
        new_node = node(new_data)
        new_node.next = prev_node.next
        prev_node.next = new_node

    def appen(self, new_data):
        new_node = node(new_data)
        if self.head is None:
            self.head = new_node
            return 
        last = self.head
        while(last.next):
            last = last.next
        last.next = new_data

    # def insertNodeAtTail(head, data):
    # new_node = SinglyLinkedListNode(data)
    # if (head == None):
    #     head = new_node
    # else:
    #     current = head
    #     while (current.next != None):
    #         current = current.next
    #     current.next = new_node
    # return head    

if __name__ == '__main__':
    abc = LinkList()
    abc.head = node(1)
    sec = node(20)
    third = node(50)
    abc.head.next = sec
    sec.next = third
    obj1 = node(4000)
    abc.push(555)
    abc.insert_after(sec,40)
    abc.appen(obj1)
    abc.printLL()