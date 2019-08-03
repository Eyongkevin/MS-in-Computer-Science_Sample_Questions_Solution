/* C++
By  Eyong Kevin Enowanyo

An array with an odd number of elements is said to be centered if 
all elements (except the middle one) are strictly greater than the value of 
the middle element. Note that only arrays with an odd number of elements have 
a middle element. Write a function that accepts an integer array and returns 1 
if it is a centered array, otherwise it returns 0.

*/
#include<iostream>
#include<array>

using namespace std;


template <int n>
int checkMiddleStatus(array<int, n>);

// Import test file for testing.
#include "test.cpp"

int main(int argc, char* argv[])
{
    // Test function
    testCheckMiddleStatus();

  
    return 0;


}

template <int n>
int checkMiddleStatus(array<int, n> arr){ 
    int getSize = arr.size();

    if(getSize % 2 ==1 && getSize > 0){
        int middIndex = getSize/2;
        for(int i=0; i < getSize; i++){
            if(i != middIndex && arr[middIndex] >= arr[i]) return 0;
        }
        return 1;
    }
    return 0;
}
