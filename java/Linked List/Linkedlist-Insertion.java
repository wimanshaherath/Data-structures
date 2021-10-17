class LinkedList
{
    Node head;  // head of list
 
    /* Linked list Node*/
    class Node
    {
        int data;
        Node next;
        Node(int d) {data = d; next = null; }
    }
 
    /* Inserts a new Node at front of the list. */
    public void push(int new_data)
    {
        
        Node new_node = new Node(new_data);
 
        
        new_node.next = head;
 
        /*  Move the head to point to new Node */
        head = new_node;
    }
 
    /* Inserts a new node after the given prev_node. */
    public void insertAfter(Node prev_node, int new_data)
    {
        /*  Check if the given Node is null */
        if (prev_node == null)
        {
            System.out.println("The given previous node cannot be null");
            return;
        }
 
        /*  Allocate the Node & Put in the data*/
        Node new_node = new Node(new_data);
 
        /* Make next of new Node as next of prev_node */
        new_node.next = prev_node.next;
 
        /* make next of prev_node as new_node */
        prev_node.next = new_node;
    }
    
    /* Appends a new node at the end.  This method is
       defined inside LinkedList class shown above */
    public void append(int new_data)
    {
        
        Node new_node = new Node(new_data);
 
        /*  If the Linked List is empty, then make the
              new node as head */
        if (head == null)
        {
            head = new Node(new_data);
            return;
        }
 
        /* This new node is going to be the last node, so
              make next of it as null */
        new_node.next = null;
 
        /* Else traverse till the last node */
        Node last = head;
        while (last.next != null)
            last = last.next;
 
        /* Change the next of last node */
        last.next = new_node;
        return;
    }
 
    /* This function prints contents of linked list starting from
        the given node */
    public void printList()
    {
        Node tnode = head;
        while (tnode != null)
        {
            System.out.print(tnode.data+" ");
            tnode = tnode.next;
        }
    }
 
    /* Driver program to test above functions. Ideally this function
       should be in a separate user class.  It is kept here to keep
       code compact */
    public static void main(String[] args)
    {
        /* Start with the empty list */
        LinkedList llist = new LinkedList();
 
        
        llist.append(6);
        llist.push(7);
        llist.push(1);
        llist.append(4);
 
        // Insert 8, after 7. So linked list becomes
        // 1->7->8->6->4->NUllist
        llist.insertAfter(llist.head.next, 8);
 
        System.out.println("\nCreated Linked list is: ");
        llist.printList();
    }
}