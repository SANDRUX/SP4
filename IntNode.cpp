#include "IntNode.h"

#ifndef NULL
#define NULL 0
#endif

IntNode::IntNode()
{
    setThis(0, NULL);
}

IntNode::IntNode(int value, IntNode *nextNode)
{
    setThis(value, nextNode);
}

void IntNode::setVal(int value)
{
    data = value;
}

void IntNode::setNextNode(IntNode *nextNode)
{
    next = nextNode;
}

void IntNode::setThis(int value, IntNode *nextNode)
{
    setVal(value);
    setNextNode(nextNode);
}

int IntNode::getVal()
{
    return data;
}

IntNode *IntNode::getNextNode()
{
    return next;
}