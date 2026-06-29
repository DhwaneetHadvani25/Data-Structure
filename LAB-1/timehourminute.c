#include<stdio.h>
void main(){
    int totalSeconds, hours, minutes, seconds;

    printf("Enter a totalseconds :");
    scanf("%d",&totalSeconds);

    hours = totalSeconds/3600;
    minutes = (totalSeconds%3600)/60;
    seconds = totalSeconds/60;

    printf("tiem is : %d,%d,%d",&hours, &minutes, &seconds);
}