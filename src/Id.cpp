//-----include section-----
#include "Id.h"


//-----functions section------
//-----------------------------------------------------------------------------
Matrix Id::calcFunc(std::vector<Matrix> matrices)
{
	return matrices[0];
}


//-----------------------------------------------------------------------------
const int Id::getNumberOfMatrix() const
{
	return 1;
}