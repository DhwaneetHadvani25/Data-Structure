#include<stdio.h>
void main(){
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int smallest = a[0], largest = a[0];
    int pos_smallest = 0, pos_largest = 0;
    for(i=1; i<n; i++){
        if(a[i] < smallest){
            smallest = a[i];
            pos_smallest = i;
        }
        if(a[i] > largest){
            largest = a[i];
            pos_largest = i;
        }
    }
    printf("The smallest number is %d and its position is %d\n", smallest, pos_smallest);
    printf("The largest number is %d and its position is %d\n", largest, pos_largest);
}