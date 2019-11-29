#include "Vector2.h"

void Vector2::setX(float t_x)
{
	m_x = t_x;
}

void Vector2::setY(float t_y)
{
	m_y = t_y;
}

Vector2::Vector2()
{
	setX(0.0f);
	setY(0.0f);
}

Vector2::Vector2(float t_x, float t_y)
{
	setX(t_x);
	setY(t_y);
}

Vector2::~Vector2()
{
}

float Vector2::length()
{
	// A method to return the length of the vector
	return sqrt((m_x * m_x) + (m_y * m_y));
}

float Vector2::lengthSquared()
{
	// A method to return the length squared of the vector
	return (m_x * m_x) + (m_y * m_y);
}

void Vector2::normalise()
{
	// A method to reduce the length of the vector to 1.0 
	// keeping the direction the same
	if (length() > 0.0)
	{  // Check for divide by zero
		float magnitude = length();
		m_x /= magnitude;
		m_y /= magnitude;
	}
}

Vector2 Vector2::operator+(Vector2 v1)
{
	return Vector2(m_x + v1.m_x, m_y + v1.m_y);
}

Vector2 Vector2::operator-(Vector2 v1)
{
	return Vector2(m_x - v1.m_x, m_y - v1.m_y);
}

float Vector2::operator*(Vector2 v1)
{
	return float(m_x * v1.m_x + m_y * v1.m_y);
}

Vector2 operator+(const Vector2& v1, const Vector2& v2)
{
	// An overloaded operator + to return the sum of 2 vectors
	return Vector2(v1.m_x + v2.m_x, v1.m_y + v2.m_y);
}

Vector2 operator-(const Vector2& v1, const Vector2& v2)
{
	// An overloaded operator - to return the difference of 2 vectors
	return Vector2(v1.m_x - v2.m_x, v1.m_y - v2.m_y);
}

Vector2 Vector2::operator - ()
{
	// An overloaded operator - to return the negation of a single vector
	return Vector2(m_x = -m_x, m_y = -m_y);
}

Vector2 Vector2::operator *(float k)
{
	// An overloaded operator * to return the product of a scalar by a vector
	return Vector2(m_x * k, m_y * k);
}

float Vector2::operator ^(Vector2 V1)
{
	// An overloaded operator ^ to return the vector product of 2 vectors
	return (m_x * V1.m_y - m_y * V1.m_x);
}


