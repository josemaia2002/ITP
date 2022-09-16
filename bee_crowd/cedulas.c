#include <stdio.h>

// URI 1018

int main() {
    int n, cem, cinquenta, vinte, dez, cinco, dois, um;

    scanf("%d", &n);

    cem = n/100;
    cinquenta = (n-(cem*100))/50;
    vinte = ((n-(cem*100))-(50*cinquenta))/20;
    dez = (((n-(cem*100))-(50*cinquenta)) - (20*vinte))/10;
    cinco = ((((n-(cem*100))-(50*cinquenta)) - (20*vinte)) - (10*dez))/5;
    dois = (((((n-(cem*100))-(50*cinquenta)) - (20*vinte)) - (10*dez)) - (5*cinco))/2;
    um = (((((n-(cem*100))-(50*cinquenta)) - (20*vinte)) - (10*dez)) - (5*cinco)) - (2*dois)/1;

    printf("%d\n", n);
    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinquenta);
    printf("%d nota(s) de R$ 20,00\n", vinte);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", um);

    return 0;
}
