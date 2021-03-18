#pragma once

#ifndef NULL
#define NULL 0
#endif

class IntNode
{
private:

    int data;
    IntNode * next;

public:

    IntNode();
    IntNode(int, IntNode *);

    void setVal(int);
    int getVal();
    void setThis(int, IntNode *);
    void setNextNode(IntNode *);
    IntNode * getNextNode();
};
