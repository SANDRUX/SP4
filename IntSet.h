#include "IntNode.h"
#include <string>

#pragma once

class IntSet    
{
private:
    IntNode node;

public:
    IntSet();
    IntSet(const IntSet &);

    ~IntSet();

    void remove(int);
    bool insert(int);
    bool isEmpty();
    void operator=(const IntSet &);
    friend void operator<<(int x, IntSet);
};