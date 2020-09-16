#include <stdio.h>
main(){
      char string[30],inverso[30];
      int i, n;
      printf("Digite um nome: ");
      scanf("%s", string);
      n = 0;
      for (i=0; string[i] != '\0'; i++){  
           n++;}n--;
      for (i=0; string[i] != '\0'; n--){
          inverso[n] = string[i];
          i++;}
      inverso[i] = '\0';
      printf("Nome: %s\n", string);
      printf("Nome inverso: %s", inverso);
}
