#include "Stack.h"
//pre:There is no structure to make a linked list
//post: The nodes and the list size exist
Stack::Stack()
{
	topLoc = nullptr;
}
//pre:the destructor doesn't exist and stack needes to be removed
//post:The stack is all gone
Stack::~Stack()
{
	Node* temp;
	while (topLoc != NULL)
	{
		temp = topLoc;
		topLoc = topLoc->next;
		delete temp;
	}
	delete topLoc;
	
}
//pre: Stack is initalized
//post: it returns true if the list is empty and false if there is an item in the list
bool Stack::IsEmpty()
{
	return (topLoc == NULL);
}
//pre: items have been added to a list
//post: If the memory allocation fails then it returns true else it will return false
bool Stack::IsFull()
{
	try
	{
		Node* temp = new Node;
	}
	catch (bad_alloc)
	{
		return true;
	}
	return false;
}
//pre: Stack is initialized
//post: If stack is full exception is thrown. else an item is added to the top of the list
void Stack::Push(ItemType item)
{
	if (!IsFull())
	{
		Node* temp = new Node;
		temp->item = item;
		temp->next = topLoc;
		topLoc = temp;
		
	}
}
//pre:There is a stack made of node
//post: the top loc moves to the next node and the other node is outputed
ItemType Stack::Pop()//help
{
	
	if (!IsEmpty())
	{											
		Node* temp = new Node;
		ItemType tempItem = topLoc->item;							
		temp = topLoc;						
		topLoc = topLoc->next;													
								
		return tempItem;						
	}


	
}
//pre:There is a stack 
//post:now the top of the stack is shown and not removed
ItemType Stack::Top()
{
	return topLoc->item;
}
