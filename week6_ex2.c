#include<stdio.h>
int main(){
    float dec[11]={0.0,4.0,5.0,5.5,6.5,7.0,8.0,8.5,9.5,10};
    float four[10]={0,1,1.5,2.0,2.5,3.0,3.5,4.0,4.0};
    char str[10][3]={"F","D","D+","C","C+","B","B+","A","A+"};
    float n;
    printf("Enter the point: ");
    scanf("%f",&n);
    for(int i=1;i<9;i++){
        if(n>=dec[i-1]&&n<dec[i]){
            printf("Diem he 4: %.1f\n",four[i-1]);
            printf("Diem chu: %s",str[i-1]);
        }
    }
    return 0;
}