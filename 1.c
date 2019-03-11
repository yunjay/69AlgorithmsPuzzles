#include <stdio.h>
int main(){
    int cnt=0;
    int roc,sic,pap=0;
    for(roc=0;roc<=100;roc++){
        for(sic=0;sic<=100-roc;sic++){
            pap=100-roc-sic;
            if(roc>sic){
                if(roc!=pap)cnt++;
            }else if(roc==sic){if(pap>roc) cnt++;}
            else {if(sic!=pap){cnt++;}}
        }
    }
    printf("%d",cnt);
    return 0;
}