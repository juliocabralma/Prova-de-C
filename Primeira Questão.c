#include <stdio.h>
#include <stdlib.h>

int main (){
    char operacao;
    float num1, num2, resultado;

    printf("\n");
    printf ("Insira o numero 1: ");
    scanf ("%f", &num1); 
    printf("\n");
    printf ("Insira o numero 2: ");
    scanf ("%f", &num2); 
    printf("\n");
    printf("\n");

    printf ("------- Menu de Operacoes -------\n");
    printf ("Digite + para Adicao.\n");
    printf ("Digite - para Subtracao.\n");
    printf ("Digite * para Multiplicao.\n");
    printf ("Digite / para Divisao.\n");
    printf("\n");
    printf ("Insira a Opcao desejada: ");
    scanf (" %c", &operacao); 
  
    switch(operacao){
      case '+' :
      resultado = num1+num2;
      break;
    
      case '-' :
      resultado = num1-num2;
      break;
    
      case '*' :
      resultado = num1*num2;
      break;
    
      case '/' :
      resultado = num1/num2;
      break;

      default :
      printf ("Operação invalida!\n");
    }

    printf("Resultado: %f %c %f = %.2f", num1, operacao, num2, resultado);
    
}
