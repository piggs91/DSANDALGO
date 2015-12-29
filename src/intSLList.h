/*
 * intSLList.h
 *
 *  Created on: 29-Dec-2015
 *      Author: ravi
 */

#ifndef INT_LINKED_LIST
#define INT_LINKED_LIST

#include <iostream>
class IntNode
{
public:
	int info;
	IntNode *next;
	IntNode(int e1,IntNode *ptr = 0)
	{
     info = e1 ;
     next = ptr ;
	}

};

class IntSLList
{
public:
	IntSLList(){
		head = tail = 0 ;
	}
	~IntSLList();
	int isEmpty()
	{
		return head == 0 ;
	}
	void addToHead(int);
	void addToTail(int);
	int deleteFromhead();
	int deleteFromTail();
	void deleteNode(int);
	bool isInList(int) const;
	void traverse()
	{
		for(IntNode *p = head ; p != 0 ;)
		{
			std::cout<<p->info<<std::endl;
			p = p->next;
		}
	}
	private :
	IntNode *head , *tail;

};
#endif
