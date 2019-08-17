
int f(int a[], int len){
    int idx = -1;
    int left_sum =0;
    int right_sum = 0;
    int left =0;
    int right = 0;
    for(int i=1; i < len; i++){
        left = i - 1;
        right = i + 1;
        left_sum = 0;
        right_sum = 0;
        for(; right < len; right++)
            right_sum += a[right];
        for(; left >= 0; left--)
            left_sum += a[left];
        if(left_sum == right_sum){
            idx = i;
            break;
        }
    }
    return idx;
}
#include "test.cpp"

int main()
{
    test_f();


    return 0;
}
