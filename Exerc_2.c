//2) Escreva um programa em C que encontra o maior elemento em um vetor de 10
//valores digitados pelo usuário.

#include<stdio.h>
#include<stdlib.h>

   
   
int main(){
	int v[10], i=0, maior;
		
	
	for(i = 0; i < 10; i++){
		   printf("Digite um  numero:\n");
		   scanf("%d", &v[i]);
		   //printf("num %d : \n", i);
		   printf("\n");
   }
    maior = 0;
	for(i = 0; i < 10; i++){
		if(v[i] > maior){		
		   maior = v[i]; 	
	    }        
    
    } 
	printf(" \nO maior elemento eh % d :  \n\n", maior);  

	system ("pause");
	return 0;
	
}