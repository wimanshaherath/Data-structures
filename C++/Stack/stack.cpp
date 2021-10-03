#include <iostream>
#include <cstdlib>
#include <vector>



template<class T> class Stack
{
    private:
        int top;
        std::vector<T> arr;

    public:
        Stack():top(-1){}

        bool isEmpty()
        {
            return top=-1;
        }

        T peek()
        {
            return arr[top];
        }
        
        void push(T data)
        {
           arr.push_back(data);
           top++;
    
        }

        T pop()
        {
             if(top<0){
                throw "Stack is empty";
            }
            
            return arr[top--];
        }

};

int main()
{
    Stack<int> int_stack;
    Stack<std::string> str_stack;
    try{
        int_stack.push(67);
        str_stack.push("Hello");
        str_stack.push("Codezclub");
        std::cout << int_stack.pop() << std::endl;
        std::cout << str_stack.pop() << std::endl;
        std::cout << str_stack.pop() << std::endl;
    }
    catch(char const* e){
        std::cout<<e<<std::endl;
    }
    

    return 0;
}