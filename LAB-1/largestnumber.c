#include<stdio.h>
void main(){
    int a,b,c;

    printf("Enter a tree numbers :");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c){
        printf("number a is largest");
    }
    else if(b>c){
        printf("number b is largest");
    }
    else{
        printf("number c is largest");
    }
}