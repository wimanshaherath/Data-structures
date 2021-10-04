# Implementation using built-in queue module
from queue import Queue
# initializing a queue with maximum size
myQueue = Queue(maxsize=5)

# Adding elements - Enqueue operation
myQueue.put(1)
myQueue.put(2)
myQueue.put(3)
myQueue.put(4)
print("Added 4 elements into the queue")

# Checking whether the queue is full
print("Is the queue full? ", myQueue.full())
# Adding the last element

print("Added 5th element into the queue")
myQueue.put(5)
print("Now, is the queue full? ", myQueue.full())

# Size of the queue
print("Size of the queue: ",myQueue.maxsize)

# Removing elements - Dequeue operation
print("Elements in the queue: ")
print(myQueue.get())
print(myQueue.get())
print(myQueue.get())
print(myQueue.get())

# Checking whether the queue is empty
print("Is the queue empty? ", myQueue.empty())

# Removing the last element
print(myQueue.get())
print("Now, is the queue empty? ", myQueue.empty())
