// LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LinkList.h"
using namespace std;

int main()
{
    LinkList list1;

    list1.insert(2);
    list1.insert(8);
    list1.insert(9);
    list1.insert(7);
    list1.insert(0);
    list1.insert(12);
    list1.insert(15);
    list1.insert(25);
    list1.insert(45);
   
    list1.remove(45);
    list1.printList();


  
    
}

