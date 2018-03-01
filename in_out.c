#include<stdio.h>
int main()
{
//Declarando variaveis de varios tipos
char a;
int b;
float c;
double d;

//Aloca as entradas do prompts nas variaveis
scanf("%c", &a);
scanf("%i", &b);
scanf("%f", &c);
scanf("%lf", &d);

//Imprime os valores das variaveis junto a uma mensagem no prompt
printf("Eu sou um %c do tipo character\n", a);
printf("Eu sou um %i do tipo interiro\n", b);
printf("Eu sou um %f do tipo float\n", c);
printf("Eu sou um %lf do tipo double\n", d);

}
