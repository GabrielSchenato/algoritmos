#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

void Binario_para_decimal()
{
int dec=0,num,d=1;

printf("Digite o numero binario: ");
scanf("%d",&num);
do
{
dec = dec+(num%10)*d;
d = d*2;
num = num/10;
}
while(num!=0);
printf(" O numero em decimal e %d",dec);
getch();
}

void Decimal_para_binario()
{
int a;
char b[8];

printf("Digite um numero em decimal:");
scanf("%d",&a);
itoa(a,b,2);
printf("O numero %d em binario e: %s",a,b);
getch();
}


void Menu()
{
int opcao = 0;
printf(" 1 - Binario para decimal\n");
printf(" 2 - Decimal para binario\n");
scanf("%d", &opcao);

if (opcao == 1)
{
   Binario_para_decimal();
}
else if (opcao == 2)
{
  Decimal_para_binario();
}
else if (opcao != 1 && opcao != 2)
{
    printf("Opcao invalida. Tente novamente.");
Menu();
}
}

int main()

{
   Menu();
   return 0;
}
