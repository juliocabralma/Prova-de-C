#include <stdio.h>
#include <stdlib.h>

int main (){
    int codigo;
    float precoProduto;
    

    printf("\n");
    printf ("Insira o preco do Produto: ");
    scanf ("%f", &precoProduto); 
    printf("\n");
    printf("\n");
    printf ("Insira o codigo Produto: ");
    scanf ("%d", &codigo); 
    printf("\n");

  
    switch(codigo){
      case 1 :
       printf("\n");
       printf("Codigo de Origem     Procedencia     Preco do Produto\n");
       printf("%d                   Sul            %f", codigo, precoProduto);
      break;
    
      case 2 :
       printf("\n");
       printf("Codigo de Origem     Procedencia     Preco do Produto\n");
       printf("%d                   Norte            %f", codigo, precoProduto);
      break;
    
      case 3 :
       printf("\n");
       printf("Codigo de Origem     Procedencia     Preco do Produto\n");
       printf("%d                   Leste            %f", codigo, precoProduto);
      break;

      case 4 :
      printf("\n");
       printf("Codigo de Origem     Procedencia     Preco do Produto\n");
       printf("%d                   Oeste            %f", codigo, precoProduto);
      break;

      case 5:
      case 6:
       printf("\n");
       printf("Codigo de Origem     Procedencia     Preco do Produto\n");
       printf("%d                   Nordeste            %f", codigo, precoProduto);
      break;

      case 7: 
      case 8:  
      case 9:
       printf("\n");
       printf("Codigo de Origem     Procedencia     Preco do Produto\n");
       printf("%d                   Sudeste            %f", codigo, precoProduto);
      break;

      case 10: 
      case 11: 
      case 12: 
      case 13: 
      case 14: 
      case 15: 
      case 16: 
      case 17: 
      case 18: 
      case 19: 
      case 20:
     printf("\n");
       printf("Codigo de Origem     Procedencia     Preco do Produto\n");
       printf("%d                   Centro-Oeste            %f", codigo, precoProduto);
      break;

      case 21: 
      case 22: 
      case 23: 
      case 24: 
      case 25: 
      case 26: 
      case 27: 
      case 28: 
      case 29: 
      case 30: 
     printf("\n");
       printf("Codigo de Origem     Procedencia     Preco do Produto\n");
       printf("%d                   Nordeste            %f", codigo, precoProduto);
      break;
      
      default :
      printf ("Codigo Invalido!\n");
    }
}
