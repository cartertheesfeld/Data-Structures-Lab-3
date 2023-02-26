#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
	Stack deck;

	for (int i = 0; i < 10; i++)
	{
		ItemType temp;
		temp.SetItem(i + 1);
		deck.Push(temp);
	}

	for (int i = 0; i < 10; i++)
	{
		cout << deck.Top().GetItem() << endl;
		cout << deck.Pop().GetItem() << endl;
		cout << deck.IsEmpty() << endl;
		cout << deck.IsFull() << endl;
	}
}