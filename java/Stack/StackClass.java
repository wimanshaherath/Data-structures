import java.util.Stack;
public class StackClass{

    public static void main(String[] args){
        Stack<Integer> myStack =new Stack<>();

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