#include <stdio.h>
#include <stdlib.h>

int main (){
    int numDias;
    

    printf("\n");
    printf ("Insira os dias para saber que Mes eh: ");
    scanf ("%d", &numDias); 
    printf("\n");

  
    switch(numDias){
      case 28 :
       printf("\n");
       printf("Numero de dias       Mes\n");
       printf("%d                   02", numDias);
      break;
    
      case 30 :
       printf("\n");
       printf("Numero de dias    Mes\n");
       printf("%d                04, 06, 09, 11", numDias);
      break;
    
      case 31 :
       printf("\n");
       printf("Numero de dias    Mes\n");
       printf("%d                01, 03, 05, 07, 08, 10, 12", numDias);
      break;
    
      default :
      printf ("Quantidade de dias invalido!\n");
    }
}
