
#include <assert.h> 
#include<iomanip>

void testCheckMiddleStatus()
{
    array<int, 5> arr1={1, 2, 3, 4, 5};
        array<int, 5> arr2={3, 2, 1, 4, 5};
        array<int, 5> arr3={3, 2, 1, 4, 1};
        array<int, 4> arr4={1, 2, 3, 4};
        array<int, 0> arr5={};
        array<int, 1> arr6={10};


        int answer;
        answer = checkMiddleStatus<arr1.size()>(arr1);
        assert(answer == 0);
        cout<<"{1, 2, 3, 4, 5}: "<<answer<<endl;
        

        answer = checkMiddleStatus<arr2.size()>(arr2);
        assert(answer == 1);
        cout<<"{3,2,1,4,5}"<<std::setw(6)<<": "<<answer<<endl;

        answer = checkMiddleStatus<arr3.size()>(arr3);
        assert(answer == 0);
        cout<<"{3, 2, 1, 4, 1}: "<<answer<<endl;

        answer = checkMiddleStatus<arr5.size()>(arr5);
        assert(answer == 0);
        cout<<"{1, 2, 3, 4}"<<std::setw(5)<<": "<<answer<<endl;

        answer = checkMiddleStatus<arr4.size()>(arr4);
        assert(answer == 0);
        cout<<"{}"<<std::setw(15)<<": "<<answer<<endl;

        answer = checkMiddleStatus<arr6.size()>(arr6);
        assert(answer == 1);
        cout<<"{10}"<<std::setw(13)<<": "<<answer<<endl;
        
        cout<<"-----------------\nPassed"<<endl;

}


