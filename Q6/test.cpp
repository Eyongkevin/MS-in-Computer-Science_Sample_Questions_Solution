#include<iostream>
#include<list>
#include<algorithm>
#include<assert.h>
using namespace std;


void test_f(){
    list<list<int>> larr = {{1,8,3,7,10,2},
                            {1, 5, 3, 1, 1, 1, 1, 1, 1}, 
                            {2, 1, 1, 1, 2, 1, 7},
                            {1, 2, 3},
                            {3, 4, 5, 10},
                            {1, 2, 10, 3, 4}};
    int result[] = {3, 2, 5, -1, -1, -1};
    static int i=0;
    
    
    for_each(larr.begin(), larr.end(), [result](list<int> l){
        int a[l.size()];
        copy(l.begin(), l.end(), a);
        int r = f(a, l.size());
        assert(r == result[i]);
        i++;
        cout<<f(a, l.size())<<endl;
    });
    cout<<"-----------------\n PASSED!"<<endl;
}