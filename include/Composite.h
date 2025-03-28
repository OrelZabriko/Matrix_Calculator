#pragma once

//-----include section-----
#include "Operations.h"


//-----class section-----
class Composite : public Operations
{
public:
	//constructor
	using Operations::Operations;
	
	//functions
	Matrix calcFunc(std::vector<Matrix> matrices) override {};

private:
};