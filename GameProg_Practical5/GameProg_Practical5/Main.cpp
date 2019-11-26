#include <iostream>
#include "Vector3.h"


int main()
{

	Vector3 v1(2.0f, 2.0f, 2.0f);
	Vector3	v2(6.0f, 7.0f, 9.0f);

	Vector3 v3;


	v3 = v1.operator+(v2);
	std::cout << v3.m_x << " " << v3.m_y << " " << v3.m_z << " " << std::endl;

	v3 = v2.operator-(v1);
	std::cout << v3.m_x << " " << v3.m_y << " " << v3.m_z << " " << std::endl;

	v3 = v1 + v2;
	std::cout << v3.m_x << " " << v3.m_y << " " << v3.m_z << " " << std::endl;

	v3 = v2 - v1;
	std::cout << v3.m_x << " " << v3.m_y << " " << v3.m_z << " " << std::endl;

	v3 = v3.operator -();
	std::cout << v3.m_x << " " << v3.m_y << " " << v3.m_z << " " << std::endl;

	float result = v1.operator*(v2);
	std::cout << result << std::endl;

	v3 = v1.operator*(3);
	std::cout << v3.m_x << " " << v3.m_y << " " << v3.m_z << " " << std::endl;

	v3 = v1.operator^(v2);
	std::cout << v3.m_x << " " << v3.m_y << " " << v3.m_z << " " << std::endl;

	std::cout << v1.toString();

	system("Pause");
	return 0;
}