#include<stdio.h>
int main()
{
    int notes[] = {500,200,100,50,20,10,5,2,1};
    int n,i,count;
    printf("Enter the Ampount");
    scanf("%d",&n);

    printf("minimum notes required:\n");
    for(i = 0; i < 9; i++) {
        count = n / notes[i];
        if(count !=0) {
            printf("%d notes of rs. %d\n",count,notes[i]);
            n = n % notes[i];

        }
    }
    return 0;
}
