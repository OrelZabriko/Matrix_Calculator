//-----include section-----
#include "MatrixCalculator.h"


//-----functions section------
//-----------------------------------------------------------------------------
//This function is the main function of the program. It responsible for all 
//the calculations of the program (of the matrices).
void MatrixCalculator::calculate()
{
	std::vector<std::shared_ptr<Operations>> functions;

	while (!exitProg)
	{
		std::vector<Matrix> matrices;
		displayMenu();
		
	}	
}


//-----------------------------------------------------------------------------
void MatrixCalculator::displayMenu()
{
	std::cout << "List of available matrix operations: " << std::endl;

	for (int function = 0; function < 5; function++)
	{
		std::cout << function + 1 << ". " << functions[function] << std::endl;		
	}
}


//-----------------------------------------------------------------------------
//This function is responsible for exiting the program.
void MatrixCalculator::exitProgram()
{
	std::cout << "Goodbye!" << std::endl;
	exitProg = true;
}