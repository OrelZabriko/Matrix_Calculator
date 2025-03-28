#pragma once

//-----include section-----
#include "Operations.h"


//-----class section-----
class Sub : public Operations
{
public:
	//constructor
	using Operations::Operations;
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