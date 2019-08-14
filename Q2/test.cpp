#include <assert.h> 
#include<iomanip>
#include<iostream>

using namespace std;

void testSumOdd_SumEven()
{
    int a[] = {1};
    int a2[] = {1, 2};
    int a3[] = {1,2,3};
    int a4[] = {1, 2, 3, 4};
    int a5[] = {3, 3, 4, 4};
    int a6[] = {3, 2, 3, 4};
    int a7[] = {4, 1, 2, 3};
    int a8[] = {1, 1};
    int a9[] = {};
    


        int answer;
        answer = f(a, sizeof(a)/sizeof(a[0]));
        assert(answer == 1);
        cout<<"{1}"<<std::setw(14)<<": "<<answer<<endl;
        

        answer = f(a2, sizeof(a2)/sizeof(a2[0]));
        assert(answer == -1);
        cout<<"{1, 2}"<<std::setw(11)<<": "<<answer<<endl;

        answer = f(a3, sizeof(a3)/sizeof(a3[0]));
        assert(answer == 2);
        cout<<"{1, 2, 3}"<<std::setw(8)<<": "<<answer<<endl;

        answer = f(a4, sizeof(a4)/sizeof(a4[0]));
        assert(answer == -2);
        cout<<"{1, 2, 3, 4};"<<std::setw(4)<<": "<<answer<<endl;

        answer = f(a5, sizeof(a5)/sizeof(a5[0]));
        assert(answer == -2);
        cout<<"{3, 3, 4, 4}"<<std::setw(5)<<": "<<answer<<endl;

        answer = f(a6, sizeof(a6)/sizeof(a6[0]));
        assert(answer == 0);
        cout<<"{3, 2, 3, 4}"<<std::setw(5)<<": "<<answer<<endl;

        answer = f(a7, sizeof(a7)/sizeof(a7[0]));
        assert(answer == -2);
        cout<<"{4, 1, 2, 3}"<<std::setw(5)<<": "<<answer<<endl;

        answer = f(a8, sizeof(a8)/sizeof(a8[0]));
        assert(answer == 2);
        cout<<"{1, 1}"<<std::setw(11)<<": "<<answer<<endl;

        answer = f(a9, sizeof(a9)/sizeof(a9[0]));
        assert(answer == 0);
        cout<<"{}"<<std::setw(15)<<": "<<answer<<endl;

        
        
        cout<<"-----------------\nPassed"<<endl;

}