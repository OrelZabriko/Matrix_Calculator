#pragma once

//-----include section-----
#include "Operations.h"


//-----class section-----
class Transpose : public Operations
{
public:
	using Operations::Operations;

	const int getNumberOfMatrix() const;
	void calcFunc(std::vector<Matrix> matrices) {};

private:
};