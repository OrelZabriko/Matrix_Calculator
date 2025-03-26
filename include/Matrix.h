#pragma once

//-----include section-----
#include <iostream>
#include <vector>


//-----class section-----
class Matrix
{
public:
	//constructor	
	Matrix(const int size = 0);
	//destructor
	~Matrix() = default;

	//functions
	const int getSize() const;
	void setCell(const int row, const int col, const int number);
	const int getCell(const int row, const int col) const;

	Matrix& operator=(const Matrix& other);

private:
	std::vector<std::vector<int>> m_matrix;
	int m_size;
};


//-----operators section-----
std::ostream& operator<<(std::ostream& os, const Matrix& matrix);
std::istream& operator>>(std::istream& is, Matrix& matrix);
Matrix operator+(const Matrix& left, const Matrix& right);
Matrix& operator+=(Matrix& left, const Matrix& right);
Matrix operator-(const Matrix& left, const Matrix& right);
Matrix& operator-=(Matrix& left, const Matrix& right);
Matrix operator*(const unsigned int mulNum, const Matrix& matrix);