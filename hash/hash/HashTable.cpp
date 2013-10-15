#include"Node.h"
#include<iostream>

using namespace std;

int main()
{
	Node* HashTable[16];
	for(int i = 0; i < 16; i++)
	{
		HashTable[i] = new Node;
	}
	int value;
	while(( cin >> value) != NULL)
	{
		int k = value % 16;
		Node* start = HashTable[k];
		while(start->next != nullptr)
			start = start->next;
		Node* new_node = new Node(value);
		start->next = new_node;
	}

	for(int i = 0; i < 16; i++)
	{
		Node* start = HashTable[i];
		while(start->next != nullptr)
		{
			cout << start->next->value<<' ';
			start = start->next;
		}
		cout << endl;
	}
}