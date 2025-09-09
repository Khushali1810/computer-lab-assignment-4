#include<stdio.h>
int main()
{
   int a[5],i,j,k;
   for(i = 0;i<5;i++){
    scanf("%d",&a[i]);
   }
    for(i=0; i<5;i++)
    {
        for(j=i+1;j<5;j++){
            if(a[i] < a[j]){
                k = a[i];
                a[i] = a[j];
                a[j] = k;
            }
        }
    }
    printf("sorted array ascending:\n");
    for(i=0;i<5;i++){
        printf("%d",a[i]);
    }
}
