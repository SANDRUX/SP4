#pragma once

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
