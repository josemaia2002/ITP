#include <stdio.h>

int main() {
  int i, equipes, corrida, salto, lancamento, total;
  char categoria;
  i = equipes = corrida = salto = lancamento = total = 0;

  scanf("%d", &equipes);

  while (i < equipes) {
    scanf("%c", &categoria);
    while (categoria != 'F') {
      switch (categoria) {
      case 'C':
        corrida++;
        break;
      case 'S':
        salto++;
        break;
      case 'L':
        lancamento++;
        break;
      }
      scanf("%c", &categoria);
    }
    i++;
  }
  total = corrida + salto + lancamento;
  printf("%d ", corrida);
  printf("%d ", salto);
  printf("%d ", lancamento);
  printf("%d\n", total);

  return 0;
}