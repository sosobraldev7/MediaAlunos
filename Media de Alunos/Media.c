#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "português");
        float nota1,nota2,media; 
    printf("Digite a nota1: ");
        scanf("%f", &nota1);
    printf("Digite a nota2: ");
        scanf("%f", &nota2);
            media = (nota1+nota2)/2;
    printf("A media é: %.1f\n", media);
        if (media<6)
        {
            printf("\nAluno Reprovado\n"); 
        }
        else
        {
            printf("\nAluno Aprovado\n");
        }
            system("pause");
    return 0;
}