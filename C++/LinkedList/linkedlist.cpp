#include <iostream>
#include <bits/stdc++.h>

class Node{
  public:
    int data;
    Node* next;
};


/*insert a new node to front*/
void push(Node** head,int new_data){
  Node* new_node = new Node();

  new_node->data = new_data;
  new_node->next = (*head);
  (*head) = new_node;
}

/*insert a new node after a given node*/
void add_after(Node* prevNode,int new_data){
  
  if (prevNode == NULL)  
  {  
      std::cout<<"the given previous node cannot be NULL";  
      return;  
  }  
  
  Node* new_node = new Node();

  new_node->data = new_data;
  new_node->next = prevNode->next;
  prevNode->next = new_node;
}
/*insert a new node at the end*/
void append(Node** head_ref, int new_data){

  Node* new_node = new Node();

  Node* last = (*head_ref);

  new_node->data = new_data;
  new_node->next = NULL;

  if(*head_ref == NULL){
    *head_ref = new_node;
    return;
  }

  while(last->next != NULL){
    last = last->next;
  }

  last->next = new_node;
  return;
}

void printList(Node *node)  
{  
    while (node != NULL)  
    {  
        std::cout<<" "<<node->data;  
        node = node->next;  
    }  
}  



int main(){
  std::cout<<'\n'<<std::string(50,'-')<<std::endl;
  std::cout<<"\t\tLinked List"<<std::endl;
  std::cout<<std::string(50,'-')<<std::endl;
  
  Node* head = NULL;

  std::cout<<"appending 2"<<std::endl;
  append(&head,2);

  std::cout<<"pushing 1,7,5"<<std::endl;
  push(&head,1);
  push(&head,7);
  push(&head,5);

  std::cout<<"insert 9 after 7"<<std::endl;
  add_after(head->next,9);

  std::cout<<"\nFinal list"<<std::endl;
  printList(head);
}