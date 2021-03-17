#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, sum=0, num=0;
    float med;
    scanf("%d",&i);
    while(i!=0){
        sum += i;
        scanf("%d",&i);
        num++;
    }
    med = sum / num;
    printf("A média é: %f \n", med);
    return 0;
}