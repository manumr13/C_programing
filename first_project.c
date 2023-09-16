#include<stdio.h>
int main(){
    int a , b;
    printf("Enter the number upto which you want to find the even and odd :");
    scanf("%d",&a);
    printf("enter the number that you want to find the multiplication :");
    scanf("%d",&b);
    for (int i; i<=a; i++){
        if (i%2==0){
            printf("even : %d\n",i);
        }
        else{
            printf("odd : %d\n",i);
        }
    }
    for(int j; j<=10 ;j++){
        printf("Multiplication of the numbers : %d * %d = %d\n",b,j,b*j);
    }
}