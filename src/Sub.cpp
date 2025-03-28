//-----include section-----
#include "Sub.h"


//-----functions section------
//-----------------------------------------------------------------------------
Sub::Sub(std::string funcName,
	std::shared_ptr<Operations> function1,
	std::shared_ptr<Operations> function2)
	: CalculationOperations(funcName), m_subFunc1(function1), m_subFunc2(function2)
{}


//-----------------------------------------------------------------------------
Matrix Sub::calcFunc(std::vector<Matrix> matrices)
{
	//First calculate the result of the first function
	std::vector<Matrix> matrices1(matrices.begin(),
		matrices.begin() + m_subFunc1->getNumberOfMatrix());
	Matrix result1 = m_subFunc1->calcFunc(matrices1);

	//Then calculate the result of the second function
	std::vector<Matrix> matrices2(matrices.begin() + m_subFunc1->getNumberOfMatrix(),
		matrices.begin() + m_subFunc1->getNumberOfMatrix() + m_subFunc2->getNumberOfMatrix());
	Matrix result2 = m_subFunc2->calcFunc(matrices2);

	//Sub the two results element-wise
	return result1 - result2;
}


//-----------------------------------------------------------------------------
const int Sub::getNumberOfMatrix() const
{
	return m_subFunc1->getNumberOfMatrix() + m_subFunc2->getNumberOfMatrix();
}