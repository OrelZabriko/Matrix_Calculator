#pragma once

//-----include section-----
#include "Matrix.h"
#include "Operations.h"
#include "Id.h"
#include "Transpose.h"
#include "Scalar.h"
#include "Add.h"
#include "Sub.h"
#include "Composite.h"
#include "Help.h"

#include <iostream>
#include <vector>
#include <memory>


//-----class section-----
class MatrixCalculator
{
public:
	//constructor
	MatrixCalculator();
	//destructor
	~MatrixCalculator() = default;

	//functions
	void calculate();
	void commandManager(std::string command);
	
private:
	bool exitProg = false; //the condition of the main loop
	std::vector<std::shared_ptr<Operations>> m_functions;
	std::vector<int> m_numOfMatrices;

	//functions
	void displayMenu(std::vector<std::shared_ptr<Operations>> functions);
	void printResults(const Matrix result,
					  const std::vector<Matrix> matrices,
					  std::string functionName,
					  const int numOfMatrices);
	void exitProgram();
};