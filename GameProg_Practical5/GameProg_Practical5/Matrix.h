#pragma once
#include "Vector3.h"

class Matrix3
{

public:

	// The class has nine variables, 3 rows and 3 columns
	float m_A11;
	float m_A12;
	float m_A13;
	float m_A21;
	float m_A22;
	float m_A23;
	float m_A31;
	float m_A32;
	float m_A33;

	// Constructor 1 create a zero matrix
	Matrix3();

	// Constructor 2 To allow 3 rows of vectors to be declared as a matrix
	Matrix3(Vector3 r1, Vector3 r2, Vector3 r3);

	// Constructor 3 to allow 9 floats
	Matrix3(float t_A11, float t_A12, float t_A13,
			 float t_A21, float t_A22, float t_A23,
			  float t_A31, float t_A32, float t_A33);

	// An overloaded operator * to return the  product of the matrix by a vector
	Vector3 operator *(Vector3 V1);

	// a method to transpose a given matrix
	Matrix3 transpose();

	// An overloaded operator + to return the  sum of two matrix 
	Matrix3 operator +(Matrix3 M1);

	// An overloaded operator * to return the  difference of two matrix
	Matrix3 operator -(Matrix3 M1);
};