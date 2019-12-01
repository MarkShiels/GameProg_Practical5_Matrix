#include "Quaternion.h"

Quaternion::Quaternion()
{
	m_w = 0; m_i = 0; m_j = 0; m_k = 0;
}

Quaternion::Quaternion(float t_w, float t_i, float t_j, float t_k)
{
	m_w = t_w; m_i = t_i; m_j = t_j; m_k = t_k;
}

Quaternion::Quaternion(float t_w, Vector3 v1)
{
	m_w = t_w; m_i = v1.m_x; m_j = v1.m_y; m_k = v1.m_z;
}

float Quaternion::modulus()
{
	return sqrt(m_w * m_w + m_i * m_i + m_j * m_j + m_k * m_k); 
}

Quaternion Quaternion::normalise()
{
	float m = m_w * m_w + m_i * m_i + m_j * m_j + m_k * m_k;

	if (m > 0.001)
	{
		m = sqrt(m);
		return Quaternion(m_w / m, m_i / m, m_j / m, m_k / m);
	}
	else
	{
		return Quaternion(1, 0, 0, 0);
	}
}

Quaternion Quaternion::conjugate()
{
	return Quaternion(m_w, -m_i, -m_j, -m_k);
}

void Quaternion::fromAxisAngle(Vector3 axis, float angleRadian)
{
	double m = axis.length();

	if (m > 0.0001)
	{
		float sa = sin(angleRadian / 2);
		float ca = cos(angleRadian / 2);

		m_i = axis.m_x / m * sa;
		m_j = axis.m_y / m * sa;
		m_k = axis.m_z / m * sa;
		m_w = ca;
	}
	else
	{
		m_w = 1; m_i = 0; m_j = 0; m_k = 0;
	}
}

Quaternion Quaternion::multiply(Quaternion q1)
{
	//float nw = _q.w * w - _q.x * x - _q.y * y - _q.z * z;
	float n_w = q1.m_w * m_w - q1.m_i - m_i - q1.m_j * m_j - q1.m_k * m_k;

	//float nx = (_q.w * x) + (_q.x * w) + (_q.y * z) - (_q.z * y);
	float n_i = (q1.m_w * m_i) + (q1.m_i * m_w) + (q1.m_j * m_k) - (q1.m_k * m_j);

	//float ny = (_q.w * y) + (_q.y * w) + (_q.z * x) - (_q.x * z);
	float n_j = (q1.m_w * m_j) + (q1.m_j * m_w) + (q1.m_k * m_i) - (q1.m_i * m_k);

	//float nz = (_q.w * z) + (_q.z * w) + (_q.x * y) - (_q.y * x);
	float n_k = (q1.m_w * m_k)+(q1.m_k + m_w)+(q1.m_i * m_j)-(q1.m_j * m_i);

	return Quaternion(n_w, n_i, n_j, n_k);
}

Quaternion Quaternion::copy()
{
	return Quaternion(m_w, m_i, m_j, m_k);
}

Vector3 Quaternion::rotate(Vector3 V1, float angle)
{
	Quaternion axis;
	Quaternion	rotate;

	axis = normalise();

	float angleRad = M_PI / 180 * angle;

	rotate = Quaternion(cos(angleRad / 2), sin(angleRad / 2) * axis.m_i, sin(angleRad / 2) * axis.m_j, sin(angleRad / 2) * axis.m_k);

	Quaternion conjugate = rotate.conjugate();

	Quaternion qNode = Quaternion(0, V1.m_x, V1.m_y, V1.m_z);

	qNode = rotate * qNode * conjugate;

	return Vector3(qNode.m_i, qNode.m_j, qNode.m_k);
}

Quaternion Quaternion::operator +(Quaternion q1)
{
	return Quaternion(m_w + q1.m_w, m_i + q1.m_i, m_j + q1.m_j, m_k + q1.m_k);
}
Quaternion Quaternion::operator -()
{
	return Quaternion(-m_w, -m_i, -m_j, -m_k);
}

Quaternion Quaternion::operator -(Quaternion q1)
{
	return Quaternion(m_w - q1.m_w, m_i - q1.m_i, m_j - q1.m_j, m_k - q1.m_k);
}

Quaternion Quaternion::operator *(Quaternion q1)
{
	float n_w = q1.m_w * m_w - q1.m_i - m_i - q1.m_j * m_j - q1.m_k * m_k;

	float n_i = (q1.m_w * m_i) + (q1.m_i * m_w) + (q1.m_j * m_k) - (q1.m_k * m_j);

	float n_j = (q1.m_w * m_j) + (q1.m_j * m_w) + (q1.m_k * m_i) - (q1.m_i * m_k);

	float n_k = (q1.m_w * m_k) + (q1.m_k + m_w) + (q1.m_i * m_j) - (q1.m_j * m_i);

	return Quaternion(n_w, n_i, n_j, n_k);
}