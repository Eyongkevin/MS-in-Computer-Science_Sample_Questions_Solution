#include<iostream>
#include<assert.h>

using namespace std;

void test_f(){
    int input[] ={1234, 12005, 1, 1000, 0, -12345};
    int output[] = {4321, 50021, 1, 1, 0, -54321};
    int r = 0;
    int out = 0;

    for(int i=0; i < sizeof(input)/sizeof(input[0]);i++){
        r = f(input[i]);
        out = output[i];
        assert( r == out);
        cout<<"The reverse of "<<out<<" is: "<<r<<endl;
    }
    cout<<"------------------\n PASSED!"<<endl;
}
