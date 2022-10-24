#include <stdio.h>

int main(){
  /*Criando a struct */
  struct dados
  {
    char nome[41];
    char tipo[41];
    int agencia;
    int conta;
    int cpf;
    float saldo;
  };
  
  /*Criando a variável aluno que será do
  tipo struct ficha_de_aluno */
  struct dados cliente;
  
  printf("\n---------- Cadastro do cliente -----------\n\n\n");
  
  printf("Nome do cliente ......: ");
  fgets(cliente.nome, 41, stdin);
  
  printf("Tipo de conta ......: ");
  fgets(cliente.tipo, 41, stdin);
  
  printf("Informe a agência ..: ");
  scanf("%d", &cliente.agencia);

  printf("Informe a conta ..: ");
  scanf("%d", &cliente.conta);

  printf("Informe o cpf ..: ");
  scanf("%d", &cliente.cpf);

  printf("Informe o saldo ..: ");
  scanf("%f", &cliente.saldo);
  
  printf("\n\n --------- Lendo os dados da struct ---------\n\n");
  printf("Nome ...........: %s", cliente.nome);
  printf("Tipo de conta .....: %s", cliente.tipo);
  printf("Agência ...: %d\n" , cliente.agencia);
  printf("Conta ...: %d\n" , cliente.conta);
  printf("Cpf ...: %d\n" , cliente.cpf);
  printf("Saldo ...: %.2f\n" , cliente.saldo);
  
  return(0);
}