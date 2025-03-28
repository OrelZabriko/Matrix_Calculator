//-----include section-----
#include "Operations.h"


//-----functions section------
//-----------------------------------------------------------------------------
Operations::Operations(std::string name, const int countFunc)
	: m_countFanc(countFunc)
{
	setFuncName(name);
}


//-----------------------------------------------------------------------------
const std::string Operations::getFunctionName() const
{
	return funcName;
}


//-----------------------------------------------------------------------------
void Operations::setFuncName(std::string name)
{
	funcName = name;
}


//-----------------------------------------------------------------------------
void Operations::setCountFunc(const int countFunc)
{
	m_countFanc = countFunc;
}


//-----------------------------------------------------------------------------
int Operations::getCountFunc() const
{
	return m_countFanc;
}


