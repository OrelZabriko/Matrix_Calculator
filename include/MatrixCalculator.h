#pragma once

//-----include section-----
#include "Matrix.h"
#include "Operations.h"
#include "Id.h"
#include "Transpose.h"

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
	

private:
	bool exitProg = false; //the condition of the main loop
	std::vector<std::shared_ptr<Operations>> m_functions;

	//functions
	void displayMenu(std::vector<std::shared_ptr<Operations>> functions);
	void exitProgram();
};