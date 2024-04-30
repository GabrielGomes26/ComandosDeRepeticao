#include <stdio.h>
int main(void) {
    int n;
    printf("Numero: ");
    scanf("%d", &n);
    for(int i=1; i<=10; i++)
    printf("%d x %2d = %3d\n", n, i, n*i);
    return 0;
}