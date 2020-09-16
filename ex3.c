//3) Fazer um algoritmo que seja lido uma palavra e
//imprima a quantidade de vogais que compõe a palavra.
#include <stdio.h>
main(){
      char palavra[30];
      int i,n=0;
      printf("Insira uma palavra:");
      scanf("%s", palavra);
      for (i=0; palavra[i] != '\0'; i++){  
          if(palavra[i]=='a'){
          	n++;
		  }
		  else if(palavra[i]=='e'){
          	n++;
		  }
		  else if(palavra[i]=='i'){
          	n++;
		  }
		 else if(palavra[i]=='o'){
          	n++;
		  }
		  else if(palavra[i]=='u'){
          	n++;
		  }
	}
	printf("Quantidade de vogais: %d", n);
}
