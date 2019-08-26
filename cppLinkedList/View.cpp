//
//  main.cpp
//  cppLinkedList
//
//  Created by Zach Howes on 8/26/19.
//  Copyright © 2019 Zach Howes. All rights reserved.
//

#include "View.h"
#include "Node.h"

int main() {
    Node theNode;
    theNode.dataPoint = 2;
    Node secondNode;
    theNode.forwardLink = &secondNode;
    theNode.backwardLink = &secondNode;
    secondNode.dataPoint = 3;
    
    std::cout << theNode.forwardLink->dataPoint;
    return 0;
}
