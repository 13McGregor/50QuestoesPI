#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, max, max2;
    scanf("%d",&i);
    max = i;
    max2 = i;
    while (i!=0){
        if (i>max){
            max2 = max;
            max = i;

        }
        else if (i>max2){
            max2=i;
        }
        scanf("%d",&i);
    }
    printf("O 2º maior é: %d \n", max2);
    return 0;
}