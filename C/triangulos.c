#include <stdio.h>

void opcoes(){
  printf("\nEscolha a opção:\n");
  printf("1 - Informar triangulo\n");
  printf("2 - Testar se é um triângulo válido\n");
  printf("3 - Testar tipo em relação aos ângulos\n");
  printf("4 - Testa tipo em relação aos lados\n");
  printf("5 - Relizar todos os testes\n");
  printf("6 - Encerrar programa\n");
  printf("Selecione: ");
}

int validar(int l1, int l2, int l3){
  if(l1 >= l2 + l3){    
    return 0;
  } 
  else{  
    return 1;
  }
}

void triangulo_angulo(int l1, int l2, int l3){
  if(l1*l1 == l2*l2 + l3*l3){
    printf("Triângulo Retângulo\n");
  }
  else if(l1*l1 > l2*l2 + l3*l3){
    printf("Triângulo Obtusângulo\n");
  }
  else{
    printf("Triângulo Acutângulo\n");
  }
}

void triangulo_lado(int l1, int l2, int l3){
  if(l1 == l2 && l1 == l3){
    printf("Triângulo Equilátero\n");
  }
  else if(l1 == l2 || l1 == l3 || l2 == l3){
    printf("Triângulo Isóceles\n");
  }
  else{
    printf("Triângulo Escaleno\n");
  }
}

int main(void) {
  int op, init;
  int lado1, lado2, lado3, aux;
  init = 0;

  printf("Bem vindo ao triangulizer!\n\n");

  do{
    opcoes();
    scanf("%d", &op);
    switch(op){
      case 1:
        scanf("%d %d %d", &lado1, &lado2, &lado3);
        init = 1;
        printf("Tirângulo lido com sucesso!\n");
        if(lado2 > lado1 && lado2 > lado3){
          aux = lado2;
          lado2 = lado1;
          lado1 = aux;
        }
        else if(lado3 > lado1 && lado3 > lado2){
          aux = lado3;
          lado3 = lado1;
          lado1 = aux;
        }
        break;
      case 2:        
        if(init != 0){          
          if(validar(lado1, lado2, lado3) == 1){
            printf("Triângulo válido\n");
          }
          else{
            printf("Não é um triângulo\n");
          }        
        }
        break;
      case 3:        
        if(init != 0){          
          if(validar(lado1, lado2, lado3) == 1){
            triangulo_angulo(lado1, lado2, lado3);
          }
        }
        break;
      case 4:        
        if(init != 0){        
          if(validar(lado1, lado2, lado3) == 1){
            triangulo_lado(lado1, lado2, lado3);
          }
        }
        break;
      case 5:        
        if(init != 0){                        
          if(validar(lado1, lado2, lado3) == 1){
            triangulo_angulo(lado1, lado2, lado3);
            triangulo_lado(lado1, lado2, lado3);
          }
        }
        break;
      case 6:break;
      default: printf("Opção inválida!\n");
    }
  }while(op != 6);

  return 0;
}