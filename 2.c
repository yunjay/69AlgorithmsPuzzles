#include <stdio.h>
#include <math.h>
int main(){
    int n=43;
    int a=1,b=17;
    int mid=abs(b-a)-1;
    int res = (1<<mid)+(1<<(n-mid-2))-1;
    printf("%d",res);
    return 0;
}