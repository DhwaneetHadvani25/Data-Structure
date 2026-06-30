#include<stdio.h>
int main(){
    int n,rev(int n);

    printf("Enter a n:");
    scanf("%d",&n);
    printf("rev number %d is: %d",n,rev(n));
    

    return 0;
}
    
    int rev(int n)
    {
        int r=0;
        while (n!=0)
        {
            r = r * 10 + n % 10;
            n = n/10;
        }
        return r;
    }
