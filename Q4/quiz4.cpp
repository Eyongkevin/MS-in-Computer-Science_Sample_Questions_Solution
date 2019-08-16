#include<iostream>
#include<list>
#include<assert.h>
using namespace std;


int f(int n){
    int rem = n;
    int rev = 0;
    int sign_neg = false;
    
    if(rem < 0) {
        rem *= -1;
        sign_neg = true;
    }

    while(rem > 0){
        rev = rev*10 + rem%10;
        rem /= 10;
    }
    if(sign_neg) rev *= -1;
    return rev;
}
#include "test.cpp"
int main()
{
    test_f();
    return 0;
    
}