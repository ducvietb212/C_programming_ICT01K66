#include<stdio.h>
#include<math.h>
int fun(int n){
    int count=0;
    if(n<2){
        return 0;
    }
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            count++;
        }
    }
    if(count>1){
        return 0;
    }
    else{
        return 1;
    }
}
int foo(int n){
    int i=0;
    int sum=0;
    while(sum<=n){
        i++;
        sum=sum+i;
    }
    return i-1;
}
int main(){
 printf("fun(1) = %d\n", fun(1));
 printf("fun(2) = %d\n", fun(2));
 printf("fun(5) = %d\n", fun(5));
 printf("fun(6) = %d\n", fun(6));
 printf("\n");
 printf("foo(9) = %d\n", foo(9));
 printf("foo(10) = %d\n", foo(10));
 printf("foo(11) = %d\n", foo(11));
 return 0;
}