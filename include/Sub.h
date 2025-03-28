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
	Sub(std::string funcName,
		std::shared_ptr<Operations> function1,
		std::shared_ptr<Operations> function2);

	//functions
	Matrix calcFunc(std::vector<Matrix> matrices) override;
	const int getNumberOfMatrix() const override;

private:
	std::shared_ptr<Operations> m_subFunc1;
	std::shared_ptr<Operations> m_subFunc2;
};