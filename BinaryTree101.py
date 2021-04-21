class Node(object):
    def __init__(self,value):
        self.value = value
        self.left = None
        self.right = None

class BinaryTree(object):
    def __init__(self,root):
        self.root = Node(root)
        
    def print_tree(self, traversal_type):
        if traversal_type == "preorder":
            return self.preorder_print(tree.root, "")
        elif traversal_type == "inorder":
            return self.inorder_print(tree.root,"")
        elif traversal_type == "postorder":
            return self.postorder_print(tree.root, "")
        else:
            print("Invalid" + str(traversal_type))
            return False

    def preorder_print(self, start, traversal):
        """ root -> left -> right """
        if start:
            traversal += (str(start.value) + "->")
            traversal = self.preorder_print(start.left,traversal)
            traversal = self.preorder_print(start.right,traversal)
        return traversal

    def inorder_print(self, start, traversal):
        """left -> root -> right"""
        if start:
            traversal = self.inorder_print(start.left,traversal)
            traversal += (str(start.value) + "->")
            traversal = self.inorder_print(start.right, traversal)
        return traversal

    def postorder_print(self, start, traversal):
        """left -> right -> root"""
        if start:
            traversal = self.postorder_print(start.left, traversal)
            traversal = self.postorder_print(start.right, traversal)
            traversal += (str(start.value) + "->")
        return traversal

tree = BinaryTree(11)
tree.root.left = Node(22)
tree.root.right = Node(33)
tree.root.left.left = Node(44)
tree.root.left.right = Node(55)

#DFS and BFS
#preorder postoder inorder

#print sequence follow DFS
print(tree.print_tree("preorder"))
print(tree.print_tree("inorder"))
print(tree.print_tree("postorder"))