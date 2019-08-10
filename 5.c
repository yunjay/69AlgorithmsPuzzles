#include<stdio.h>

unsigned int fac(unsigned int num){
    unsigned int i,fac=1;
    for(i=1;i<=num;i++){
        fac*=i;
    }
    return fac;
}
 
unsigned int nCr(unsigned int n,unsigned int r){
    if(n==r || r==0){return 1;}
    return(fac(n)/(fac(r)*fac(n-r)));
} 

unsigned int money(unsigned int num){
    unsigned int currency[]={10000,5000,2000,1000,500 ,100,50,10,5,1};
    unsigned int i, left=num, minCoins=0;
    for(i=0;i<(sizeof(currency)/sizeof(int));i++){
        if(left/currency[i]!=0){
        minCoins+=(left/currency[i]);
        left-=currency[i]*(left/currency[i]);}
    }
    printf("%d 의 최소 화폐수: %d\n",num,minCoins);
    return minCoins;
}
unsigned int main(void){
    unsigned int i,n,sum=0;
    scanf("%d",&n);

    //동적 크기의 배열을 만들자
    unsigned int * p;
    p = (unsigned int*)calloc(n,sizeof(int));

    //파스칼 삼각형의 n 번째 줄 저장
    
    for(i=0;i<=n;i++){
        *(p+i)=nCr(n,i);
    }
    for(i=0;i<=n;i++){
        sum+=money(*(p+i));
    }
    printf("%d 번째 줄에 있는 값들의 화폐 수의 최소 수의 합: %d",n,sum);
    return 0;
}
