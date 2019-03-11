
const romanconversion=(num)=>{
    let m = Math.floor(num/1000);
    num-=m*1000;
    let d = Math.floor(num/500);
    num-=d*500;
    let c = Math.floor(num/100);
    num-=c*100;
    let l = Math.floor(num/50);
    num-=l*50;
    let x = Math.floor(num/10);
    num-=x*10;
    let v = Math.floor(num/5);
    num-=v*5;
    let i = num;

    let conver =''; //string
    for(let j=0;j<m;j++)conver +='M';
    if(d){
        if(c==4) conver+='CM'
        else{conver+='D';
            for(j=0;j<c;j++) conver+='C'; 
        }
    }else{
        if(c==4) conver+='CD'
        else {
            for(j=0;j<c;j++) conver+='C'; 
        }
    }
    if(l){
        if(x==4) conver+='XC'
        else {conver+='C';
            for(j=0;j<x;j++) conver+='X'; 
        }
    }else{
        if(x==4) conver+='XL'
        else {
            for(j=0;j<x;j++) conver+='X'; 
        }
    }
    if(v){
        if(i==4) conver+='IX'
        else {conver+='V';
            for(j=0;j<i;j++) conver+='I'; 
        }
    }else{
        if(i==4) conver+='IV'
        else {
            for(j=0;j<i;j++) conver+='I'; 
        }
    }
    console.log(conver);
    return conver;
}
const rome = (digits)=>{
    let result = 0;
    for(i=0;i<4000;i++){
        conver = romanconversion(i);
        if(conver.length===digits)result++;
    }
    return result;
}

console.log(rome(12));