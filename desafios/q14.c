// potencia entre 2 numeros, 2 e 3 
#include <stdio.h>

int potencia(int a, int b) {
    int resultado = 1;
    for(int i = 0; i < b; i++) {
        resultado = resultado * a;
    }
    return resultado;
}
int main() {
    int res = potencia(2, 3);
    printf("O resultado é %d\n", res);
    return 0;
}