//given an array of integers.change the value of all odd indexed elements to
//its second multiiple and increment all even indexed value by 10.

#include<stdio.h>

int main() {
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int sumEven = 0; // Sum of elements at even indicex 1+3+5+7=16
    int sumOdd = 0;  // Sum of elements at odd indicex  2+4+^=12

    // Calculate sums based on index parity
    for(int i = 0; i <= 6; i++) {
        if(i % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }

    // Calculate the difference between sumEven and sumOdd
    int res = sumEven - sumOdd;

    // Print the result
    printf("%d\n", res);

    return 0;
}
