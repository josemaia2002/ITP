#include <stdio.h>

int main(){
    int n, i=0, j=0;
    char letra;

    scanf("%d %c", &n, &letra);

    n -= 1;

    while(i < n){
        j = 0;
        while(j < n){
            if((j == i) || i == ((n-1)-j)){
                printf("%c", letra);
            }
            else{
                printf(" ");
            }
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}                     