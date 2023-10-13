//
//  arrayManipulation.hpp
//  Array Manipulation
//
//  Created by Khursheed on 08/10/2023.
//

#ifndef arrayManipulation_hpp
#define arrayManipulation_hpp

class myArray {
private:
    int *arr;
    int capacity;
    int size;
    
public:
    myArray();
    
    void insertOne(int);
    void insertMany(int [], int);
    int search(int);
    void update(int, int);
    void delVariable(int);
    
    void printArray();
};

#endif /* arrayManipulation_hpp */
