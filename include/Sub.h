#pragma once

//-----include section-----
#include "Operations.h"


//-----class section-----
class Sub : public Operations
{
public:
	using Operations::Operations;

	Matrix calcFunc(std::vector<Matrix> matrices) {};

private:
};