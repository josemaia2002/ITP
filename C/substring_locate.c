#include <stdio.h>
#include <string.h>

int main(){
  char string_base[100] = "ARARA";
  char sub_string[100] = "RA";
  char aux_string[100];
  char* substring;

  int string_size = strlen(string_base);
  int substring_size = strlen(sub_string);

  int subsets = string_size - (substring_size - 1);

  char aux_string1[100] = {0};
  char aux_string2[100] = {0};
  char aux_string3[100] = {0};
  char aux_string4[100] = {0};
  
  strcpy(aux_string1, string_base); 
  strcpy(aux_string2, string_base); 
  strcpy(aux_string3, string_base); 
  strcpy(aux_string4, string_base); 


  int resultado1 = strcmp(aux_string1, sub_string);
  int resultado2 = strcmp(aux_string2, sub_string);
  int resultado3 = strcmp(aux_string3, sub_string);
  int resultado4 = strcmp(aux_string4, sub_string);

  printf("%s\n", aux_string1);
  printf("%s\n", aux_string2);
  printf("%s\n", aux_string3);
  printf("%s\n", aux_string4);

  return 0;
}




//char aux_string[subsets][100];

  /*
  for(int i = 0; i < subsets; i++){
    for(int j = 0; j < 100; j++){

    }
  }
  */