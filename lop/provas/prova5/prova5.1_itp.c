#include <stdio.h>

// Bubble Sort

int main(){

    int arr[50], num, x, y, temp;


    scanf("%d", &num);


    for (x = 0; x < num; x++)
        scanf("%d", &arr[x]);

    for (x = 0; x < num; x++)
        printf("%d ", arr[x]);
    
    printf("\n");

    for (x = 0; x < num - 1; x++){

        for (y = 0; y < num - x - 1; y++){

            if (arr[y] > arr[y + 1]){

                temp = arr[y];

                arr[y] = arr[y + 1];

                arr[y + 1] = temp;
            }
        }
        for (int j = 0; j < num; j++){

            printf("%d ", arr[j]);
        }
        printf("\n");
    }
    
    return 0;
}