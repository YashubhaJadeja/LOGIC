#include<stdio.h>



void main(){

    int n,i=1,m;

    printf("Enter Size of Array : ");
    scanf("%d",&n);

    int a[n];
    printf("Enter Elements of array : ");
    for(int i=1;i<=n;i++){
    scanf("%d",&a[i]);
    }

    printf("Enter element  : ");
    scanf("%d",&m);

   
    if(isInArray(a,m,i,n)==0)
    {
        printf("not element found");
    }
    else{
        printf(" element found %d",isInArray(a,m,i,n));
    }
    

    
}

int isInArray(int a [], int m,int i,int n){

   
        if(n==i || a[i]==m){
            if(a[i]==m){
                return i;
            }
            else {return 0;}
            

        }else{
            return isInArray(a,m,i+1,n);
        }
    
}

