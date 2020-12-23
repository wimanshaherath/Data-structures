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
            return arr[top--];
        }

};

int main()
{
    Stack<int> int_stack;
    Stack<std::string> str_stack;
    int_stack.push(67);
    str_stack.push("Hello");
    str_stack.push("Codezclub");
    std::cout << int_stack.pop() << std::endl;
    std::cout << str_stack.pop() << std::endl;
    std::cout << str_stack.pop() << std::endl;

    return 0;
}