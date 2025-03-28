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
	Add(std::string funcName,
		std::shared_ptr<Operations> function1,
		std::shared_ptr<Operations> function2);
	//destructor
	~Add() = default;
	
	//functions
	Matrix calcFunc(std::vector<Matrix> matrices) override;
	const int getNumberOfMatrix() const override;

private:
	std::shared_ptr<Operations> m_addFunc1;
	std::shared_ptr<Operations> m_addFunc2;
};