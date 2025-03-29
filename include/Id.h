#pragma once

//-----include section-----
#include "Operations.h"


//-----class section-----
class Id : public Operations
{
public:
	//constructor
	using Operations::Operations;
	//destructor
	~Id() = default;

	//functions
	const int getNumberOfMatrix() const;
	Matrix calcFunc(std::vector<Matrix> matrices) override;
};