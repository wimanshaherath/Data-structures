public class Stack{
    int top,size;
    int array[];

    public Stack(int n){
        top=-1;
        size=n;
        array=new int[size];
    }

    public Boolean empty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }

    public void push(int n){
        array[++top]=n;
    }

    public Integer pop(){
        if(top>-1){
            int x= array[top];
            
            top--;
            return x;
        }
        return null;
        
    }
    public Integer peek(){
        if(top>-1){
            return array[top];
        }
        return null;
    }

    

    public static void main(String[] args){
        Stack myStack = new Stack(5);
        myStack.push(6);
        myStack.push(8);
        myStack.push(1);
        myStack.push(0);

        System.out.println("myStack empty: "+ myStack.empty());
        System.out.println("peek : "+ myStack.peek());
        System.out.println("pop: "+ myStack.pop());
        System.out.println("peek: "+ myStack.peek());
        System.out.println("push 3");
         myStack.push(3);
         System.out.println("peek: "+ myStack.peek());
    }
}