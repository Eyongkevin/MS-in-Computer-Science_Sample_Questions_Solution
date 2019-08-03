# MS in Computer Science
## Computer Professionals Master's Program Sample Test and Solution in C++

### Qestion 1:
An array with an odd number of elements is said to be centered if all elements (except the middle one) are strictly greater than the value of the middle element. Note that only arrays with an odd number of elements have a middle element. Write a function that accepts an integer array and returns 1 if it is a centered array, otherwise it returns 0.

### Hint

| if the input array is | return                                                                |
|-----------------------|-----------------------------------------------------------------------|
| {1, 2, 3, 4, 5}       | 0 (the middle element 3 is not strictly                               |
| {3, 2, 1, 4, 5}       | 1 (the middle element 1 is strictly                                   |
| {3, 2, 1, 4, 1}       | 0 (the middle element 1 is not strictly less than all other elements) |
| {1, 2, 3, 4}          | 0 (no middle element)                                                 |
| {}                    | 0 (no middle element)                                                 |
| {10}                  | 1 (the middle element 10 is strictly less than all other elements)    |

### Solution
Check file `array_middle.cpp` for solution.

#### run
`$ g++ array_middle.cpp`

`$ ./a.out`
#### output

```
{1, 2, 3, 4, 5}: 0
{3,2,1,4,5}    : 1
{3, 2, 1, 4, 1}: 0
{1, 2, 3, 4}   : 0
{}             : 0
{10}           : 1
-----------------
Passed
```
