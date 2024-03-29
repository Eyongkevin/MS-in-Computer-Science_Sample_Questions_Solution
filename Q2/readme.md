# MS in Computer Science
## Computer Professionals Master's Program Sample Test and Solution in C++

### Qestion 1:
Write a function that takes an array of integers as an argument and returns a value based on the sums of the even and odd numbers in the array. Let X = the sum of the odd numbers in the array and let Y = the sum of the even numbers. The function should return X – Y
The signature of the function is:
int f(int[ ] a)

### Note
Since I am using C++, my function will take an integer array and it's size. This is because once in a function, there is no
way to know the size of an array which was passed to it as argument. This is acceptable if you take this test in C++

### Hint
![](example.PNG)
### Solution
Check file `quiz2.cpp` for solution.

#### run
`$ g++ quiz2.cpp`

`$ ./a.out`
#### output

```
{1}            : 1
{1, 2}         : -1
{1, 2, 3}      : 2
{1, 2, 3, 4};  : -2
{3, 3, 4, 4}   : -2
{3, 2, 3, 4}   : 0
{4, 1, 2, 3}   : -2
{1, 1}         : 2
{}             : 0
-----------------
Passed
```
