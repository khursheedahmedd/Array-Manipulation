//
//  main.cpp
//  Array Manipulation
//
//  Created by Khursheed on 08/10/2023.
//

#include <iostream>
#include "arrayManipulation.hpp"

using namespace std;

int main() {
    myArray array1;
    
    char ch = 'y';
    
    do{
        int choice;
        
        cout<<"\n*********** Array Manipulation ***********";
        cout<<"\n*                                        *";
        cout<<"\n*  1. Insert One Variable                *";
        cout<<"\n*  2. Insert Many Variables              *";
        cout<<"\n*  3. Search a Variable                  *";
        cout<<"\n*  4. Update a variable                  *";
        cout<<"\n*  5. Delete a Variable                  *";
        cout<<"\n*  6. Print Array                        *";
        cout<<"\n*                                        *";
        cout<<"\n******************************************";
        cout<<"\nEnter one choice from above: ";
        cin>>choice;
        
        switch(choice) {
            case 1: {
                cout<<"\nInserting a variable....";
                
                int number;
                cout<<"\nEnter a number to insert: ";
                cin>>number;
                
                array1.insertOne(number);
                
                break;
            }
            case 2: {
                cout<<"\nInserting many variables....";
                
                int s;
                cout<<"\nHow many numbers you want to insert: ";
                cin>>s;
                
                int *array = new int[s];
                
                cout<<"\nEnter the numbers you want to insert: ";
                for(int i=0; i<s; i++) {
                    cin>>array[i];
                }
                array1.insertMany(array, s);
                break;
            }
            case 3: {
                int key;
                cout<<"\nEnter the number you want to search: ";
                cin>>key;
                
                if(array1.search(key) == -1)
                    cout<<"\nThe required number is not found in array.";
                else
                    cout<<"\nThe searched number is at "<<array1.search(key)<<" index.";
            
                break;
            }
            case 4: {
                int existingNumber;
                cout<<"\nEnter the number on which place you want to replace: ";
                cin>>existingNumber;
                
                int newNumber;
                cout<<"\nEnter the number that you want to replace: ";
                cin>>newNumber;
                
                array1.update(existingNumber, newNumber);
                
                break;
            }
            case 5: {
                int key;
                cout<<"\nEnter the number you want to delete: ";
                cin>>key;
                
                array1.delVariable(key);
                
                break;
            }
            case 6: {
                array1.printArray();
                
                break;
            }
            default:
                cout<<"\nInvalid choice.";
        }
        
        cout<<"\nDo you want to repeat the manipulation? Press Y: ";
        cin>>ch;
        
    }while(ch == 'y' || ch == 'Y');
    
    cout<<"\n";
}

