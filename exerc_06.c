exerc_06
//Escreva um programa que preenche um vetor de 10 posições com valores digitados
//pelo usuário. Declare um outro vetor que deverá conter esses mesmos valores, só que
//sem repetições.

#include<stdio.h>
#include<stdlib.h>

int main (){
	
	int v[10], vet[10], i ;
			
	    for(i = 0; i < 10; i++){
		   printf("Digite um  numero:\n");
		   scanf("%d", &v[i]);
		   printf("\n");
	}
		 for(i = 0; i < 10; i++){
		    if( v[i] != v[i+1]){
		      vet[i] = v[i];	
		      printf("%d \n", vet[i]);
	}
}

	system ("pause");
	return 0;
	
}