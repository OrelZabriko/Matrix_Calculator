//-----include section-----
#include "MatrixCalculator.h"


//-----functions section------
//-----------------------------------------------------------------------------
//In the constructor we want to put in the vector of the functions immediately 
//the 2 functions 'id' and 'transpose' as defined in the exercise 
MatrixCalculator::MatrixCalculator()
{
	m_functions.push_back(std::make_shared<Id>(ID_FUNC_NAME));
	m_functions.push_back(std::make_shared<Transpose>(TRANSPOSE_FUNC_NAME));
}


//-----------------------------------------------------------------------------
//This function is the main function of the program. It responsible for all 
//the calculations of the program (of the matrices).
void MatrixCalculator::calculate()
{
	std::string command; //this string hold the command that the user enter.

	while (!exitProg)
	{
		displayMenu(m_functions);

		std::cout << "\nEnter command ('help' for the list of available commands): ";
		std::cin >> command;
		std::cout << std::endl;

		commandManager(command);
	}	
}


//-----------------------------------------------------------------------------
void MatrixCalculator::commandManager(std::string command)
{
	if (command == EVALUATE_FUNC_NAME)
	{
		int numOfFunc;
		std::cin >> numOfFunc;

		int sizeOfMatrix;
		std::cin >> sizeOfMatrix;
		std::vector<Matrix> matrices;
		

		int numOfMatrices = m_functions[numOfFunc]->getNumberOfMatrix();

		if (numOfMatrices > 1)
			std::cout << "Please enter " << numOfMatrices << " matrices:" << std::endl;

		for (int matrixNum = 0; matrixNum < numOfMatrices; matrixNum++)
		{
			Matrix matrix(sizeOfMatrix);

			std::cout << "Enter a " << sizeOfMatrix << "x" << sizeOfMatrix << " matrix:" << std::endl;	
			std::cin >> matrix;

			matrices.push_back(matrix);
		}
		std::cout << std::endl;

		Matrix result = m_functions[numOfFunc]->calcFunc(matrices);
		
		printResults(result, matrices, m_functions[numOfFunc]->getFunctionName(), numOfMatrices);
	}
	else if (command == SCALAR_FUNC_NAME)
	{
		int val;
		std::cin >> val;

		m_functions.push_back(std::make_shared<Scalar>(SCALAR_FUNC_NAME + " " + std::to_string(val), val));
	}
	else if (command == ADD_FUNC_NAME)
	{
		int func1, func2;
		std::cin >> func1 >> func2;

		std::string name = m_functions[func1]->getFunctionName() + " + " + m_functions[func2]->getFunctionName();

		m_functions.push_back(std::make_shared<Add>(name, m_functions[func1], m_functions[func2]));
	}
	else if (command == SUB_FUNC_NAME)
	{
		/**/ 
	}
	else if (command == COMPOSITE_FUNC_NAME)
	{
		/**/
	}
	else if (command == DELETE_FUNC_NAME)
	{
		int numToDelete;
		std::cin >> numToDelete;

		m_functions.erase(m_functions.begin() + numToDelete);
	}
	else if (command == HELP_FUNC_NAME)
	{
		//need to implement this function and its class
	}
	else if (command == EXIT_FUNC_NAME)
	{
		exitProgram();
	}
	else
	{
		std::cout << "Invalid command. Please try again." << std::endl;
	}
}


//-----------------------------------------------------------------------------
void MatrixCalculator::displayMenu(std::vector<std::shared_ptr<Operations>> functions)
{
	std::cout << "List of available matrix operations: " << std::endl;

	for (int function = 0; function < functions.size(); function++)
	{
		std::cout << function << ". " << 
			functions[function]->getFunctionName() << std::endl;		
	}
}


//-----------------------------------------------------------------------------
void MatrixCalculator::printResults(const Matrix result,
									const std::vector<Matrix> matrices,
									std::string functionName,
									const int numOfMatrices)
{
	if(functionName == ID_FUNC_NAME || functionName == TRANSPOSE_FUNC_NAME)
	{
		std::cout << functionName << " (\n" << matrices[0] 
				  << ") =\n" << result << std::endl;
	}
	else
	{
		std::cout << "(" << functionName << ")";
		for (int matrixNum = 0; matrixNum < numOfMatrices; matrixNum++)
		{
			std::cout << "(\n" << matrices[matrixNum] << ")";
		}
		std::cout << " =\n" << result << std::endl;
	}
}


//-----------------------------------------------------------------------------
//This function is responsible for exiting the program more elegantly.
void MatrixCalculator::exitProgram()
{
	std::cout << "\nGoodbye!" << std::endl;
	exitProg = true;
}