#include <stdio.h> 
#include <conio.h>
using namespace std;
main()
{
int dec,i,q[80],r[80]; //declara��o das vari�veis necess�rias
i=0;                   //contador de elementos da array do loop while
printf("Digite o numero decimal que serah passado para binario:\n");
scanf("%d", &dec);
printf("%d em binarios: ",dec);
  /*Algoritmo para o c�lculo */
  while (dec != 1){     // enquanto o quociente for diferente de 1, o programa continuar� calculando
   q[i]= dec / 2;  //array que calcula e armazena os quocientes
   r[i] = dec % 2; //array que calcula e armazena os restos
   dec=q[i];       //atribuindo novo valor para q[i], pra que seja poss�vel a continua��o do c�lculo
   i++;
   }

  i--;while (i>=0){  
     if (q[i] == 1) printf("1%d",r[i]);
          else printf("%d",r[i]);  
   i--;
   }
printf("\n");
return(0);
}
