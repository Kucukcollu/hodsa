#include "stack.hpp"
#include <memory>

template <typename T>
Stack<T>::Stack()
{
    top = -1;
}

template <typename T>
Stack<T>::~Stack()
{
}

template <typename T>
void Stack<T>::push(T element)
{
    if(top >= (MAX_NUMBER_OF_ITEMS - 1))
    {
        std::cerr << "Cannot be pushed!" << std::endl;
        return;
    }
    else
    {
        items[++top] = element;
        std::cout << element << " pushed to the stack!" << std::endl;
    }
}

template <typename T>
void Stack<T>::pop()
{
    if(top < 0)
    {
        std::cerr << "Cannot be popped!" << std::endl;
    }
    else
    {
        items[top--];
        std::cout << " popped from the stack!" << std::endl;
    }
}

template <typename T>
bool Stack<T>::isEmpty()
{
    if(top == -1)
    {
        std::cout << "The stack is empty!" << std::endl;
        return true;
    }
    else
    {
        std::cout << "The stack is not empty!" << std::endl;
        return false;
    }
}

template <typename T>
bool Stack<T>::isFull()
{
    if(top == MAX_NUMBER_OF_ITEMS - 1)
    {
        std::cout << "The stack is full!" << std::endl;
        return true;
    }
    else
    {
        std::cerr << "The stack is not full!" << std::endl;
        return false;
    }
}

template <typename T>
T Stack<T>::peek()
{
    if(!this->isEmpty())
    {
        T res = items[top];
        return res;
    }
    else
    {
        std::cerr << "The stack is empty..." << std::endl;
    }
}
template <typename T>
bool Stack<T>::printStack()
{
    if(!this->isEmpty())
    {
        std::cout << "Stack values are: ";
        for(int i=0;i<top;i++)
        {
            std::cout << items[i] << " ";
        }
        std::cout << std::endl;
    }
    else
    {
        std::cerr << "The stack is empty..." << std::endl;
    }
}

int main()
{
    auto the_stack = std::make_shared<Stack<int>>();

    the_stack->isEmpty();
    the_stack->isFull();

    the_stack->push(3);
    the_stack->push(4);
    the_stack->push(11);
    the_stack->push(8);
    the_stack->push(4);
    the_stack->push(0);

    the_stack->printStack();

    int peek_value = the_stack->peek();

    std::cout << "peek value: " << peek_value << std::endl;

    return 0;
}