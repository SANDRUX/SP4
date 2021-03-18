#include "IntSet.h"
#include "IntNode.h"

IntSet::IntSet()
{
    this->node = NULL;
}

IntSet::IntSet(IntSet & rhsSet)
{
    if (this->isEmpty())
    {
        this->operator=(rhsSet);
    }
}

void IntSet::clear()
{
    while(size)
    {
        if (!this->isEmpty())
        {
            IntNode *temp = this->node;
            this->node = this->node->getNextNode();

            delete temp;

            this->size--;
        }
    }
}

IntSet::~IntSet()
{
    clear();
}

void IntSet::operator=(IntSet & x)
{
    this->node->setThis(x.node->getVal(), x.node->getNextNode());
}

std::ostream &operator<<(std::ostream &os, IntSet * set)
{
    if (set->isEmpty())
    {
        os << "Set is empty!" << std::endl;
    }

    os << "[ ";

    os << set->node->getVal() << " ";

    IntNode * srch = set->node;

    while (srch->getNextNode() != NULL)
    {
        os << srch->getNextNode()->getVal() << " ";

        srch = srch->getNextNode();
    }

    os << "]";

    return os;
}

bool IntSet::isEmpty()
{
    if (this->node == NULL)
    {
        return true;
    }

    return false;
}

bool IntSet::insert(int val)
{
    if (this->isEmpty())
    {
        this->node = new IntNode;

        this->node->setVal(val);
        this->node->setNextNode(NULL);

        this->size ++;

        return true;
    }

    IntNode * srch = this->node;        

    while (srch->getNextNode() != NULL)
    {
        if (srch->getNextNode()->getVal() == val)
        {
            return false;
        }
        
        srch = srch->getNextNode();
    }

    IntNode * curr = new IntNode;
    
    curr->setVal(val);
    curr->setNextNode(NULL);

    srch->setNextNode(curr);

    this->size ++;

    return true;
}

bool IntSet::remove(int val)
{
    if (this->isEmpty())
    {
        return false;
    }
    
    IntNode * srch = this->node;

    if (srch->getVal() == val)
    {
        this->node = srch->getNextNode();

        delete srch;

        return true;
    }

    IntNode * prev;

    int count = 0;

    while (count < 1)
    {
        if (srch->getNextNode()->getVal() == val)
        {
            prev = srch;

            srch = srch->getNextNode();

            prev->setNextNode(srch->getNextNode());

            delete srch;

            this->size --;

            count ++;

            return true;
        }
        
        srch = srch->getNextNode();
    }

    return false;
}
