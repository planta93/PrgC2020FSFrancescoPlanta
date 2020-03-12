#include <stdio.h>
#include <stdlib.h>


typedef enum{
	INVALID = 0,
	PRINTCODERNAME = 1,
	CALCONEPLUS1= 2,
	EXIT = 3
} MenuSelection;


MenuSelection PrintUserMenu( void );

int main( int argc, char *argv[] )
{
	int runMenuPrompt = 1; 
	MenuSelection menuselection = INVALID;

	while(runMenuPrompt)
	{
		menuselection = PrintUserMenu();

		switch(menuselection)
		{

			case PRINTCODERNAME:
				printf("FP!\n");
				break;
			
			case CALCONEPLUS1:
				printf("1+1=2\n");
				break;

			case EXIT:
				printf("You entered 3\n");
				runMenuPrompt = 0;
				break;

			default:
				printf("Invalide Menu Selection\n");
				break;
		}	
	} // while(runMenuPrompt)
	return EXIT_SUCCESS;
}




/*	prints the user menu and returns the selected item
 * 	Inputs: None.
 * 	Outputs: int selectedMenuItem
 *  Error behavior: returns zero for all invalid menu item selections
 */	
MenuSelection PrintUserMenu( void ) {
	int selectedMenuItem = 0;
	printf("\n------------------------------------\n");
	printf("* * * * Welcome to CoolCode! * * * *\n");
	printf("------------------------------------\n");
	printf("Select from the following options:\n");
	printf("1: Print Coder Name\n");
	printf("2: Calculate 1+1: \n");
	printf("3: Exit");
	printf("-> ");
	scanf("%d", &selectedMenuItem );

	if(		selectedMenuItem != PRINTCODERNAME
		&& 	selectedMenuItem != CALCONEPLUS1
		&& 	selectedMenuItem != EXIT )
	{
		selectedMenuItem = INVALID;
	}
	return selectedMenuItem;
}	




