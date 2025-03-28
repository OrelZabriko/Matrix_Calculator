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
	Composite(std::string funcName,
			  std::shared_ptr<Operations> function1,
			  std::shared_ptr<Operations> function2);
	
	//functions
	Matrix calcFunc(std::vector<Matrix> matrices) override;
	const int getNumberOfMatrix() const override;

private:
	std::shared_ptr<Operations> m_compFunc1;
	std::shared_ptr<Operations> m_compFunc2;
};