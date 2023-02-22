#include <iostream>
#include <string>
#include <stack>

void inverseWord(std::string word)
{
    std::stack<char> stack;

    for(auto &item:word)
    {
        stack.push(item);
    }

    std::cout << "Inverse word: ";

    while (!stack.empty()) {
        std::cout << stack.top();
        stack.pop();
    }

    std::cout << std::endl;


}

int main()
{
    std::string word{"wonderfull"};

    inverseWord(word);

    return 0;
}