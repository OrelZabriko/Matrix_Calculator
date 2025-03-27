#pragma once

//-----include section-----
#include "Operations.h"


//-----class section-----
class Scalar : public Operations
{
public:
	using Operations::Operations;

	void calcFunc(std::vector<Matrix> matrices) {};

private:
};