#pragma once
#include <math.h>
#include <iostream>

class Vector2
{
public:

	float	m_x;
	float	m_y;

	void	setX(float t_x);
	void	setY(float t_y);

	Vector2();
	Vector2(float t_x, float t_y);
	~Vector2();


	float	length();
	float	lengthSquared();
	void	normalise();


	Vector2		operator+(Vector2 v1);
	Vector2		operator-(Vector2 v1);
	float		operator*(Vector2 v1);
	Vector2		operator *(float k);
	float		operator ^(Vector2 V1);
	Vector2		operator - ();


	friend Vector2 operator+(const Vector2& v1, const Vector2& v2);
	friend Vector2 operator-(const Vector2& v1, const Vector2& v2);

	void	print();



};