/*
 * StackLinkedList.h
 *
 *  Created on: 03-Jan-2016
 *      Author: ravi
 */

#ifndef STACKLINKEDLIST_H_
#define STACKLINKEDLIST_H_
#include <list>
using namespace std;

template <typename T>
class LLStack
{
public:
LLStack()
{
}
void clear()
{
	a.clear();
}
bool isEmpty()
{
return a.empty();
}
const T& top()
{
	return a.back();
}
void push(const T& el)
{
a.push_back(el);
}
T pop()
{
	T el = a.back();
	a.pop_back();
	return el;
}
private:
list<T> a;
};



#endif /* STACKLINKEDLIST_H_ */
