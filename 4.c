#include <stdio.h>
int segments(int num){
    int digits[10] = {6,2,5,5,4,5,6,3,7,6}; //index 번호에따른 세그먼트수
    int ten= num/10;
    int one= num%10;
    return (digits[ten]+digits[one]);
}
int main(void){
    int n;
    scanf("%d",&n);
    int hours,mins,secs;
    int segSum=0;
    int cases=0; //경우의수 
    for(hours=0;hours<24;hours++){
        for(mins=0;mins<60;mins++){
            for(secs=0;secs<60;secs++){
                segSum+=segments(secs);
                segSum+=segments(mins);
                segSum+=segments(hours);
                if(segSum==n){cases++;
                printf("%d:%d:%d\n",hours,mins,secs);
                }
                segSum=0;
            }
        }
    }

    printf("세그먼트수에 따른 시간의 경우의수: %d\n",cases);

    return 0;
}