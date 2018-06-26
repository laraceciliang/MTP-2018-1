#include <stdio.h>

int Exponencial(int Expoente)
{
	int Potencia = 10;
	if(Expoente >= 2)
	{
		for(Expoente; Expoente > 1; Expoente--)
		{
			Potencia *= 10;
		}
	}
	else if(Expoente == 0) Potencia = 1;
	
	return Potencia;
}

int main()
{
	int i = 0, j = 0, k = 0, NumeroI = 0, NumeroInteiro = 0, Expoente = 0, Contador[256];
    char Numero[256];
	printf("\nInforme uma sequencia de caracteres com numeros: ");
	scanf("%s", Numero);
	getchar();
	
	printf("\nNumero inteiro: ");
	
	for(k = 0; Numero[k] != '\0'; k++)
	{
		if(Numero[k] - 48 >= 0 && Numero[k] - 48 < 10)
		{
			Contador[j] = Numero[k];
			j++;
		}
	}
	
	while(i < j)
	{
		Expoente = j - i;
		NumeroI = Contador[i] - 48;
		NumeroInteiro += NumeroI * Exponencial(Expoente-1);
		i++;
	}
	
	printf("%d", NumeroInteiro);
		
	return 0;
}
