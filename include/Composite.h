#pragma once

//-----include section-----
#include "Operations.h"
#include "CalculationOperations.h"


//-----class section-----
class Composite : public CalculationOperations
{
public:
	//constructor
	using CalculationOperations::CalculationOperations;
	//destructor
	~Composite() = default;
	
	//functions
	Matrix calcFunc(std::vector<Matrix> matrices) override;
	const int getNumberOfMatrix() const override;
};