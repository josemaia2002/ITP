#include <stdio.h>

int main(){
    int qte_alunos;

    scanf("%d", &qte_alunos);

    int chamada[qte_alunos];
    double media[qte_alunos];

    int aprovados[qte_alunos];
    int rec[qte_alunos];
    int reprovados[qte_alunos];

    int control_var_aprov = 0;
    int control_var_rec = 0;
    int control_var_reprov = 0;


    // Preenchimento do vetor
    for (int i = 0; i < qte_alunos; i++){
        scanf("%d - %lf", &chamada[i], &media[i]);
    }

    // Verifica situação do aluno
    for (int i = 0; i < qte_alunos; i++){
        if(media[i] >= 7.0){
            aprovados[control_var_aprov] = i;
            control_var_aprov++;
        }
        else if((media[i] >= 5.0) && (media[i] < 7.0)){
            rec[control_var_rec] = i;
            control_var_rec++;
        }
        else{
            reprovados[control_var_reprov] = i;
            control_var_reprov++;
        }
    }


    // Imprime os aprovados
    printf("Aprovados: ");
    for (int i = 0; i < control_var_aprov; i++){
        if(i == (control_var_aprov - 1)){
            printf("%d (%.1lf) ", chamada[aprovados[i]], media[aprovados[i]]);
        }
        else {
            printf("%d (%.1lf), ", chamada[aprovados[i]], media[aprovados[i]]);

        }
    }

    printf("\n");

    // Imprime os alunos em rec
    printf("Recuperacao: ");
    for (int i = 0; i < control_var_rec; i++){
        if(i == (control_var_rec - 1)){
            printf("%d (%.1lf) ", chamada[rec[i]], media[rec[i]]);
        }
        else {
            printf("%d (%.1lf), ", chamada[rec[i]], media[rec[i]]);
        }
    }
    printf("\n");

    // Imprime os reprovados
    printf("Reprovados: ");
    for (int i = 0; i < control_var_reprov; i++){
        if(i == (control_var_reprov - 1)){
            printf("%d (%.1lf) ", chamada[reprovados[i]], media[reprovados[i]]);
        }
        else {
            printf("%d (%.1lf), ", chamada[reprovados[i]], media[reprovados[i]]);
        }
    }
    
    printf("\n");

    return 0;
}