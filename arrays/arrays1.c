#include <stdio.h>

/*
    Intro to Arrays
    
    0i   1i   2i
    ----|----|----
    1e   2e   3e

    Out of range / Out of bounds error
    Off by 1 error --> can't be checked by compiler --> return is unpredictable --> run time error
*/

int sum();

int main(int argc, char const *argv[])
{
    // int arr[10];
    // int sum = 0;
    // int len = sizeof(arr)/sizeof(arr[0]); // len to number of array elements
    // for(int i = 0; i < len; i++)
    // {
    //     arr[i] = i; // fill array items
    // }
    // for(int i = 0; i < 10; i++){
    //     sum += arr[i]; // add to sum current value of array element at position i.
    // }
    // printf("%d\n", sum);

    // int counters[5] = {0,0,0,0,0};
    // int integers[5] = {0,1,2,3,4};
    // // Don't have to init the entire array length
    // float sample_data[500] = {100.0, 300.0, 500.5};
    // float sd[500] = {[2]=500.5, [1]=300.0, [0]=100.0}; // initialize array in any order with designated initializers

    // int arr[500];
    // for(int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++, arr[i] = i);
    // for(int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++, printf("%d\n", arr[i]));

    // int arr[4][5] = { // 2d array
    //     {1,2,3,4,5},
    //     {6,7,8,9,10},
    //     {11,22,33,44,55},
    //     {66,77,88,99,100}
    // };
    // for(int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++)
    // {
    //     for(int j = 0; j < (sizeof(arr[i])/sizeof(arr[i][0])); j++)
    //     {
    //         printf("%d\n", arr[i][j]);
    //     }
    // }
    // int size = 5;
    // int arr[size]; // variable length array
    // for(int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++)
    // {
    //     printf("%d\n", i);
    // }
    int a[5] = {10, 10, 10, 10, 10};
    int len = sizeof(a)/sizeof(a[0]);
    printf("%d\n", sum(len, a));
    return 0;
}

int sum(int len, int arr[])
{
    int sum = 0;
    for (int i = 0; i < len; i++){
        sum += arr[i];
    }
    return sum;
}