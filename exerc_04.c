exerc_04

//Escreva um programa em C que ordena um vetor de 40 elementos digitados pelo
//usuário.

#include<stdio.h>
#include<stdlib.h>
   
   
int main(){
    
    int v[40], i, aux = 0, segue = 0, tam=40;
    for (i = 0; i< 40; i++){
    	v[i]= rand()%40;
	}

    do{
	
        segue = 0;
    	for(i = 0; i < tam-1; i++){
			if(v[i]>v[i + 1]){
		    	aux = v[i];
			    v[i] = v [i + 1];
			    v[i+1]  =aux;
			    segue = i;
			}
		}
		tam --;
		
    } while(segue !=0);

      for(i=0; i<40;i++) {
	 
		printf(" \n Vetor em ordem %i:  \n\n", v[i]); 
}
   

	system ("pause");
	return 0;
}
