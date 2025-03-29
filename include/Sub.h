#pragma once

//-----include section-----
#include "Operations.h"
#include "CalculationOperations.h"


//-----class section-----
class Sub : public CalculationOperations
{
public:
	//constructor
	using CalculationOperations::CalculationOperations;
	//destructor
	~Sub() = default;

	//functions
	Matrix calcFunc(std::vector<Matrix> matrices) override;
	const int getNumberOfMatrix() const override;
};