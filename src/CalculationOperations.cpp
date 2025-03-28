//-----include section-----
#include "CalculationOperations.h"


//-----functions section------
//-----------------------------------------------------------------------------
CalculationOperations::CalculationOperations(std::string nameFunc1,	
											 std::string nameFunc2,
											 std::shared_ptr<Operations> function1,
											 std::shared_ptr<Operations> function2,
											 std::string sign)
	: m_Func1(function1), m_Func2(function2), m_sign(sign)
{
	Operations::setCountFunc(function1->getCountFunc() + function2->getCountFunc());

	std::string newName;

	std::string func1Name = function1->getCountFunc() > 1 ?
		"(" + function1->getFunctionName() + ")" :
		function1->getFunctionName();

	std::string func2Name = function2->getCountFunc() > 1 ?
		"(" + function2->getFunctionName() + ")" :
		function2->getFunctionName();

	//Combine function names
	newName = func1Name + " " + sign + " " + func2Name;
	Operations::setFuncName(newName);
}
