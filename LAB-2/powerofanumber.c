#include<stdio.h>
int main(){ 

    int y;
    int x;
    int pawer(int x, int y);
    printf("Enter a y:");
    scanf("%d",&y);
    printf("Enter a x:");
    scanf("%d",&x);
    printf("pawer of %d is:",pawer(x,y));

    return 0;
}
    
    int pawer(int x,int y)
    {
    if(y==0){
            return 1;
        }
        else
        {
            return x*pawer(x,y-1);
        }
    }
