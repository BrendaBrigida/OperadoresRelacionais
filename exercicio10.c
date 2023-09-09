#include <stdio.h>
#include<math.h>

main(){

    float a, b, c;

    printf("Digite o coeficiente 'a': ");
    scanf("%f", &a);

    printf("Digite o coeficiente 'b': ");
    scanf("%f", &b);

    printf("Digite o coeficiente 'c': ");
    scanf("%f", &c);

    if (a == 0) {
        printf("Nao e uma equacao de segundo grau.\n");
    } else {
        float delta = b * b - 4 * a * c;
        
        if (delta < 0) {
            printf("Nao existe raiz real.\n");
        } else if (delta == 0) {
            float raiz = -b / (2 * a);
            printf("Raiz unica: %f\n", raiz);
        } else {
            float raiz1 = (-b + sqrt(delta)) / (2 * a);
            float raiz2 = (-b - sqrt(delta)) / (2 * a);
            printf("Raiz 1: %f\n", raiz1);
            printf("Raiz 2: %f\n", raiz2);
        }
    }

   
}