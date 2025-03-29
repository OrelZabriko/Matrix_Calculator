//-----include section-----
#include "Composite.h"


//-----functions section------
//-----------------------------------------------------------------------------
Matrix Composite::calcFunc(std::vector<Matrix> matrices)
{
	//First calculate the result of the first function
	std::vector<Matrix> matrices1(matrices.begin(),
								  matrices.begin() + m_Func1->getNumberOfMatrix());
	Matrix result1 = m_Func1->calcFunc(matrices1);

	//Then calculate the result of the second function by giving the result 
	//of the first function
	std::vector<Matrix> matrices2(matrices.begin() + m_Func1->getNumberOfMatrix(),
							      matrices.end());
	matrices2.insert(matrices2.begin(), result1);
	Matrix result2 = m_Func2->calcFunc(matrices2);

	//Return the result of the second function
	return result2;
}


//-----------------------------------------------------------------------------
const int Composite::getNumberOfMatrix() const
{
	return std::max(m_Func1->getNumberOfMatrix(), m_Func2->getNumberOfMatrix());
}