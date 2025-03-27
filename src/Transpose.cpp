//-----include section-----
#include "Transpose.h"


//-----functions section------
//-----------------------------------------------------------------------------
Matrix Transpose::calcFunc(std::vector<Matrix> matrices)
{
	Matrix result(matrices[0].getSize());
	for (int rows = 0; rows < matrices[0].getSize(); rows++)
	{
		for (int cols = 0; cols < matrices[0].getSize(); cols++)
		{
			result.setCell(rows, cols, matrices[0].getCell(cols, rows));
		}
	}
	return result;
}


//-----------------------------------------------------------------------------
const int Transpose::getNumberOfMatrix() const
{
	return 1;
}