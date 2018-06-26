#include <stdio.h>

void ConversordeNumeros(int NumeroOriginal, int NumeroConvertido)
{
	int Numero = 0, NumeroConv = 0, i = 0, j = 0, c = 1;
	int NumeroConvertido[100];
	char NumeroBinario[100];
	
	switch(NumeroOriginal)
	{
		case 2:
			printf("\nDigite o numero em binario: ");
 			scanf("%s", NumeroBinario);
 			break;
 		case 8:
 			printf("\nDigite o numero em octal: ");
 			scanf("%o", &Numero);
 			break;
 		case 10:
 			printf("\nDigite o numero em decimal: ");
 			scanf("%i", &Numero);
 			break;
 		case 16:
 			printf("\nDigite o numero em hexadecimal: ");
 			scanf("%x", &Numero);
 			break;
	}
	
	if( NumeroOriginal == 2 && NumeroConvertido == 10)
	{
		for(i = 0; NumeroBinario[i]!='\0'; i++);
		{
			i--;
		}
		for(int k = i; k >= 0; k--)
		{
			if(NumeroBinario[k]=='0')
			{
				NumeroConvertido[k] = 0;
			} 
			else if(NumeroBinario[k] == '1')
			{
				NumeroConvertido[k] = 1;
			}
		}
		j = i;
		while(j >= 0)
		{
			while(c <= i-j)
			{
				NumeroConvertido[j] *= 2;
				c++;
			}
			NumeroConv += NumeroConvertido[j];
			c = 1;
			j--;
		}
		printf("\nNumero conv: %i", NumeroConv);
	}
	else if(NumeroOriginal == 2 && NumeroConvertido == 16)
	{
		for(i = 0; NumeroBinario[i] != '\0'; i++);
		{
			i--;
		}
		for(int k = i; k >= 0; k--)
		{
			if(NumeroBinario[k] == '0') NumeroConvertido[k] = 0;
			else if(NumeroBinario[k] == '1') NumeroConvertido[k] = 1;
		}
		j = i;
		while(j >= 0)
		{
			while(c <= i-j)
			{
				NumeroConvertido[j] *= 2;
				c++;
			}
			NumeroConv += NumeroConvertido[j];
			c = 1;
			j--;
		}
		printf("\nNumero convertido: %x", NumeroConv);
	}
	else if(NumeroOriginal == 16 && NumeroConvertido == 10)
	{
		printf("\nNumero convertido: %d", Numero);
	}
	else if(NumeroOriginal == 16 && NumeroConvertido == 2) 
	{
		for(i = 0; Numero >= 1; i++)
		{ 
			NumeroConvertido[i] = num % NumeroConvertido;
			num /= NumeroConvertido;
		}
		
		printf("\nNumero convertido: ");
		
		for(i -= 1; i >= 0; i--)
		{
			printf("%i", NumeroConvertido[i]);
		}
		
	}
	else if(NumeroOriginal == 10 && NumeroConvertido == 2)
	{
		for(i = 0; Numero >= 1; i++)
		{ 
			NumeroConvertido[i] = num % NumeroConvertido;
			Numero /= NumeroConvertido;
		}
		
		printf("\nNumero convertido: ");
		
		for(i -= 1; i >= 0; i--)
		{
			printf("%i", NumeroConvertido[i]);
		}
	}
	else if(NumeroOriginal == 10 && NumeroConvertido == 16) 
	{
		for(i = 0; Numero >= 1; i++)
		{ 
			NumeroConvertido[i] = Numero % NumeroConvertido;
			Numero /= NumeroConvertido;
		}
		
		for(int j = i; j >= 0; j--)
		{
			if(NumeroConvertido[j] == 10) NumeroConvertido[j] = 'a';
			else if(NumeroConvertido[j] == 10) NumeroConvertido[j] = 'b';
			else if(NumeroConvertido[j] == 10) NumeroConvertido[j] = 'c';
			else if(NumeroConvertido[j] == 10) NumeroConvertido[j] = 'd';
			else if(NumeroConvertido[j] == 10) NumeroConvertido[j] = 'e';
			else if(NumeroConvertido[j] == 10) NumeroConvertido[j] = 'f';
		}
		
		printf("\nNumero convertido: ");
		
		for(i -= 1; i >= 0; i--)
		{
			printf(" %i", NumeroConvertido[i]);
		}
		printf("\nNumero convertido: %x", Numero);
	}
	else if(NumeroOriginal == 8 && NumeroConvertido == 10) 
	{
		printf("\nNumero convertido: %d", Numero);
	}
	else if(NumeroOriginal == 10 && NumeroConvertido == 8)
	{
		for(i = 0; Numero >= 1; i++)
		{ 
			NumeroConvertido[i] = num % NumeroConvertido;
			Numero /= NumeroConvertido;
		}
			printf("\nNumero convertido: ");
		
			for(i -= 1; i >= 0; i--)
			{
				printf("%i", NumeroConvertido[i]);
			}
	}
}

int main()
{
    int opcao = 0;
    while(1)
	{
	
 		printf("\n 1. Binario para Decimal \n 2. Binario para Hexadecimal \n 3. Hexadecimal para Decimal \n 4. Hexadecimal para Binario \n 5. Decimal para Hexadecimal \n 6. Decimal para Binario \n  7. Octal para Decimal \n  8. Decimal para Octal  ");
 		printf("\nDigite a opcao desejada: ");
		scanf("%i", &opcao);
				
		if( opcao == 1 )
		{
			ConversordeNumeros(2, 10);
		}
		else if( opcao == 2 )
		{
			ConversordeNumeros(2, 16);
		}
		else if( opcao == 3 )
		{
			ConversordeNumeros(16, 10);
		}
		else if( opcao == 4 )
		{
			ConversordeNumeros(16, 2);
		}
		else if( opcao == 5 )
		{
			ConversordeNumeros(10, 2);
		}
		else if( opcao == 6 )
		{
			ConversordeNumeros(10, 16);
		}
		else if( opcao == 7 )
		{
			ConversordeNumeros(8, 10);
		}	
		else if( opcao == 8 )
		{
			ConversordeNumeros(10, 8);
		}
	}
 
	return 0;   
}
