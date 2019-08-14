/*
    By Eyong Kevin Enowanyo
 */
int f(int a[], int len){
    int odds = 0;
    int evens = 0;

    for(int i=0; i < len; i++)
        if(a[i] % 2 == 0) evens += a[i];
        else odds += a[i];

    return (odds - evens);
    
};
#include "test.cpp"
int main()
{
    testSumOdd_SumEven();

    return 0;
}