#include <iostream>
#include "IntSet.h"
#include "IntNode.h"

int main()
{
    IntSet set;
    
    char input;

    while (true)
    {
        std::cout << "What would you like to do? R(remove), I(insert), P(print): ";
        std::cin >> input;
        int value;
        
        switch (input)
        {
            case 'R':

                std::cout << "Enter member value to delete: ";
                std::cin >> value;                

                if (!set.remove(value)) 
                {
                    std::cerr << "Couldn't find a value!" << std::endl;
                }

                break;

            case 'I':

                std::cout << "Enter value to insert: ";
                std::cin >> value;

                if (!set.insert(value))
                {
                    std::cerr << "Member value already exists!" << std::endl;
                }

                break;
                 
            case 'P':
            
                std::cout << &set;
                
                break;
        }

        std::cout << std::endl;
    }

    return 0;
}





















