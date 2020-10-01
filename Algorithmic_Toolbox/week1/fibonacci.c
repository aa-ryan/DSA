#include "stdio.h"
#include <stdlib.h>

void Fibo(long int n, long long int arr[]);

int main() {
    long long int *arr;
    long int n;
    printf("Enter the number of places you want: ");
    scanf("%li", &n);

    arr = malloc(sizeof(long long int) * n);

    Fibo(n, arr);
    for (int i = 0; i < n; ++i) {
        printf("%lli ", arr[i]);
    }

}

void Fibo (long int n, long long int arr[]) {

    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < n+1; ++i) {
    arr[i] = arr[i-1] + arr[i-2];
    }
}
