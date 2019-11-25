#include "Vector3.h"

void Vector3::setX(float t_x)
{
	m_x = t_x;
}

void Vector3::setY(float t_y)
{
	m_y = t_y;
}

void Vector3::setZ(float t_z)
{
	m_z = t_z;
}

Vector3::Vector3()
{
	setX(1.0f);
	setY(1.0f);
	setZ(1.0f);
}

Vector3::Vector3(float t_x, float t_y, float t_z)
{
	setX(t_x);
	setY(t_y);
	setZ(t_z);
}

Vector3::~Vector3()
{
}

float Vector3::length()
{
	return sqrt((m_x * m_x) + (m_y * m_y) + (m_z * m_z));
}
