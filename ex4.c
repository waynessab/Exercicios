#include <stdio.h>
main(){
      char palavra[30];
      int i=0,n=0;
      printf("Insira uma palavra:");
      scanf("%s", palavra);
      printf("Somente as consoantes: \n");
      
	  for (i=0; palavra[i] != '\0'; i++){  
          if(palavra[i]!='a'){
          	 printf("%s",palavra[i]);
           }  else if(palavra[i]!='A'){
          	 printf("%s",palavra[i]);
           }  
           else if(palavra[i]!='e'){
          	 printf("%s",palavra[i]);
           }  else if(palavra[i]!='E'){
          	 printf("%s",palavra[i]);
           }  else if(palavra[i]!='i'){
          	 printf("%s",palavra[i]);
           }  else if(palavra[i]!='I'){
          	 printf("%s",palavra[i]);
           }  else if(palavra[i]!='o'){
          	 printf("%s",palavra[i]);
           }  else if(palavra[i]!='O'){
          	 printf("%s",palavra[i]);
           }  else if(palavra[i]!='u'){
          	 printf("%s",palavra[i]);
           }  else if(palavra[i]!='U'){
          	 printf("%s",palavra[i]);
           }  
    }
}

