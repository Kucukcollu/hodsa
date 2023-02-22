#pragma once

#ifndef STACK_HPP
#define STACK_HPP

#include <iostream>

#define MAX_NUMBER_OF_ITEMS 10

template <typename T>
class Stack
{
    public:
        Stack();
        ~Stack();
        void push(T element);
        void pop();
        bool isEmpty();
        bool isFull();
        T peek();
        bool printStack();

    private:
        T items[MAX_NUMBER_OF_ITEMS];
        int top;
};

#endif // STACK_HPP