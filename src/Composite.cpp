//-----include section-----
#include "Composite.h"


//-----functions section------
//-----------------------------------------------------------------------------
Composite::Composite(std::string funcName,
					 std::shared_ptr<Operations> function1, 
					 std::shared_ptr<Operations> function2)
	: CalculationOperations(funcName), m_compFunc1(function1), m_compFunc2(function2)
{}


//-----------------------------------------------------------------------------
Matrix Composite::calcFunc(std::vector<Matrix> matrices)
{
	//First calculate the result of the first function
	std::vector<Matrix> matrices1(matrices.begin(),
		matrices.begin() + m_compFunc1->getNumberOfMatrix());
	Matrix result1 = m_compFunc1->calcFunc(matrices1);

	//Then calculate the result of the second function by giving the result 
	//of the first function
	Matrix result2 = m_compFunc2->calcFunc({ result1 });

	//Return the result of the second function
	return result2;
}


//-----------------------------------------------------------------------------
const int Composite::getNumberOfMatrix() const
{
	return m_compFunc1->getNumberOfMatrix();
}