# Implementation using list

# Initializing queue using a list
myQueue = []

# Adding elements to the queue
myQueue.append(1)
myQueue.append(2)
myQueue.append(3)

# Printing the queue
print("Initial queue:", myQueue)
# Size of the queue
print("Size: ", len(myQueue))

# Check if queue is empty
if not myQueue:
    print("Queue is empty")
else:
    print("Queue is not empty")

# Peek operation
print("First element in the queue: ", myQueue[0])

# Removing an element from the queue
print("Dequeued element:", myQueue.pop(0))
print("Queue after dequeue operation:", myQueue)