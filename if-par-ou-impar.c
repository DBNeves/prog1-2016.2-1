#include <stdio.h>
/*
Fa�a um programa em C para ler um n�mero inteiro e dizer se este � par ou �mpar.
*/
int main()

	{
	
	int numero; 
	
	printf("Diga um numero\n"); 
	
	scanf("%d", &numero); // decimal inteiro= "%d"	 
	
	if( (numero%2)==0 )
	
	{
	printf("Numero Par!!")	;
	}
	else
	{
	printf("Numero Impar");
	}
	system("pause");
	
	return 0;	

	}
