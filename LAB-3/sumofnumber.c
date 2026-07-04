#include<stdio.h>
void main(){
    int m, n, i, sum = 0;
    printf("Enter the starting number: ");
    scanf("%d", &m);
    printf("Enter the ending number: ");
    scanf("%d", &n);
    int a[n - m + 1];
    for(i = 0; i < n - m + 1; i++){
        a[i] = m + i;
        sum += a[i];
    }
    printf("The sum of numbers from %d to %d is: %d", m, n, sum);
}