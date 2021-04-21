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

    # def insertNodeAtPosition(head, data, position):
    # prev_node = head
    # if position == 0:
    #     new_node = SinglyLinkedListNode(data)
    #     new_node.next = head
    #     return new_node

    # while prev_node is not None:
    #     new_node = SinglyLinkedListNode(data)

    #     for _ in range(position-1):
    #         prev_node = prev_node.next

    #     new_node.next = prev_node.next
    #     prev_node.next = new_node

    #     return head 

    def appen(self, new_data):
        new_node = node(new_data)
        if self.head is None:
            self.head = new_node
            return 
        last = self.head
        while(last.next):
            last = last.next
        last.next = new_node

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

    def deleteNode(self, key):  
        temp = self.head  
        if (temp is not None):  
            if (temp.data == key):  
                self.head = temp.next
                temp = None
                return
        
        while(temp is not None):  
            if temp.data == key:  
                break
            prev = temp  
            temp = temp.next
  
        if(temp == None):  
            return
  
        prev.next = temp.next 
        temp = None

    def deleteNode(self, node):
        """
        :type node: ListNode
        :rtype: void Do not return anything, modify node in-place instead.
        """
        current_node = node.next
        node.val = current_node.val
        node.next = current_node.next
        del current_node
        
        return

if __name__ == '__main__':
    abc = LinkList()
    abc.head = node(1)
    sec = node(20)
    third = node(50)
    abc.head.next = sec
    sec.next = third
    abc.push(555)
    abc.insert_after(sec,40)
    abc.appen(4000)
    #abc.deleteNode(50)
    abc.printLL()