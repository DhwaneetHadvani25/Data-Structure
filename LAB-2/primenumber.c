#include<stdio.h>
int main(){
    int n,fact(int n);
    printf("Enter a n:");
   scanf("%d",&n);
    printf("fact of %d is:%d",n,fact(n));

    return 0;
}
    
    int fact(int n)
    {
    if(n==0){
            return 1;
        }
        else
        {
            return n*fact(n-1);
        }
    }
