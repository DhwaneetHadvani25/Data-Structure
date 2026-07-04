#include<stdio.h>
void main(){
    int n, i;
    float sum = 0, average;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
        sum += a[i];
    }
    average = sum / n;
    printf("The average of the numbers is: %.2f", average);
}