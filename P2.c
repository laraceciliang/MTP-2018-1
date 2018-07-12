#include <stdio.h>

int main()

{
    printf("Lara Cecilia dos Santos Angelo");
    int Opcao, Decimal, Hexadecimal, Octal, i, j=0, x=1, Contador, DecimalF=0;
    char Binario[20], BinarioC[20];
    printf("\n 1. Binario para Decimal \n 2. Binario para Hexadecimal \n 3. Hexadecimal para Decimal \n 4. Hexadecimal para Binario \n 5. Decimal para Hexadecimal \n 6. Decimal para Binario \n 7. Octal para Decimal \n 8. Decimal para Octal  ");
    scanf("%d" ,&Opcao);
    if(Opcao == 1)
    {
        printf("\nDigite o numero binario: ");
		scanf("%s", Binario);
		getchar();
		while(Binario[i] != '\0')
		{
			i++;
			Contador++;
		}
		j = Contador -1;
		for(i=0; i<Contador; i++, j--)
		{
			BinarioC[j] = Binario[i];
		}
		for(j=1; j<Contador;j++)
		{
			x=x*2;
			if(BinarioC[j] == '1')
				DecimalF = DecimalF + x;
		}
		if(BinarioC[0] == '1')
			DecimalF = DecimalF +1;
		printf("\nNumero decimal: %d ", DecimalF);
		return 0;
    }
    if(Opcao == 2)
    {
        return 0;
    }
    if(Opcao == 3)
    {
        printf("\n Informe um numero em Hexadecimal: ");
        scanf("%x" ,&Hexadecimal);
        getchar();
        printf("\n Numero em Decimal: %d" ,Hexadecimal);
    }
    if(Opcao == 4)
    {
        return 0;
    }
    if(Opcao == 5)
    {
        printf("\n Informe um numero em  Decimal: ");
        scanf("%d" ,&Decimal);
        getchar();
        printf("\n Numero em Hexadecimal: %x" ,Decimal);
    }
    if(Opcao == 6)
    {
        return 0;
    }
    if(Opcao == 7)
    {
        printf("\n Informe um numero em Octal: ");
        scanf("%o" ,&Octal);
        getchar();
        printf("\n Numero em Decimal: %d" ,Octal);
    }
    if(Opcao == 8)
    {
        printf("\n Informe um numero em Decimal: ");
        scanf("%d" ,&Decimal);
        getchar();
        printf("\n Numero em Octal: %o" ,Decimal);
    }
    return 0;
}
