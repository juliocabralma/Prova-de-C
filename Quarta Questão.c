#include <stdio.h>
#include <stdlib.h>


int main (){
    char nome[40];
    float salario, percentual, diferencaSalarial, novoSalario;
    int codigo;

    printf ("Insira o nome do Funcionario: ");
    fgets(nome, 40, stdin);
    printf("\n");

    printf ("Insira o salario do Funcionario: ");
    scanf ("%f", &salario);
    printf("\n");

    printf("\n");
    printf ("Cargos Disponiveis para o Funcionario: ");
    printf("\n");
    printf ("101 - Gerente\n");
    printf ("102 - Engenheiro\n");
    printf ("103 - Tecnico\n");
    printf("\n");
    printf ("Insira o Codigo do Funcionario: ");
    scanf("%d", &codigo);
    printf("\n");

  
   
      if (codigo==101){
        percentual = 0.1*salario;
        novoSalario = salario+percentual;
        diferencaSalarial = novoSalario-salario;
      }
    
      else if (codigo==102){
        percentual = 0.2*salario;
        novoSalario = salario+percentual;
        diferencaSalarial = novoSalario-salario;
      }
    
      else if (codigo==103){
        percentual = 0.3*salario;
        novoSalario = salario+percentual;
        diferencaSalarial = novoSalario-salario;
      }
      
      else{
      percentual = 0.4*salario;
      novoSalario = salario+percentual;  
      diferencaSalarial = novoSalario-salario;
    }

    printf("\n");
    printf("Nome do Funcionario: %s \n", nome);
    printf("Salario Antigo do Funcionario: %f \n", salario);
    printf("Novo Salario do Funcionario: %f \n", novoSalario);
    printf("Diferença Salarial do Funcionario eh: %f \n", diferencaSalarial);
    
}
