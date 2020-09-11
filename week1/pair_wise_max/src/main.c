#include<stdio.h>
#include<stdlib.h>
#define MAX(a,b) (((a)>(b))? a:b)

// Don't know why it shows "UNKNOWN SIGNAL 11"
long long int MaxPairwiseProduct(long long int numbers[], int size) {
    long long int max_product = 0;
    int n = size;

    for (int first = 0; first < n; ++first) {
        for (int second = first + 1; second < n; ++second) {
        max_product = MAX(max_product, numbers[first] * numbers[second]);
        }
    }

    return max_product;
}

int main() {
    int n;
    scanf("%d", &n);
    long long int *arr;
    arr = calloc(n, sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%lli", &arr[i]);
    }


    printf("%lli", MaxPairwiseProduct(arr, n));

}


