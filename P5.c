//Lara Cecilia dos Santos Angelo
//11721EBI013

#include <stdio.h>

int main()
{	
	printf("Lara Cecilia dos Santos Angelo - 11721EBI013")
	char *Ponteiro;
	char String[256];
	int *Ponteiros;
	int i=0, Contador=0, Opcao=0, Texto[256];
	do
	{   
		do
		{
			printf("\n 1. Codificar \n 2. Decodificar \n 0. Sair ");
			printf("\nDigite a opcao: ");
			scanf("%d", &Opcao);
			getchar();
		}while(Opcao!=0 && Opcao!=1 && Opcao!=2);
			
			if( Opcao == 0 )
			{
				return 0;
				
			}
			else if( Opcao == 1 )
			{
					for(i; i < 256; i++) 
					{
						String[i] = '\0';
			        	printf("\nDigite uma sequencia de caracteres: ");
				        fgets(String, 256, stdin);
					}
				
				for(String[Contador]=0; String[Contador] != '\0'; Contador++);
			
				Ponteiros = (int*)String;
				printf("\nFrase codificada: %s \n" ,String);
			
			
				for(i = 0; i < Contador; i++)
				{
					if(*(Ponteiros + i) != 0 ) 
					printf("%i ", *(Ponteiros + i)); 
				} 
				return 0;
			}			
			else if( Opcao == 2 )
			{
				printf("\n Informe a sequencia, pressione 0, e em seguida pressione enter ");
				Ponteiro = (char*)Texto;
				i = 0; Contador = 0;
				printf("Digite uma sequencia de numeros:");
				do
				{
					scanf("%d", &Contador);
	 				getchar();
					Texto[i] = Contador;
					i++;
				}while(Contador != 0);
				
				Ponteiro = (char*)&Texto;
				printf("\nCaracteres decodificados: \n");
				
				for(i = 0; i < sizeof(Texto) && *(Ponteiro+i) != 0; i++)
				{
					printf("%c", *(Ponteiro+i));
				}
				return 0;
			}
	}while(Opcao != 0);
	return 0;
}
