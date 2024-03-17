#include<stdio.h>
void main()
{	float i,f;
	printf("|---------------------|\n");
    	printf("| Celsius | Fahrenheit|\n");
	 printf("|---------------------|\n");
	for(i=0;i<101;i++)
	{	f=(i*9/5)+32;
		printf("|%-6.2f|   |%-9.5f|\n",i,f);
	}
	 printf("|---------------------|\n");
}
