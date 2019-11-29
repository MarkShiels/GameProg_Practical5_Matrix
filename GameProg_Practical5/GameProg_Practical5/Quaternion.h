#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
#include "Vector3.h"
#include <cmath>
class Quaternion
{
private:

	float	m_w, m_i, m_j, m_k;

public:

	Quaternion();
	Quaternion(float t_w, float t_i, float t_j, float t_k);
	Quaternion(float t_w, Vector3 v1);

	float		modulus();
	Quaternion	normalise();
	Quaternion	conjugate();
	void		fromAxisAngle(Vector3 axis, float angleRadian);
	Quaternion	multiply(Quaternion q1);
	Quaternion copy();
	Vector3 rotate(Vector3 V1, int angle);
	
	Quaternion operator +(Quaternion q1);
	Quaternion operator -();
	Quaternion operator -(Quaternion q1);
	Quaternion operator *(Quaternion q1);
	
}