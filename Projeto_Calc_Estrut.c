#include <stdio.h>

int result = 0, soma(), sub(), mult(), div();

//Função principal
int main(){
    int opc;

    //Menu de opções e receber qual opção
    printf("Escolha uma das opcoes: \n");
    printf("1 - Soma \n");
    printf("2 - Subtracao \n");
    printf("3 - Divisao \n");
    printf("4 - Multiplicacao \n");
    scanf("%d", &opc);

    //Switch com funções + mostra na tela result
    switch (opc){
        case 1:
            soma(result);
            printf("O resultado da soma eh: %d", result);
    break;
        case 2:
            sub(result);
            printf("O resultado da subtracao eh: %d", result);
    break;
        case 3:
            div(result);
            printf("O resultado da divisao eh: %1.f", (float)result);
    break;
        case 4:
            mult(result);
            printf("O resultado da multiplicacao eh: %d", result);
    break;
        default:
            printf("Opcao invalida");
    break;

    }
    return 0;
}

//Função soma
int soma(){
    int num1, num2;
    printf("Insira o primeiro numero: \n");
    scanf("%d", &num1);
    printf("Insira o segundo numero: \n");
    scanf("%d", &num2);
    result = num1 + num2;
    return 0;
}

//Função Subtração
int sub(){
    int num1, num2;
    printf("Insira o primeiro numero: \n");
    scanf("%d", &num1);
    printf("Insira o segundo numero: \n");
    scanf("%d", &num2);
    result = num1 - num2;
    return 0;
}

//Função Multiplicação
int mult(){
    int num1, num2;
    printf("Insira o primeiro numero: \n");
    scanf("%d", &num1);
    printf("Insira o segundo numero: \n");
    scanf("%d", &num2);
    result = num1 * num2;
    return 0;
}

//Função Divisão
int div(){
    float num1, num2;
    printf("Insira o primeiro numero: \n");
    scanf("%f", &num1);
    printf("Insira o segundo numero: \n");
    scanf("%f", &num2);
   result = num1 / num2;
    return 0;
}
