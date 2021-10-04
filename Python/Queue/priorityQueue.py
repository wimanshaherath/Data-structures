# Implementation of priority queue using in-built PriorityQueue module
from queue import PriorityQueue
# Initializing the priority queue
myQueue = PriorityQueue()  

# Adding elements - (priority, value)
myQueue.put((2, 'B'))  
myQueue.put((1, 'A'))  
myQueue.put((3, 'C'))  

# Size
print("Size: ", myQueue.qsize())

# Peek operation
print("First element in the priority queue: ", myQueue.queue[0])

# Dequeue operation
print("Elements in the priority queue:")
while not myQueue.empty():  # till queue is not empty
    print(myQueue.get())  
