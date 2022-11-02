#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int* xp, int* yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int* arr, int n){
    int i, j, min_idx;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        swap(&arr[min_idx], &arr[i]);
    }
}

int main () {
   int tam = 100;
   
   char* str = (char*) malloc(tam * sizeof(char));
    int* val = (int*) malloc(tam * sizeof(int));
   
   fgets(str, 81, stdin);
   const char s[2] = " ";
    char *token;
    int i = 0;
    
     token = strtok(str, s);
     val[0] = atoi(token);
     
     while( token != NULL ) {
        val[i] = atoi(token);
        token = strtok(NULL, s);
        i++;
    }

   selectionSort(val, i);

   for(int j = 0; j < i; j++)
     printf("%d ", val[j]);

   return(0);
}