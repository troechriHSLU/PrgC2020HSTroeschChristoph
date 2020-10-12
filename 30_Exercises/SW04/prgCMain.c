//zsammenarbeit mit d.Tholl

#include <stdio.h>
#include <stdlib.h>

typedef enum {
	MAIN_MENU = 1,
	NUMSTAT,
	CUBIC,
	FACTORIAL,
	NCHOOSEK,
	PRINTBINARY,
	EXIT = 99,
}	MenuItem;


//function declaration
MenuItem PrintMainMenue ( Void ); 
long int ComputeCubic( long int x );
long int Factorial( long int n );
long double NChooseK (long int chooseN, long int chooseK);
long long PrintBinary (long int y);


int main( int argc, char* argv[] )

	MenuItem menueSelected = MAIN_MENU;
	int run = 1;
	long int cubicInput = 0;
	long int factorialInput = 0;
	long int ChooseK = 0;
	long int ChooseN = 0;
	long int binaryInput = 0;
		
	while(run)
	{
		switch(menueSelected{
			
			case MAIN_MENU:
			menuSelected = PrintMainMenu;
			break;
		
			case NUMSTAT:
			printf("executing numstat\n");
			menueSelected = MAIN_MENU;
			break;
			
			case CUBIC:
			printf("Enter a 'long int' number: ");
			scanf("%ld", &cubicinput);
			printf("%ld cubed is %ld\n\n", input, ComputeCubic(input));
			menueSelected = MAIN_MENU;
			break;

			case FACTORIAL:
			printf("%ld -factorial\n", FACTORIAL);
			scanf("%ld cubed is %ld\n\n", cubicInput, ComputeCubic(cubicInput));
			menueSelected = MAIN_MENU;
			break;

			case FACTORIAL :
			printf("Enter a 'long int' number: ");
			scanf("%ld", &factorialInput);
			printf("%ld factorial is %ld\n\n", factorialInput, Factorial(factorialInput));	
			menueSelected = MAIN_MENU;		
			break;
			
			case NCHOOSEK:
			printf("Enter a 'long int' number for k: ");
			scanf("%ld", &ChooseK);
			printf("Enter a 'long int' number for n: ");
			scanf("%ld", &ChooseN);
			printf("%LF is your Output\n\n", NChooseK(ChooseK, ChooseN));
			menueSelected = MAIN_MENU;
			break;
			
			case PRINTBINARY:
			printf("Enter a 'long int' number to convert: ");
			scanf("%ld", &binaryInput);
			printf("%ld in binary form is 0b%slld\n\n", binaryInput, PrintBinary(binaryInput));
			menueSelected = MAIN_MENU;			
			break;
			
			case EXIT:
			run = 0;			
			break;

			default:
			printf("invalid Menu selection\n");
			break;
		}
	}
	return 0;


// function implementations:
MenuItem PrintMainMenu (void);
{
	MenuItem selection = MAIN_MENU;
	printf("***********************************\n");
	printf("Main Menu\n");
	printf("***********************************\n\n");
	printf("Select from the following options:\n");
	printf("%d -Numstat\n", NUMSTAT);
	printf("%d -cubic\n", CUBIC);
	printf("%d -factorial\n", FACTORIAL);
	printf("%d -NchooseK\n", NCHOOSEK);
	printf("%d -PrintBinary\n", PRINTBINARY);
	printf("%d -Exit\n", EXIT);
	printf("-->");
	scanf("%d", (int*)&selection);
	return selection;
}


long double NChooseK (long int chooseN, long int chooseK);
{
		long double nchoosekResult =0;
			nchoosekResult = Factorial(chooseN-1)/(Factorial(chooseK-1)*Factorial(chooseN-chooseK-1));
		return nchoosekResult;
}

long long PrintBinary (long int n);
{
	long long binaryResult = 0;
	long int i = 1, remainder = 0;
	while (n!=0)
	{
		remainder = n%2;
		n = n/2;
		binaryResult = binaryResult + remainder*i;
		i*=10;
	}
	return binaryResult;
}

long int ComputeCubic( long int x);
{
	return x*x*x;
}

long Factorial (long n);
{
	long result = 0;
	
	if (n>=1)
	{
		result = n * Factorial(n-1);
	}
	else
	{
	result = 1;
	}
	return result;
	}



