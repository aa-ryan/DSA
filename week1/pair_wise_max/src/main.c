#include<stdio.h>
#include<stdlib.h>

long long int maxpairwiseresult(int a[], int size);
void quicksort(int number[],int first,int last);



int main() {
    int n;
    scanf("%d", &n);
    int *arr;
    arr = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    quicksort(arr, 0, n-1);


    long long int result = maxpairwiseresult(arr, n);

    printf("%lli\n", result);
}

long long int maxpairwiseresult(int a[], int size) {
    long long int res = 0;

    // for (int i = 0; i < size; ++i) {
    //     for (int j = i+1; j < size; ++j) {
    //         if (((long long)a[i]) * a[j] > res) {
    //             res = ((long long)a[i]) * a[j];
    //         }
    //     }
    // }
    res = (long long)a[size - 1] * (long long) a[size - 2];
    
    return res;
}

void quicksort(int number[],int first,int last) {
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);

   }
}