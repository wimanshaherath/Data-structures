class node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None


    def insert_at_beginning(self, data):
        new_node = node(data)

        new_node.next = self.head

        self.head = new_node


    def insert_at_end(self, data):
        new_node = node(data)

        if(self.head == None):
            self.head = new_node
            return
        
        temp_node= self.head

        while(temp_node.next):
            temp_node = temp_node.next
        
        temp_node.next = new_node



    def insert_after_node(self, Node, data):
        new_node = node(data)
        temp_node = self.head
        
        while(temp_node.data != Node.data):
            if(temp_node.next == None):
                print("Node not found")
                return
            
            temp_node = temp_node.next
        
            
        next_node = temp_node.next

        temp_node.next = new_node

        new_node.next = next_node



    def delete_node(self, key):
        if(self.head == None):
            print("List empty")
            return

        temp_node = self.head

        if(temp_node.data == key):
            self.head=temp_node.next
            temp_node = None
            return

        while(temp_node is not None):
            if(temp_node.data == key):
                break

            prev_node = temp_node

            temp_node = temp_node.next
        
        if(temp_node == None):
            print("Node not found")
            return

        prev_node.next = temp_node.next

    
    def delete_at_postion(self, index):
        if(self.head == None):
            print("List empty")
            return
        
        temp_node = self.head

        if(index == 0):
            self.head = temp_node.next
            return
        
        else:
            i = 1

            while(i!=index-1):
                if(temp_node.next == None):
                    print("Index out of list")
                    return

                temp_node = temp_node.next

                i+=1

            node = temp_node.next
            
            next_node = node.next

            temp_node.next = None
            
            temp_node.next = next_node

    
    def length_list(self):
        length=0

        if(self.head == None):
            return 0

        temp_node = self.head

        while(temp_node is not None):
            length+=1
            temp_node = temp_node.next
        
        return length

    def print_list(self):
        if(self.head == None):
            print("Empty list")
            return
        
        temp_node = self.head

        while(temp_node is not None):
            print(temp_node.data, end=' ')

            if(temp_node.next is not None):
                print('->', end=' ')

            temp_node = temp_node.next
        return

            





