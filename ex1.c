#include<stdio.h>
#include<math.h>
int F1(int n){
    int frac=1;
    for(int i=1;i<=n;i++){
        frac=frac*i;
    }
return frac;
}
int F2(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int n,m;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("\n\n");
    printf("F1(%d)= %d\n\n",n,F1(n));
    printf("F2(%d)= %d\n\n",n,F2(n));
    printf("Enter m: ");
    scanf("%d",&m);
    printf("\n\n");
    printf("Result: %.0f",pow(n,m));
    return 0;
}

