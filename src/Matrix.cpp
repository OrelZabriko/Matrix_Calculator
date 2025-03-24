//-----include section-----
#include "Matrix.h"


//-----functions section------
//-----------------------------------------------------------------------------


//-----------------------------------------------------------------------------
//Get the matrix data.
const std::vector<std::vector<int>>& Matrix::getMatrix() const
{
	return m_matrix;
}


//-----------------------------------------------------------------------------
//Set the matrix data.
void Matrix::setMatrix(const std::vector<std::vector<int>>& matrix)
{
	m_matrix = matrix;
}


//-----------------------------------------------------------------------------
std::ostream& operator<<(std::ostream& os, const Matrix& matrix)
{
	for (const auto& row : matrix.getMatrix())
	{
		for (const auto& element : row)
		{
			os << element << " ";
		}
		os << std::endl;
	}

	return os;
}


//-----------------------------------------------------------------------------
std::istream& operator>>(std::istream& is, Matrix& matrix)
{
	// TODO: insert return statement here
}


//-----------------------------------------------------------------------------
Matrix operator+(const Matrix& left, const Matrix& right)
{
	Matrix result;
	std::vector<std::vector<int>> tempMatrix;

	for (int row = 0; row < left.getMatrix().size(); row++)
	{
		std::vector<int> tempRow;
		for (int col = 0; col < left.getMatrix()[row].size(); col++)
		{
			tempRow.push_back(left.getMatrix()[row][col] + right.getMatrix()[row][col]);
		}

		tempMatrix.push_back(tempRow);
	}

	result.setMatrix(tempMatrix);

	return result;
}


//-----------------------------------------------------------------------------
Matrix operator-(const Matrix& left, const Matrix& right)
{
	Matrix result;
	std::vector<std::vector<int>> tempMatrix;

	for (int row = 0; row < left.getMatrix().size(); row++)
	{
		std::vector<int> tempRow;
		for (int col = 0; col < left.getMatrix()[row].size(); col++)
		{
			tempRow.push_back(left.getMatrix()[row][col] - right.getMatrix()[row][col]);
		}

		tempMatrix.push_back(tempRow);
	}

	result.setMatrix(tempMatrix);

	return result;
}


//-----------------------------------------------------------------------------
Matrix operator*(const unsigned int mulNum, const Matrix& matrix)
{
	Matrix result;
	std::vector<std::vector<int>> tempMatrix;

	for (int row = 0; row < matrix.getMatrix().size(); row++)
	{
		std::vector<int> tempRow;
		for (int col = 0; col < matrix.getMatrix()[row].size(); col++)
		{
			tempRow.push_back(matrix.getMatrix()[row][col] - matrix.getMatrix()[row][col]);
		}

		tempMatrix.push_back(tempRow);
	}

	result.setMatrix(tempMatrix);

	return result;
}