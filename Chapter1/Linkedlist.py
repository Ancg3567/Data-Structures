class Node:
    def __init__(self, d):
        self.d = d
        self.nextval = None


class SLinkedList:
    def __init__(self):
        self.headval = None

    def insert(self, new_d):
        new_node = Node(new_d)
        new_node.nextval = self.headval
        self.headval = new_node

    def deleteNode(self,key):
        temp = self.headval
        if(temp is not None):
            if(temp.d == key):
                self.headval = temp.nextval
                temp = None
                return
        while(temp is not None):

            if(temp.d == key):
                break
            prev = temp
            temp = temp.nextval
        if(temp == None):
            return
        prev.nextval = temp.nextval
        temp = None

    def listprint(self):
        printval = self.headval
        while(printval):
            print(f"{printval.d}  ")
            printval = printval.nextval


list = SLinkedList()


list.insert(7)
list.insert(3)
list.insert(6)
list.insert(9)
list.insert(10)

print("created Linked list")

list.listprint()
list.deleteNode(7);

print("After deleting")
list.listprint()
