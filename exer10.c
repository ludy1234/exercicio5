#include <stdio.h>
#include <math.h>

main(){
    //Calcule as raízes da equação de 2º grau.

    float a, b, c, x1, x2, delta;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    delta = pow(b,2) - 4 * a * c;

    if(a == 0){
        printf("Não é equação do segundo grau");

    }else if(delta < 0){
        printf("Não tem raiz");
    }else{

        if(delta == 0){
            x1 = (-b + sqrt(delta)) / (2 * a);
            printf("Raiz unica %lf", x1);

        }else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("O resultado da equacao e: %lf %lf ",x1,x2);
        }
    }

    
}