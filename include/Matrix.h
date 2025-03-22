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


	void printMatrix();

private:
	std::vector<std::vector<int>> m_matrix;
};