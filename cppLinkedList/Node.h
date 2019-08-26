//
//  Node.hpp
//  cppLinkedList
//
//  Created by Zach Howes on 8/26/19.
//  Copyright © 2019 Zach Howes. All rights reserved.
//

#ifndef Node_h
#define Node_h

#include <iostream>

class Node {
public:
    Node *forwardLink;
    Node *backwardLink;
    int dataPoint;
};

#endif /* Node_h */
