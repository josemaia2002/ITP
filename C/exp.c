#include <stdio.h>

int main() {
    int size, i=0, j=0;
    scanf("%d", &size);

   

    while(i < size){
        j = 0;
        while(j < size){
            if((j == i) || i == ((size-1)-j)){
                printf("#");
            }
            else{
                printf(" ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
}