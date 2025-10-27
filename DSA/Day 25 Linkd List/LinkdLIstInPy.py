class Node():
    def __init__(self, data : int):
        self.data = data
        self.next = None


def printN( head : Node):
    Curr : Node = head

    while(Curr != None):
        print(Curr.data, end=" ")
        Curr = Curr.next
        
    print('\n')


n1 : Node = Node(1)
n2 : Node = Node(2)
n3 : Node = Node(3)

# next declaration

n1.next = n2
n2.next = n3
   
# Declaring Head and Tails
head : Node = n1
tails : Node = n3


printN(n1)
