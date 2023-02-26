#ifndef STACK_H
#define STACK_H

#include "ItemType.h"

class Stack
{
	struct Node
	{
		ItemType item;
		Node* next;
	};
public:
	Stack();
	~Stack();

	bool IsEmpty();            //done
	bool IsFull();             //done
	void Push(ItemType item);  //done
	ItemType Pop();            //
	ItemType Top();            //done

private:
	Node* topLoc;
};

#endif // !STACK_H