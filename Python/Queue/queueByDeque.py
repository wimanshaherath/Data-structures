# Implementation using built-in deque module

from collections import deque
from sys import path
 
# Initializing a queue
myQueue = deque()
 
# Adding elements to a queue
myQueue.append("Mon")
myQueue.append("Tue")
myQueue.append("Wed")
myQueue.append("Thurs")

# Printing the queue
print("Initial queue: ", myQueue)
# Size
print("Size: ", len(myQueue))
# Removing 2 elements from a queue
print("First two elements in the queue: ")
print(myQueue.popleft())
print(myQueue.popleft())

# Peek operation
print("Current first element in the queue: ", myQueue[0])
 
print("Queue after dequeue operations: ", myQueue)

# Dequeue operation again
print("Dequeue operations")
print(myQueue.popleft())
print(myQueue.popleft())
# Check if queue is empty
if myQueue:
    print("Queue is not empty")
else:
    print("Queue is empty")

