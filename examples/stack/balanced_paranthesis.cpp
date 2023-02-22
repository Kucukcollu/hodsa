#include <iostream>
#include <stack>

bool checkParanthesis(std::string input)
{
    std::stack<char> stack;

    for(auto &element:input)
    {
        if(element == '(')
        {
            stack.push(element);
        }
        else
        {   
            if(stack.size()!=0)
                stack.pop();
        }
    }

    if(stack.size() != 0)
        return false;
    else
        return true;
}

int main()
{
    std::string balanced_input{"()(())"};
    std::string unbalanced_input{"())((())"};

    auto balanced = checkParanthesis(balanced_input);
    std::cout <<  "balanced input: " << std::boolalpha << balanced << std::endl;
    
    auto unbalanced = checkParanthesis(unbalanced_input);
    std::cout << "unbalanced input: " << std::boolalpha << unbalanced << std::endl;

    return 0;
}