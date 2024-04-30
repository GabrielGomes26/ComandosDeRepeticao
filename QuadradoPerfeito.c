#include <stdio.h>
int main(void){
    int n, valor = 0;
    int cont = 1;
    printf("Numero: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
    valor = valor + cont;
    cont+=2; }
    printf("n ao quadrado: %d", valor);
    return 0;
}