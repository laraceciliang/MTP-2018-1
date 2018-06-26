#include <stdio.h>

int FuncaodeAckermann(int m, int n)
{	
	if(m == 0)
	{
		return n + 1;	
	} 
	else if(m > 0 && n == 0)
	{
	    FuncaodeAckermann(m - 1, 1);
	}
	else if(m > 0 && n > 0)
	{
		FuncaodeAckermann(m - 1, FuncaodeAckermann(m, n - 1));	
	}
}

int main()
{	
	int m, n;
	printf("\n Insira os valores de m e n (m, n): ");
	scanf("%d %d", &m, &n);
	printf("\nResultado = %d ", FuncaodeAckermann(m, n));
	return 0;
}
