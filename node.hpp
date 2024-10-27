#ifndef LISTNODE_H
#define LISTNODE_H

#include <iostream>

class Node{
    public:
        // Default constructor
        Node(){
            data = 0;
        }
        
        // Constructor with parameter d
        Node(int d){
            data = d;
        }

        // Return data
        int GetData() const{
            return data;
        }
    private:
        int data;
        int node;
};

#endif