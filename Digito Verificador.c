#include <stdio.h>
int main(void) {
int n, i=1, valor=0, numero;
printf("Numero: ");
scanf("%d", &n);
numero = n;
while( i<=6 ) {
    valor+=n%10;
    n/=10;
    i = i+1; }
    printf("%06d-%d\n", numero, valor%10);
    return 0;
}