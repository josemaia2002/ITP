#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int size_A;
    int size_B;
  
    int size_uniao;
    int size_inter;

    // Preenchimento de A
    scanf("%d", &size_A);
    int a[size_A];
    for(int i = 0; i < size_A; i++){
        scanf("%d", &a[i]);
    }

    // Preenchimento de B
    scanf("%d", &size_B);
    int b[size_B];
    for(int i = 0; i < size_B; i++){
        scanf("%d", &b[i]);
    }

    if(size_A > size_B){
      size_inter = size_A;
    }
    else {
      size_inter = size_B;
    }

    size_uniao =  size_A + size_B;
     

    int uniao[size_uniao];
    int intersecao[size_inter];

    // Intersecao
    int indice = 0;

    for(int i = 0; i < size_B; i++){
        for(int j = 0; j < size_A; j++){
            if(b[i] == a[j]){
                intersecao[indice] = b[i];
                indice++;
            }
        }
    }

    // Uniao
    for(int i = 0; i < size_A; i++){
        uniao[i] = a[i];
    }

    int indice_uniao = size_A;
    int aux = 1;

    for(int i = 0; i < size_B; i++){
        aux = 1;
        for(int j = 0; j < size_A; j++){
            if(b[i] == uniao[j]){
                aux = 0;
            }
        }
        if(aux == 1){
            uniao[indice_uniao] = b[i];
            indice_uniao++;
        }
    }

    // Impressão da União
    if(indice_uniao > 0){
        printf("A união B == {");

        for(int i = 0; i < indice_uniao; i++){
            if(i == indice_uniao - 1){
                printf("%d", uniao[i]);
            }
            else{
                printf("%d ", uniao[i]);
            }
        }
        printf("}\n");
    }
    else{
        printf("A união B == {vazio}\n");
    }

    // Impressão da Interseção
    if(indice > 0){
        printf("A interseção B == {");

        for(int i = 0; i < indice; i++){
            if(i == indice - 1){
                printf("%d", intersecao[i]);
            }
            else{
                printf("%d ", intersecao[i]);
            }
        }
        printf("}\n");
    }
    else{
        printf("A interseção B == {vazio}\n");
    }

    return 0;
}