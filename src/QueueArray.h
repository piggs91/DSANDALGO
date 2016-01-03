/*
 * QueueArray.h
 *
 *  Created on: 03-Jan-2016
 *      Author: ravi
 */

#ifndef QUEUEARRAY_H_
#define QUEUEARRAY_H_
#include <iostream>
using namespace std;
template<typename T,int capacity = 30>
class Queue
{

private:
	int tail , head ;
    T *queue ;
public:
	Queue()
{   tail = head  = -1;
queue = new T[capacity]();
    }
	// method to increment counter
int increment(int index)
  {
	if(index == (capacity-1))
	{
		return 0;
	}
	else
	{
		return ++index;
	}

  }
bool isFull()
{   if(head == -1)
{
	return false;
}else
{
	return increment(tail) == head ;
}
}
bool isEmpty()
{
	return (head == -1);
}

void enqueue(const T& el)
{
	if(!isFull())
	{
		//check if 1st element
		if(tail == -1)
		{
			head = tail = 0;
			queue[tail]=el;
		}
		else
		{
		tail = increment(tail);
			queue[tail] = el;
		}
	}
}
void dequeu()
{
	if(isEmpty())
	{
		return ;
	}
	else
	{
		if(head == tail)//last element
		{
			head = tail = -1 ;
		}
		else
		{
			head = increment(head);
		}
	}
}

};



#endif /* QUEUEARRAY_H_ */
