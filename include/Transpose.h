#pragma once

//-----include section-----
#include "Operations.h"


//-----class section-----
class Transpose : public Operations
{
public:
	//constructor
	using Operations::Operations;

	//functions
	Matrix calcFunc(std::vector<Matrix> matrices) override;
	const int getNumberOfMatrix() const;

private:
};