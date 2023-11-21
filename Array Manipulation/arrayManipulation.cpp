//
//  arrayManipulation.cpp
//  Array Manipulation
//
//  Created by Khursheed on 08/10/2023.
//

#include "arrayManipulation.hpp"
#include <iostream>
using namespace std;

myArray::myArray() {
    capacity = 100;
    size = 0;
    arr = new int[capacity];
}

// void myArray::insertOne(int num) {
//     if(capacity > size) {
//         arr[size] = num;
//         size++;
        
//         cout<<"\nThe new variable is inserted successfully.";
//     }
//     else
//         cout<<"\nInsertion of variable fails. The size limit is reached.";
// }

void myArray::insertMany(int array[], int s) {
    if(s<(capacity-size)) {
        int newSize = size + s;
        int j=0;
        for(int i=size; i<newSize; i++) {
            arr[i] = array[j];
            size++;
            j++;
        }
        cout<<"\nInserted successfully.";
    }
}

int myArray::search(int key) {
    for(int i=0; i<size; i++) {
        if(arr[i] == key)
            return i;
    }
    
    return -1;
}

void myArray::update(int existingNumber, int newNumber) {
    for(int i=0; i<size; i++) {
        if(existingNumber == arr[i]) {
            arr[i] = newNumber;
            cout<<"\nThe number is updated successfully.";
            return;
        }
    }
    
    cout<<"\nThe existing number given by you is not found.";
}

void myArray::delVariable(int key) {
    for(int i=0; i<size; i++) {
        if(arr[i] == key) {
            arr[i] = 0;

            while (i<size) {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                i++;
            }
            size--;
            cout<<"\nThe varibale is deleted successfully.";
            return;
        }
    }
    cout<<"\nThe number to be delete is not found";
}

void myArray::printArray() {
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}
