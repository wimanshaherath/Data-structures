#include <iostream>
#include <stack>

int main()
{
    std::stack<int> int_stack;
    std::stack<std::string> string_stack;

    int_stack.push(67);
    string_stack.push("Hello");
    string_stack.push("Wimansha");

    std::cout<<"Popping element of int_stack.."<<std::endl;
    std::cout<<int_stack.top()<<std::endl;
    int_stack.pop();
    std::cout<<"Popping element of string_stack.."<<std::endl;
    while(!string_stack.empty())
    {
        std::cout<<string_stack.top()<<std::endl;
        string_stack.pop();
    }
    

    return 0;
}