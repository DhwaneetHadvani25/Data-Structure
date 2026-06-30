#include<stdio.h>
int main(){
   int i=0,n,facter(int n);
   printf("Enter a number :");
   scanf("%d",&n);
   printf("facter of %d is :", n);
   facter(n);

    return 0;
}
    
    int facter(int n)
    {
        int i;
        i=1;

   while (i<=n)
   {
    if (n%i==0)
    {
        printf("%d",i);
    }
    i++;
    
   }
   
}
