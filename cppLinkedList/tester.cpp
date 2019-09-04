/*
  tester.cpp
  cppLinkedList

  Created by Zach Howes on 9/3/19.
  Copyright © 2019 Zach Howes. All rights reserved.
*/

#include <iostream>
#include "ListStack.h"


int main(){
    
    
    
    List<std::string> tester;
    int num = tester.size();
    std::cout<< num <<std::endl;
//    tester.insertStart(5);
//    num = tester.size();
//    std::cout<< num <<std::endl;
//    std::cout << tester.getFirst() << std::endl;
//    tester.insertStart(2);
//    tester.insertStart(1);
//    tester.insertEnd(3);
//    std::cout<<tester.getFirst()<< " " << tester.getAt(2) << " "<< tester.getLast() << std::endl;
//    tester.insertAt(4, 4);
    tester.insertAt("first", 1);
    tester.insertAt("third", 2);
    tester.insertAt("second", 2);
    tester.print("test");
    std::cout<<tester.getAt(1)<< " " << tester.getAt(2) << " "<< tester.getAt(3) << " " << tester.getAt(4) << std::endl;
    
    std::cout << tester.find("first") << " " << tester.find("second") << " " << tester.find("third") << " " << tester.find("butthole") << " " << tester.find("America") << std::endl;
    
    
    
    tester.removeAt(2);
    std::cout<<tester.getAt(1)<< " " << tester.getAt(2) << " "<< tester.getAt(3) << " " << tester.getAt(4) << std::endl;

    tester.removeAt(2);
       std::cout<<tester.getAt(1)<< " " << tester.getAt(2) << " "<< tester.getAt(3) << " " << tester.getAt(4) << std::endl;

    tester.removeAt(5);
       std::cout<<tester.getAt(1)<< " " << tester.getAt(2) << " "<< tester.getAt(3) << " " << tester.getAt(4) << std::endl;

    tester.removeAt(2);
       std::cout<<tester.getAt(1)<< " " << tester.getAt(2) << " "<< tester.getAt(3) << " " << tester.getAt(4) << std::endl;

    tester.removeAt(1);
       std::cout<<tester.getAt(1)<< " " << tester.getAt(2) << " "<< tester.getAt(3) << " " << tester.getAt(4) << std::endl;
    
    tester.print("test");
    return 0;
}
