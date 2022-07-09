class Node:
    def __init__(self, d):
        self.d = d
        self.nextval = None


class SLinkedList:
    def __init__(self):
        self.headval = None

    # def insert(self, new_d):
    #     new_node = Node(new_d)
    #     new_node.nextval = self.headval
    #     self.headval = new_node

    def insert(self, new_d):

        # 1. Create a new node
        # 2. Put in the d
        # 3. Set next as None
        new_node = Node(new_d)

        # 4. If the Linked List is empty, then make the
        #    new node as head
        if self.headval is None:
            self.headval = new_node
            return

        # 5. Else traverse till the last node
        last = self.headval
        while (last.nextval):
            last = last.nextval

        # 6. Change the next of last node
        last.nextval = new_node


    def listprint(self):
        printval = self.headval
        while(printval):
            print(f"{printval.d}  ")
            printval = printval.nextval


list = SLinkedList()


list.insert(7)
list.insert(3)
list.insert(6)
list.insert(8)
list.insert(17)

data = int(input("Enter the d to insert"))
list.insert(d)

list.listprint()
