#pragma once

//-----include section-----
#include "Operations.h"


//-----class section-----
class Scalar : public Operations
{
public:
	//constructor
	using Operations::Operations;
	Scalar(std::string name, const int val);

	Matrix calcFunc(std::vector<Matrix> matrices);
	const int getNumberOfMatrix() const;
	void setVal(const int val);

private:
	int m_val;
};