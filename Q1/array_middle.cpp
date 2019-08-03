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


int main(int argc, char* argv[])
{
    array<int, 5> arr1={1, 2, 3, 4, 5};
    array<int, 5> arr2={3,2,1,4,5};
    array<int, 5> arr3={3, 2, 1, 4, 1};
    array<int, 4> arr4={1, 2, 3, 4};
    array<int, 0> arr5={};
    array<int, 1> arr6={10};


    int answer;
    answer = checkMiddleStatus<arr1.size()>(arr1);
    cout<<"Answer is: "<<answer<<endl;

    answer = checkMiddleStatus<arr2.size()>(arr2);
    cout<<"Answer is: "<<answer<<endl;

    answer = checkMiddleStatus<arr3.size()>(arr3);
    cout<<"Answer is: "<<answer<<endl;

    answer = checkMiddleStatus<arr4.size()>(arr4);
    cout<<"Answer is: "<<answer<<endl;

    answer = checkMiddleStatus<arr5.size()>(arr5);
    cout<<"Answer is: "<<answer<<endl;

    answer = checkMiddleStatus<arr6.size()>(arr6);
    cout<<"Answer is: "<<answer<<endl;


  
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
