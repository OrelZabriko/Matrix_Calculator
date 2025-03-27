//-----include section-----
#include "Operations.h"


//-----functions section------
//-----------------------------------------------------------------------------
Operations::Operations(std::string name)
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


