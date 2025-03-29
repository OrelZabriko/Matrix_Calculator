#pragma once

//-----include section-----
#include "Operations.h"
#include "CalculationOperations.h"

#include <memory>


//-----class section-----
class Add : public CalculationOperations
{
public:
	//constructor
	using CalculationOperations::CalculationOperations;
	//destructor
	~Add() = default;
	
	//functions
	Matrix calcFunc(std::vector<Matrix> matrices) override;
	const int getNumberOfMatrix() const override;
};