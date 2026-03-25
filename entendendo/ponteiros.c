#include <stdio.h>
//APRENDENDO PONTEIROS EM C, c mudancas do endereco de memoria
void calcula(int* c) {
    printf("calcula %d %d\n", (*c), c);
    (*c)++;
    printf("calcula %d %d\n", (*c), c);

}
int main() {
    int c = 10;
    
    printf("main %d %d\n", c, &c);
    calcula(&c);
    printf("main %d %d\n", c, &c);
    
}