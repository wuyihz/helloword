#include "Node.h"


Node::Node(void)
{
	this->next = nullptr;
}
Node::Node(int value)
{
	this->value = value;
	this->next = nullptr;
}

Node::~Node(void)
{
}
