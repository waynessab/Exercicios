/*Faça um programa que, dada uma string, diga se ela e
um palíndromo ou não. Lembrando que um palíndromo
é uma palavra que tenha a propriedade de poder ser lida
tanto da direita para a esquerda como da esquerda para a
direita*/
#include<stdio.h>

int main() {
 int i,n, valor = 0;
 char palavra[15], inversa[15];

 printf("\nDigite uma palavra: ");
 scanf("%s", palavra);

 for (i=0; palavra[i] != '\0'; n--){
          inversa[n] = palavra[i];
          i++;}
      inversa[i] = '\0';

 if(palavra==inversa){
   valor=0;
   }else {
    valor = 1;
	}
    
 if (valor == 0)
   printf("\nA palavra %s é palíndroma\n", palavra);
 else
   printf("\nA palavra %s não é palíndroma\n", palavra);
}
