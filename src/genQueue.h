/*
 * genQueue.h
 *
 *  Created on: Jan 4, 2016
 *      Author: ravi
 */

#ifndef GENQUEUE_H_
#define GENQUEUE_H_
#include <list>
using namespace std;
template<class T>
class Queue
{
private:
	list<T> lst;
public:
	Queue(){}
	void clear(){
		lst.clear();
	}
	bool isEmpty() const
	{
		return lst.empty();
	}
	T& front()
	{
		return lst.front();
	}
	T dequeue()
	{
		T el = lst.front();
		lst.pop_front();
		return el;
	}
	void enqueue(const T& el)
	{
		lst.push_back(el);
	}
};


#endif /* GENQUEUE_H_ */
