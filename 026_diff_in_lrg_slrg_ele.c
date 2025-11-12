#include<stdio.h>
#include<limits.h>

void main(){

    int n,i,largest=0,second_largest=0,smallest=0,second_smallest=0;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);

    }
    largest=INT_MIN;
    second_largest=INT_MIN;

    smallest=INT_MAX;
    second_smallest=INT_MAX;

    for(int i=0;i<n;i++){

        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }

    for(int i=0;i<n;i++){

        if(arr[i]<largest && arr[i]>second_largest){
            second_largest=arr[i];
        }
        if(arr[i]>smallest && arr[i]<second_smallest){
         second_smallest=arr[i];
        }
    }
    int diff=(second_largest-second_smallest);
printf("second_largest : %d\n",second_largest);
printf(" second_smallest : %d\n",second_smallest);

printf("Diff : %d",diff);

}