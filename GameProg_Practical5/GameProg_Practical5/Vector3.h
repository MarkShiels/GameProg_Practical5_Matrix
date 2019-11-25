#pragma once
#include <iostream>
#include <math.h>

class Vector3
{
public:

	float m_x;
	float m_y;
	float m_z;

	void	setX(float t_x);
	void	setY(float t_y);
	void	setZ(float t_z);

	Vector3();
	Vector3(float t_x, float t_y, float t_z);
	~Vector3();


	float length();

};