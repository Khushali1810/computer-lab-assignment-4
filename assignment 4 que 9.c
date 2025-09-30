#include<stdio.h>
int main()
{
    int a[5],i;
    printf("enter the value for a:\n");
    for(i;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("the reverse array of a:\n");
    for(i=4;i>=0;i--){
         printf("%d ",a[i]);
    }
}
