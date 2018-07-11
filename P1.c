//Lara Cecília dos Santos Ângelo
//11721EBI013

#include <stdio.h>

int main()

{
    printf(" \n Lara Cecilia dos Santos Angelo - 11721EBI013" );
    int estado = 0, x = 0;
    char binario[256];
    printf("\n\n  Insira um numero em binario: ");
    scanf("%s", binario);
    getchar();
      
	while(binario[x] != '\0')
    {
        if(binario[x] == '0')
        {
            if(estado == 0);
            else if(estado == 1) 
			{
				estado = 2;
			}
            else if(estado == 2)
			{
				estado = 1;
			} 
            x++;
        }
        else if(binario[x] == '1')
        {
            if(estado == 0)
			{
				estado = 1;
			}
            else if(estado == 1)
			{
				estado = 0;
			} 
            x++;
        }
        else
        {
            printf("\nNumero inserido nao e um numero binario");
        }
    }
    
    if(estado == 0) 
	{
		printf("\n O numero inserido e multiplo de 3");
	}
    else if(estado != 0)
	{
	    printf("\n %d" ,estado);
	    printf("\n O numero inserido nao e multiplo de 3");
    }
    return 0;
}
