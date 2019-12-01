#include "Matrix.h"


// Constructor 1 create a zero matrix
Matrix3::Matrix3()
{
	m_A11 = 0.0;
	m_A12 = 0.0;
	m_A13 = 0.0;
	m_A21 = 0.0;
	m_A22 = 0.0;
	m_A23 = 0.0;
	m_A31 = 0.0;
	m_A32 = 0.0;
	m_A33 = 0.0;
}

// Constructor 2 To allow 3 rows of vectors to be declared as a matrix
Matrix3::Matrix3(Vector3 r1, Vector3 r2, Vector3 r3)
{
	m_A11 = r1.m_x;
	m_A12 = r1.m_y;
	m_A13 = r1.m_z;
	m_A21 = r2.m_x;
	m_A22 = r2.m_y;
	m_A23 = r2.m_z;
	m_A31 = r3.m_x;
	m_A32 = r3.m_y;
	m_A33 = r3.m_z;
}

// Constructor 3 to allow nine float values
Matrix3:: Matrix3(float t_A11, float t_A12, float t_A13,
	float t_A21, float t_A22, float t_A23,
	float t_A31, float t_A32, float t_A33)
{
	m_A11 = t_A11;
	m_A12 = t_A12;
	m_A13 = t_A13;
	m_A21 = t_A21;
	m_A22 = t_A22;
	m_A23 = t_A23;
	m_A31 = t_A31;
	m_A32 = t_A32;
	m_A33 = t_A33;
}

// An overloaded operator * to return the  product of the matrix by a vector
Vector3 Matrix3::operator *(Vector3 V1)
{
	return Vector3( (m_A11 * V1.m_x) + (m_A12 * V1.m_y) + (m_A13 * V1.m_z),

						(m_A21 * V1.m_x) + (m_A22 * V1.m_y) + (m_A23 * V1.m_z),

							(m_A31 * V1.m_x) + (m_A32 * V1.m_y) + (m_A33 * V1.m_z) );
}

// a method to transpose a given matrix
Matrix3 Matrix3::transpose()
{
	return Matrix3(m_A11, m_A21, m_A31,
					m_A12, m_A22, m_A32,
					 m_A13, m_A23, m_A33);
}

// An overloaded operator + to return the  sum of two matrix 
Matrix3 Matrix3::operator +(Matrix3 M1)
{
	return Matrix3(m_A11 + M1.m_A11, m_A12 + M1.m_A12, m_A13 + M1.m_A13,
				    m_A21 + M1.m_A21, m_A22 + M1.m_A22, m_A23 + M1.m_A23,
					 m_A31 + M1.m_A31, m_A32 + M1.m_A32, m_A33 + M1.m_A33);
}

Matrix3 Matrix3::operator -(Matrix3 M1)
{// An overloaded operator * to return the  difference of two matrix
	return Matrix3(m_A11 - M1.m_A11, m_A12 - M1.m_A12, m_A13 - M1.m_A13,
		m_A21 - M1.m_A21, m_A22 - M1.m_A22, m_A23 - M1.m_A23,
		m_A31 - M1.m_A31, m_A32 - M1.m_A32, m_A33 - M1.m_A33);
}