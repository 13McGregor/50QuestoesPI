#include <stdio.h>
#include <stdlib.h>


int main(){
    int max,i=-1;
    scanf("%d",&max);
    while(i!=0){
        if(i>max){
            max=i;
        }
        scanf("%d",&i);
    }
    printf("O máximo é: %d \n", max);
    return 0;
}
