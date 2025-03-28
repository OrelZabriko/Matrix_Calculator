//-----include section-----
#include "Add.h"


//-----functions section------
//-----------------------------------------------------------------------------
Add::Add(std::string funcName, 
		 std::shared_ptr<Operations> function1,
		 std::shared_ptr<Operations> function2)
	: CalculationOperations(funcName), m_addFunc1(function1), m_addFunc2(function2)
{
	Operations::setCountFunc(function1->getCountFunc() + function2->getCountFunc());
}


//-----------------------------------------------------------------------------
Matrix Add::calcFunc(std::vector<Matrix> matrices)
{
	//First calculate the result of the first function
	std::vector<Matrix> matrices1(matrices.begin(),
								  matrices.begin() + m_addFunc1->getNumberOfMatrix());
	Matrix result1 = m_addFunc1->calcFunc(matrices1);

	//Then calculate the result of the second function
	std::vector<Matrix> matrices2(matrices.begin() + m_addFunc1->getNumberOfMatrix(),
		matrices.begin() + m_addFunc1->getNumberOfMatrix() + m_addFunc2->getNumberOfMatrix());
	Matrix result2 = m_addFunc2->calcFunc(matrices2);

	//Add the two results element-wise
	return result1 + result2;
}


//-----------------------------------------------------------------------------
const int Add::getNumberOfMatrix() const
{
	return m_addFunc1->getNumberOfMatrix() + m_addFunc2->getNumberOfMatrix();
}