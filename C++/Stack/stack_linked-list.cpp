#include <iostream>
using namespace std;

/* Steps:
    - Create linked list node which stores value(data), next(pointer), min(current min element)
    - while pushing elements :
        - if stack is empty store current val in min 
        - if current element is less than min than store (2*x – minEle) in min
    - while poping elements : 
        - if current element is min restore as (2*minEle – y)
    - Time complexity of push is O(1)
    - Time complexity of pop is O(1)
    - Time complexity of getmin is O(1)
*/

// Structure of Linked list Node:-
struct Node{
	int val; // value 
	struct Node* next; // pointer to next node 
	int min;
};

// Creating stack class with push, pop, getmin functions 
class stack{
    struct Node* top;
    int min;
public:
    stack(){
        top=NULL;
    }
    void push(int value) // Push function 
    {
        /*
            - if(top == NULL) push the node and min -> value
            - if(value > min) push the node and no need to change min
            - if(value < min) push the node and store 2 * current min - value -> node.min and update min -> value 
        */
        Node* ptr;
        if(top==NULL)
        {
            ptr=new Node;
            ptr->val=value;
            ptr->next=NULL;
            ptr->min=value;
            min = value;
            top=ptr;
        }
        else if(value > min)
        {
            ptr=new Node;
            ptr->val=value;
            ptr->next=top;
            ptr->min=value;
            top=ptr;
        }
        else
        {
            ptr=new Node;
            ptr->val=value;
            ptr->next=top;
            ptr->min=2*value - min;
            top=ptr;
            min = value;
        }
        
    }
    void pop() // Pop function 
    {
        // if poped element is minimum restore the 2nd min value : min -> 2*min - node.min

        Node* temp;
        if(top == NULL)
        {
            cout<<endl<<-1;
            return;
        }
        temp= top;
        if (temp->min < min) 
        {
            min = 2*min - top->min;
        }
        top=top->next;
        cout<<temp->val<<" ";
        delete temp;
    }
    void print(){
        Node* temp1=top;
        cout<<"Stack : ";
        while (temp1!=NULL){
            cout<<temp1->val<<" ";
            temp1=temp1->next;
        }
        cout<<endl;
    }
    void getmin() // Getmin function 
    {
        cout<<"Minimum element : "<<min<<endl;
    }
};

int main() 
{
    //freopen("input.txt","r", stdin);
    //freopen("output.txt","w", stdout);

    // Calling stack class 
    stack s;
    int n,a; // n is the number of elements pushed 
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        s.push(a); // Push elements 
    }
    s.print(); // Print the current stack 
    cin>>n; // n is the number of elements popped 
    cout<<"Popped elements : ";
    for(int i=0;i<n;i++)
    {
        s.pop(); // Pop elements 
    }
    cout<<endl;
    s.print(); // Print the current stack 
    s.getmin(); // get minimum element in the present stack 
    return 0;
}