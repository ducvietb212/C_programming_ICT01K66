#include<stdio.h>
int frac(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    printf("%d",frac(n)/(frac(k)*frac(n-k)));
    return 0;
}