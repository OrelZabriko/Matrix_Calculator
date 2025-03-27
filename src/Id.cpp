//-----include section-----
#include "Id.h"


//-----functions section------
//-----------------------------------------------------------------------------
Matrix Id::calcFunc(std::vector<Matrix> matrices)
{
	std::cout << "Id(" << matrices[0] << ") =\n" << matrices[0] << std::endl;

	return matrices[0];
}


//-----------------------------------------------------------------------------
const int Id::getNumberOfMatrix() const
{
	return 1;
}