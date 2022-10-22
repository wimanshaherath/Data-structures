class Node:


	def __init__(self, data):
		self.data = data # Assign data
		self.next = None # Initialize next as null

class LinkedList:

	# Function to initialize head
	def __init__(self):
		self.head = None

	# This function prints contents of linked list
	# starting from head
	def printList(self):
		temp = self.head
		while (temp):
			print(temp.data)
			temp = temp.next


# Code execution
if __name__ == '__main__':

	# Start with the empty list
	llist = LinkedList()

	llist.head = Node(1)
	second = Node(2)
	third = Node(3)

	llist.head.next = second
    # Link first node with second
	second.next = third
    # Link second node with the third node

	llist.printList()
