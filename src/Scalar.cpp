//-----include section-----
#include "Scalar.h"


//-----functions section------
//-----------------------------------------------------------------------------
Scalar::Scalar(std::string name, const int val) 
	: Operations(name), m_val(val)
{}


//-----------------------------------------------------------------------------
Matrix Scalar::calcFunc(std::vector<Matrix> matrices)
{
	return m_val*matrices[0];
}


//-----------------------------------------------------------------------------
const int Scalar::getNumberOfMatrix() const
{
	return 1;
}


//-----------------------------------------------------------------------------
void Scalar::setVal(const int val)
{
	m_val = val;
}
