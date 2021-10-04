#ifndef MY_STACK_H
#define MY_STACK_H

#include <vector>

template <typename T>
class Stack
{
public:
    Stack();
    void push(const T& element);
    T& top();
    void pop();
    size_t size() const;
private:
    std::vector<T> _stack;
};

template <typename T>
Stack<T>::Stack()
{
}

template <typename T>
void Stack<T>::push(const T& element)
{
    _stack.push_back(element);
}

template <typename T>
T& Stack<T>::top()
{
    return _stack.back();
}

template <typename T>
void Stack<T>::pop()
{
    _stack.pop_back();
}

template <typename T>
size_t Stack<T>::size() const
{
    return _stack.size();
}

#endif // MY_STACK_H