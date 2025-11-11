#include<stdio.h>


void main(){

    int n,i,j,temp,min;

    printf("Enter Size of Array : ");
    scanf("%d",&n);

    int a[n];
    printf("Enter Elements of array : ");
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }

    for (int  i = 0; i < n-1; i++)
    {
        min=i;
        for(int j=i+1;j<n;j++){

            if(a[j]<a[min]){

                min=j;

            }
        }
            temp=a[i];
                a[i]=a[min];
                a[min]=temp;
        
    }
    printf("sorted array : ");
   
    for(int i=0;i<n;i++){
    printf("%d ",a[i]);
    }
    
}