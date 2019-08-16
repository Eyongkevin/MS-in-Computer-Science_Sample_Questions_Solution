#include<iostream>
#include<vector>
#include<assert.h>

using namespace std;

vector<char> f(vector<char> c, int start, int len){
    if(start > c.size() || (start + len)-1 >= c.size())
        return {NULL};

    vector<char> temp;
    vector<char>::iterator s = c.begin() + start;
    vector<char>::iterator n = s + len;
    copy(s, n, back_inserter(temp));


    return temp;
}

#include "test.cpp"

int main()
{
   test_f();
   return 0;
}