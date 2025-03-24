#pragma once

//-----include section-----
#include <iostream>
#include <vector>


//-----class section-----
class Matrix
{
public:
	//destructor
	~Matrix() = default;

	//functions
	const std::vector<std::vector<int>>& getMatrix() const;
	void setMatrix(const std::vector<std::vector<int>>& matrix);

private:
	std::vector<std::vector<int>> m_matrix;
};


//-----operators section-----
std::ostream& operator<<(std::ostream& os, const Matrix& matrix);
std::istream& operator>>(std::istream& is, Matrix& matrix); //need to make this function in the cpp file
Matrix operator+(const Matrix& left, const Matrix& right);
Matrix operator-(const Matrix& left, const Matrix& right);
Matrix operator*(const unsigned int mulNum, const Matrix& matrix);