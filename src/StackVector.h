// vector implementation of stack
// written by:ravirathore
#ifndef STACK
#define STACK
#include <vector>

template <class T,int capacity = 30 >
class Stack
{
private:
std::vector<T>	pool;
public:
Stack()
{
pool.reserve(capacity);
}

void clear()
{
pool.clear();
}

bool isEmpty()
{
return pool.empty();
}

const T& top()
{
return pool.back();
}

T pop()
{
T el= pool.back();
pool.pop_back();
return el;
}

void push(const T& el)
{
pool.push_back(el);
}
};

#endif