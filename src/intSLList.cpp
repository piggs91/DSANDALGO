/*
 * intSLList.cpp

 *
 *  Created on: 30-Dec-2015
 *      Author: ravi
 */

#include <iostream>
#include "intSLList.h"


IntSLList::~IntSLList()
{
	for (IntNode *p;!isEmpty();)
	{   p = head->next;
		delete head ;
		head = p;
	}
}
void IntSLList::addToHead(int el)
{
	head = new IntNode(el,head);
	if ( tail == 0)
		tail = head ;
}
void IntSLList::addToTail(int el)
{   if(!isEmpty())
{
	tail->next  = new IntNode(el,0)	;
	tail = tail->next;
}
else
{
	head = tail = new IntNode(el);
}

}
int IntSLList::deleteFromhead()
{   IntNode *oldNode = head;
    int oldValue = oldNode->info;
	head = head->next;
	delete oldNode;
	if (isEmpty())
		tail = head = 0;
	return oldValue;
}
//  IntSLList::deleteFromhead()

 int IntSLList::deleteFromTail()
 {
	 if (isEmpty()) // if list is empty
	 {
		 delete tail;
		 head = tail = 0 ;
		 return -1; // return error i.e -1
	 }
	 else if (tail == head) // If only one item is there
	 {   int info = tail->info;
		 delete tail;
		 head = tail = 0;
		 return info;
	 }
	 else {
		 int info = tail->info;
		 IntNode *currentNode;
	 for ( currentNode = head ; currentNode->next != tail ; currentNode = currentNode->next);

	 delete tail;
	 tail = currentNode;
	 tail->next = 0;
	 return info;

	 }
 }
 void IntSLList::deleteNode(int el)
 {
	if (isEmpty())
	{   std::cout<<"empty"<<std::endl;
		return ;
	}
	else if (head->info == el)
	{    std::cout<<"head"<<std::endl;
	 IntSLList::deleteFromhead();
		return ;
	}
	else if (tail->info == el)
	{    std::cout<<"tail"<<std::endl;
		IntSLList::deleteFromTail();
		return ;
	}
	else
	{
     IntNode *currentNode = head;
     while(currentNode->next  != 0)
     {   if (currentNode->next->info == el)
     {     IntNode *nodeToDelete = currentNode->next;
    	   currentNode->next = nodeToDelete->next;
    	   delete nodeToDelete;
     }
    	 currentNode = currentNode->next;
     }
	}
 }

 bool IntSLList::isInList(int el) const {
	 for(IntNode *currentNode = head ; currentNode != 0 ; currentNode = currentNode->next )
	 {
		 if (currentNode->info == el)
		 {
			 return true;
		 }
	 }

	 return false ;

 }


