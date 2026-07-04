#include<stdio.h>
void main(){

    int n, i, j, flag = 0;
    printf("Enter the number of elements: "); 
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(a[i] == a[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            break;
        }
    }
    if(flag == 1){
        printf("The array contains duplicate numbers.\n");
    }
    else{
        printf("The array does not contain duplicate numbers.\n");
    }
}