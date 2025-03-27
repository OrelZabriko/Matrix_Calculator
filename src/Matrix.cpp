//-----include section-----
#include "Matrix.h"


//-----functions section------
//-----------------------------------------------------------------------------
Matrix::Matrix(const int size) : m_size(size)
{
	if (size != 0)
	{
		m_matrix.resize(size);
		for (int rows = 0; rows < size; rows++)
		{
			m_matrix[rows].resize(size);
		}
	}
}


//-----------------------------------------------------------------------------
const int Matrix::getSize() const
{
	return m_size;
}


//-----------------------------------------------------------------------------
void Matrix::setSize(const int size)
{
	m_size = size;

	m_matrix.resize(size);
	for (int rows = 0; rows < size; rows++)
	{
		m_matrix[rows].resize(size);
	}
}


//-----------------------------------------------------------------------------
//This function set the matrix cell with the number it recieve. 
void Matrix::setCell(const int row, const int col, const int number)
{
	m_matrix[row][col] = number;
}


//-----------------------------------------------------------------------------
//This function return the value of the matrix cell. 
const int Matrix::getCell(const int row, const int col) const
{
	return m_matrix[row][col];
}


//-----------------------------------------------------------------------------
Matrix& Matrix::operator=(const Matrix& other)
{
	if (m_matrix.size() == 0)
	{
		m_matrix.resize(other.getSize());
		for (int rows = 0; rows < other.getSize(); rows++)
		{
			m_matrix[rows].resize(other.getSize());
		}
	}

	m_matrix = other.m_matrix;
	m_size = other.m_size;

	return *this;
}


//-----------------------------------------------------------------------------
std::ostream& operator<<(std::ostream& os, const Matrix& matrix)
{
	for (int rows = 0; rows < matrix.getSize(); rows++)
	{
		for (int cols = 0; cols < matrix.getSize(); cols++)
		{
			os << matrix.getCell(rows, cols) << " ";
		}

		os << std::endl;
	}

	return os;
}


//-----------------------------------------------------------------------------
std::istream& operator>>(std::istream& is, Matrix& matrix)
{
	for (int rows = 0; rows < matrix.getSize(); rows++)
	{
		for (int cols = 0; cols < matrix.getSize(); cols++)
		{
			int tempNum;
			is >> tempNum;
			matrix.setCell(rows, cols, tempNum);
		}
	}

	return is;
}


//-----------------------------------------------------------------------------
Matrix operator+(const Matrix& left, const Matrix& right)
{
	Matrix result = Matrix(left.getSize());

	for (int row = 0; row < left.getSize(); row++)
	{
		for (int col = 0; col < left.getSize(); col++)
		{
			result.setCell(row, col, left.getCell(row, col) + right.getCell(row, col));
		}
	}

	return result;
}


//-----------------------------------------------------------------------------
Matrix& operator+=(Matrix& left, const Matrix& right)
{
	left = left + right;

	return left;
}


//-----------------------------------------------------------------------------
Matrix operator-(const Matrix& left, const Matrix& right)
{
	Matrix result = Matrix(left.getSize());

	for (int row = 0; row < left.getSize(); row++)
	{
		for (int col = 0; col < left.getSize(); col++)
		{
			result.setCell(row, col, left.getCell(row, col) - right.getCell(row, col));
		}
	}

	return result;
}


//-----------------------------------------------------------------------------
Matrix& operator-=(Matrix& left, const Matrix& right)
{
	left = left - right;

	return left;
}


//-----------------------------------------------------------------------------
Matrix operator*(const unsigned int mulNum, const Matrix& matrix)
{
	Matrix result = Matrix(matrix.getSize());

	for (int row = 0; row < matrix.getSize(); row++)
	{
		for (int col = 0; col < matrix.getSize(); col++)
		{
			result.setCell(row, col, mulNum * matrix.getCell(row,col));
		}
	}

	return result;
}