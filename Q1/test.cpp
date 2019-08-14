#include <assert.h> 
#include<iomanip>
#include<iostream>

using namespace std;

void testCheckMiddleStatus()
{
        int arr1[]={1, 2, 3, 4, 5};
        int arr2[]={3, 2, 1, 4, 5};
        int arr3[]={3, 2, 1, 4, 1};
        int arr4[]={1, 2, 3, 4};
        int arr5[]={};
        int arr6[]={10};


        int answer;
        answer = checkMiddleStatus(arr1, sizeof(arr1)/sizeof(arr1[0]));
        assert(answer == 0);
        cout<<"{1, 2, 3, 4, 5}: "<<answer<<endl;
        
        answer = checkMiddleStatus(arr2, sizeof(arr2)/sizeof(arr2[0]));
        assert(answer == 1);
        cout<<"{3,2,1,4,5}"<<std::setw(6)<<": "<<answer<<endl;

        answer = checkMiddleStatus(arr3, sizeof(arr3)/sizeof(arr3[0]));
        assert(answer == 0);
        cout<<"{3, 2, 1, 4, 1}: "<<answer<<endl;

        answer = checkMiddleStatus(arr4, sizeof(arr4)/sizeof(arr4[0]));
        assert(answer == 0);
        cout<<"{1, 2, 3, 4}"<<std::setw(5)<<": "<<answer<<endl;

        answer = checkMiddleStatus(arr5, sizeof(arr5)/sizeof(arr5[0]));
        assert(answer == 0);
        cout<<"{}"<<std::setw(15)<<": "<<answer<<endl;

        answer = checkMiddleStatus(arr6, sizeof(arr6)/sizeof(arr6[0]));
        assert(answer == 1);
        cout<<"{10}"<<std::setw(13)<<": "<<answer<<endl;
        
        
        cout<<"-----------------\nPassed"<<endl;

}
