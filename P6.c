#include <stdio.h>

int Somar(int Vetor[20], int Auxiliar)
{
	if(Auxiliar == 0)
		return 0;
	else 
	{
		int Somatorio = 0;

		Somatorio = Somar(Vetor, Auxiliar - 1);
		
		if(Vetor[Auxiliar - 1] > 0)
		{
			Somatorio =+ Vetor[Auxiliar - 1];
		}
		
		return Somatorio;
	}
}


int main ()
{
	int Vetor[20], Media, Soma, Numeros, i;
	float Termos=0;
	printf("\n Informe a quantidade de numeros:  ");
	scanf("%d", &Numeros);
	for(i = 0; i < Numeros; i++)
	{
		printf("\n Vetor na posicao %d: ", i+1);
		scanf("%d", &Vetor[i]);
		getchar();
	}
	Soma = (Somar(Vetor, i));
	Media = Soma / Numeros;
	printf("\nMedia: %.1f", Media);
	return 0;
}
