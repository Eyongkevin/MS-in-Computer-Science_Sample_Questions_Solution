#include<iostream>
#include<assert.h>
#include<vector>

using namespace std;

void printVector(vector<char> c){
    if(c.empty()) cout<<"{ }\n";
    else if(c == vector<char>{NULL}) cout<<"{NULL}\n";
    else
    {
        cout<<"{";
        for(auto i : c){
            cout<<i<<",";
        }
        cout<<"}"<<endl;
    }
;}

void test_f(){
    vector<char> v1 = {'a','b','c'};
    vector<char> v2 = {};

    // Result output
    vector<char> a1 = {NULL};
    vector<char> a2 = {'a','b','c'};
    vector<char> a3 = {'a','b'};
    vector<char> a4 = {'a'};
    vector<char> a5 = {NULL};
    vector<char> a6 = {'b','c'};
    vector<char> a7 = {'b'};
    vector<char> a8 = {NULL};
    vector<char> a9 = {'c'};
    vector<char> a10= {NULL};
    vector<char> a11= {};
    vector<char> a12={NULL};
    vector<char> a13={NULL};
    vector<char> a14={NULL};


    // Evaluation
    vector<char> r = f(v1, 0, 4);
    assert(r == a1);
    printVector(r);


    r = f(v1, 0, 3);
    assert(r == a2);
    printVector(r);

    r = f(v1, 0, 2);
    assert(r == a3);
    printVector(r);

    r = f(v1, 0, 1);
    assert(r == a4);
    printVector(r);

    r = f(v1, 1, 3);
    assert(r == a5);
    printVector(r);

    r = f(v1, 1, 2);
    assert(r == a6);
    printVector(r);

    r = f(v1, 1, 1);
    assert(r == a7);
    printVector(r);

    r = f(v1, 2, 2);
    assert(r == a8);
    printVector(r);

    r = f(v1, 2, 1);
    assert(r == a9);
    printVector(r);

    r = f(v1, 3, 1);
    assert(r == a10);
    printVector(r);

    r = f(v1, 1, 0);
    assert(r == a11);
    printVector(r);

    r = f(v1, -1, 2);
    assert(r == a12);
    printVector(r);

    r = f(v1, -1, -2);
    assert(r == a13);
    printVector(r);

    r = f(v2, 0, 1);
    assert(r == a14);
    printVector(r);
    cout<<"-------------------\n";
    cout<<"PASSED!"<<endl;
}