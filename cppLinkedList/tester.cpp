//
//  tester.cpp
//  cppLinkedList
//
//  Created by Zach Howes on 9/3/19.
//  Copyright © 2019 Zach Howes. All rights reserved.
//

#include <iostream>
#include "ListStack.h"


int main(){
    
    
    ListStack<int> tester;
    
    tester.size();
    
    for (int i = 0; i < 25; ++i) {
        tester.push(i);
    }
    
    tester.print("Full Stack");
    
    for (int i = 0; i < 25; ++i) {
        tester.pop();
        tester.print("Down Stack");
    }
    
    ListStack<int> stopper;
    //List<int> tester;
//    int num = tester.size();
//    std::cout<< num <<std::endl;
//    tester.insertStart(5);
//    num = tester.size();
//    std::cout<< num <<std::endl;
//    std::cout << tester.getFirst() << std::endl;
   // tester.insertStart(2);
    //tester.insertStart(1);
    //tester.insertEnd(3);
    //std::cout<<tester.getFirst()<< " " << tester.getAt(2) << " "<< tester.getLast() << std::endl;
   // tester.insertAt(4, 4);
  //  std::cout<<tester.getAt(1)<< " " << tester.getAt(2) << " "<< tester.getAt(3) << " " << tester.getAt(4) << std::endl;
    
    //std::cout << tester.find(4) << " " << tester.find(2) << " " << tester.find(1) << " " << tester.find(0) << " " << tester.find(3) << std::endl;
    
    
    
//    tester.removeAt(2);
//    std::cout<<tester.getAt(1)<< " " << tester.getAt(2) << " "<< tester.getAt(3) << " " << tester.getAt(4) << std::endl;
//
//    tester.removeAt(2);
//       std::cout<<tester.getAt(1)<< " " << tester.getAt(2) << " "<< tester.getAt(3) << " " << tester.getAt(4) << std::endl;
//
//    tester.removeAt(5);
//       std::cout<<tester.getAt(1)<< " " << tester.getAt(2) << " "<< tester.getAt(3) << " " << tester.getAt(4) << std::endl;
//
//    tester.removeAt(2);
//       std::cout<<tester.getAt(1)<< " " << tester.getAt(2) << " "<< tester.getAt(3) << " " << tester.getAt(4) << std::endl;
//
//    tester.removeAt(1);
//       std::cout<<tester.getAt(1)<< " " << tester.getAt(2) << " "<< tester.getAt(3) << " " << tester.getAt(4) << std::endl;
    return 0;
}
