//-----include section-----
#include "Matrix.h"


//-----functions section------
//-----------------------------------------------------------------------------




//-----------------------------------------------------------------------------
void Matrix::printMatrix()
{
	for (int row = 0; row < m_matrix.size(); row++)
	{
		for (int col = 0; col < m_matrix[row].size(); col++)
		{
			std::cout << m_matrix[row][col] << " ";
		}

		std::cout << std::endl;
	}
}
