#include<stdio.h>
#include <string.h>

int main(){
  char string_base[100] = "A aranha arranha a jarra";
  char sub_string[100] = "ra";
  char aux_string[100];
  char* substring;

  int substring_size = (int)strlen(sub_string);

  


  strncpy(aux_string, string_base, substring_size); 

  printf("%s\n", aux_string);

  return 0;
}