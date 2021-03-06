#include <stdio.h>
#include <stdlib.h>  // lib for atof
#include <string.h>  // for atof too


int main(int argc, char* argv[])
{
	double tempr;
	tempr = atof(argv[1]); // char to double
	if(argc == 2) // input without scale
	{
		printf("%s", argv[1]);
		printf(" C:\n");
		
		printf("%.2f", tempr+273.15);
		printf(" K\n");
		printf("%.2f", tempr*9/5 + 32.0);
		printf(" F\n\n");


		printf("%s", argv[1]);
		printf(" F:\n");
		
		printf("%.2f", (tempr - 32.0)*5/9 + 273.15);
		printf(" K\n");
		printf("%.2f", (tempr - 32.0)*5/9);
		printf(" C\n\n");

		printf("%s", argv[1]);
		printf(" K:\n");
		
		printf("%.2f", tempr-273.15);
		printf(" C\n");
		printf("%.2f", (tempr - 273.15)*9/5 + 32.0);
		printf(" F\n");
	}

	if(argc == 3) // input with scale
	{
		char name = *argv[2];
		if(name == 'C')
		{
			printf("%.2f", tempr+273.15);
			printf(" K\n");
			printf("%.2f", tempr*9/5 + 32.0);
			printf(" F\n");
		}
		else if(name == 'F')
		{
			printf("%.2f", (tempr - 32.0)*5/9 + 273.15);
			printf(" K\n");
			printf("%.2f", (tempr - 32.0)*5/9);
			printf(" C\n");
		}
		else if(name == 'K')
		{
			printf("%.2f", tempr-273.15);
			printf(" C\n");
			printf("%.2f", (tempr - 273.15)*9/5 + 32.0);
			printf(" F\n");
		}
	}
	return 0;
}

