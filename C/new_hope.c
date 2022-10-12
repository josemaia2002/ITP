#include <stdio.h>
#include <string.h>

#define MSG_SIZE 210
#define KEY_SIZE 10

void encrypt(char* P, char* K, char* base, char* encripted){
    for(int i = 0; i < strlen(P); i++){
        encripted[i] = P[i]
    }
}

int main() {
    // Declaração das strings com a mensagem e a chave
    char message[MSG_SIZE];
    char key[KEY_SIZE];

    char secret[MSG_SIZE]; // Mensagem cifrada

    // Caracteres permitidos
    const char S[] =
    {'0','1','2','3','4','5','6','7','8','9',
     'A','B','C','D','E','F','G','H','I','J',
     'K','L','M','N','O','P','Q','R','S','T',
     'U','V','W','X','Y','Z','.',',','?',' '};


    // Recebe a chave e coloca o \0 na última posição
    fgets(key, KEY_SIZE, stdin);
    key[(strlen(key)) - 1] = '\0';

    // Recebe a messagem e coloca o \0 na última posição
    fgets(message, MSG_SIZE, stdin);
    message[(strlen(message)) - 1] = '\0';

    printf("%s\n", key);
    printf("%s\n", message);

    return 0;
}