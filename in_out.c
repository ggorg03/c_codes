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
printf("Eu sou um %c e meu tipo character\n", a);
printf("Eu sou um %i e meu tipo interiro\n", b);
printf("Eu sou um %f e meu tipo float\n", c);
printf("Eu sou um %lf e meu tipo double\n", d);
printf("Eu sou um %e e meu tipo notação cientifica\n", d);
printf("Eu sou um %E e meu tipo notação cientifica\n", d);

}
