#include <stdio.h>
/*
Fa�a um programa em C para ler uma idade e dizer se esta pessoa pode dirigir ou n�o. Assumindo que s� maiores de idade podem dirigir.
*/
int main()

	{
	
	int numero; 
	
	printf("\nQual sua idade?\n"); 	
	scanf("%d", &numero); // decimal inteiro= "%d"	 
	
	if((numero>17))
	
	{
	printf("Pode dirigir");
	}
	
	else
	
	{
	printf("Nao pode dirigir");
	}
		
	return 0;	

	}
