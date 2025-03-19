#pragma once

//-----include section-----
#include "Matrix.h"

#include <iostream>
#include <vector>


//-----class section-----
class MatrixCalculator
{
public:
	//constructor
	MatrixCalculator() = default;
	//destructor
	~MatrixCalculator() = default;

	//functions
	void calculate();
	void exitProgram();


private:
	bool exitProg = false; //the condition of the main loop
};