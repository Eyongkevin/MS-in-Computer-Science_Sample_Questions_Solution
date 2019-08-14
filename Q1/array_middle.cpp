/* C++
By  Eyong Kevin Enowanyo.

An array with an odd number of elements is said to be centered if 
all elements (except the middle one) are strictly greater than the value of 
the middle element. Note that only arrays with an odd number of elements have 
a middle element. Write a function that accepts an integer array and returns 1 
if it is a centered array, otherwise it returns 0.
*/

int checkMiddleStatus(int arr[], int len){ 
    if(len % 2 ==1 && len > 0){
        int middIndex = len/2;
        for(int i=0; i < len; i++){
            if(i != middIndex && arr[middIndex] >= arr[i]) return 0;
        }
        return 1;
    }
    return 0;
}
#include "test.cpp"

int main() 
{
    testCheckMiddleStatus();

    return 0;
}