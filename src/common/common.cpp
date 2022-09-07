#include <iostream>
#include <stdio.h>
using namespace std;

void printArray(int array[], int size){
    string result = (""); 
    cout << "\n";
    for (int i = 0; i < size; i++)
        result += to_string(array[i]) + ", ";
    result = result.substr(0, result.size() - 2);
    cout << result;
}