#include "IntNode.h"
#include <iostream>

#pragma once

class IntSet    
{
// friend void operator<<(int, IntSet);

private:
    IntNode * node;
    void operator=(IntSet &x);
    void clear();
    int size = 0;
    // void operator=(const IntSet &); 

public:
    IntSet();
    IntSet(IntSet &);

    ~IntSet();
    
    bool remove(int);
    bool insert(int);
    bool isEmpty();
    friend std::ostream & operator<<(std::ostream & os, IntSet * set);
};

std::ostream &operator<<(std::ostream &os, IntSet &set);
