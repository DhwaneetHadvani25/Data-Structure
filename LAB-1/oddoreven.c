#include<stdio.h>
void main(){
    int n;
    
    printf("enter a number :");
    scanf("%d",&n);

    if(n%2==0){
        printf("this number is even");
    }
    else{
        printf("this number is odd");
    }
}