#include<stdio.h>
int main()
{
    int a[5], b[10];
    int i,j =0;
    printf("enter the value for a:\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
     for(i=0;i<10;i++){
        b[i]=0;
    }
     for(i=0;i<5;i++){
        b[i]=a[i];
        j+=2;
    }
    printf("enter the value for b:\n");
    for(i=0;i<10;i++){
        printf("%d",b[i]);
    }
}
