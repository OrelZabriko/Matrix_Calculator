//-----include section-----
#include "Add.h"


//-----functions section------
//-----------------------------------------------------------------------------
Matrix Add::calcFunc(std::vector<Matrix> matrices)
{
	//First calculate the result of the first function
	std::vector<Matrix> matrices1(matrices.begin(),
								  matrices.begin() + m_func1->getNumberOfMatrix());
	Matrix result1 = m_func1->calcFunc(matrices1);

	//Then calculate the result of the second function
	std::vector<Matrix> matrices2(matrices.begin() + m_func1->getNumberOfMatrix(),
								  matrices.end());
	Matrix result2 = m_func2->calcFunc(matrices2);

	//Add the two results element-wise
	return result1 + result2;
}


//-----------------------------------------------------------------------------
const int Add::getNumberOfMatrix() const
{
	return m_func1->getNumberOfMatrix() + m_func2->getNumberOfMatrix();
}