#include <iostream>
#include "Vector3.h"
#include "Vector2.h"
#include "Matrix3.h"


int main()
{

	Vector3 v1(2.0f, 2.0f, 2.0f);
	Vector3	v2(6.0f, 7.0f, 9.0f);

	Vector3 v3;

	Vector2 v21(3.0f, 4.0f);
	Vector2 v22(5.0f, 2.0f);

	Vector2 v23;

	float result2d;


	/*v3 = v1.operator+(v2);
	std::cout << "V1 + V2: " << v3.m_x << " " << v3.m_y << " " << v3.m_z << " " << std::endl;

	v3 = v2.operator-(v1);
	std::cout << "V2 - v1: " << v3.m_x << " " << v3.m_y << " " << v3.m_z << " " << std::endl;

	v3 = v1 + v2;
	std::cout << "V1 + V2: " << v3.m_x << " " << v3.m_y << " " << v3.m_z << " " << std::endl;

	v3 = v2 - v1;
	std::cout << "V2 - V1: " << v3.m_x << " " << v3.m_y << " " << v3.m_z << " " << std::endl;

	v3 = v3.operator -();
	std::cout << "V3 inverted: " << v3.m_x << " " << v3.m_y << " " << v3.m_z << " " << std::endl;

	float result = v1.operator*(v2);
	std::cout << "v1 * v2: " << result << std::endl;

	v3 = v1.operator*(3);
	std::cout << "V3 * 3: " << v3.m_x << " " << v3.m_y << " " << v3.m_z << " " << std::endl;

	v3 = v1.operator^(v2);
	std::cout << "V1 x V2: " << v3.m_x << " " << v3.m_y << " " << v3.m_z << " " << std::endl;

	v23 = v21.operator+(v22);
	std::cout << "V21 + V22: " << v23.m_x << "," << v23.m_y << std::endl;

	v23 = v22.operator-(v21);
	std::cout << "V22 - V21: " << v23.m_x << "," << v23.m_y << std::endl;

	v23 = v23.operator-();
	std::cout << "V23 inverted: " << v23.m_x << "," << v23.m_y << std::endl;

	v23 = v21.operator*(4);
	std::cout << "V21 * 4: " << v23.m_x << "," << v23.m_y << std::endl;

	result2d = v21.operator^(v22);
	std::cout << "V21 x v22: " << result2d << std::endl;*/
/*
	 result2d = v21.operator*(v22);
	 std::cout << " " << result2d << std::endl;

	v23 = v21 + v22;
	v23.print();

	result2d = v21.length();
	std::cout << " " << result2d << std::endl;

	result2d = v21.lengthSquared();
	std::cout << " " << result2d << std::endl;

	v21.print();
	v21.normalise();
	v21.print();
*/


	Matrix3 M1 (3.0f, 2.0f, 3.0f,
				1.0f, 4.0f, 6.0f,
				5.0f, 2.0f, 4.0f);

	Matrix3 M2(2.0f, 5.0f, 4.0f,
				2.0f,3.0f,1.0f,
				4.0f, 1.0f,6.0f);

	/*Matrix3 M3 = M1.operator*(M2);

	std::cout << "M3 = " << std::endl;
	std::cout << M3.m_A11 << " "<< M3.m_A12 << " " << M3.m_A13 << std::endl;
	std::cout << M3.m_A21 << " " << M3.m_A22 << " " << M3.m_A23 << std::endl;
	std::cout << M3.m_A31 << " " << M3.m_A32 << " " << M3.m_A33 << std::endl;


	float bull = M1.determinant();
	std::cout << " M1 determinant: " << bull << std::endl;

	float cow = M2.determinant();
	std::cout << " M2 determinant: " << cow << std::endl;*/

	/*Vector3 m1R1 = M1.row(2);
	std::cout << "M1 Row: " << m1R1.m_x << " " << m1R1.m_y << " " << m1R1.m_z << std::endl;*/

	/*Matrix3 M1_inverse = M1.inverse();
	
	Vector3 M1_inverse_r1 = M1_inverse.row(1);
	Vector3 M1_inverse_r2 = M1_inverse.row(2);
	Vector3 M1_inverse_r3 = M1_inverse.row(3);

	M1_inverse_r1.print();
	M1_inverse_r2.print();
	M1_inverse_r3.print();*/
/*
	Matrix3 M1_inverse = M1.operator-();

	Vector3 M1_inverse_r1 = M1_inverse.row(1);
	Vector3 M1_inverse_r2 = M1_inverse.row(2);
	Vector3 M1_inverse_r3 = M1_inverse.row(3);
	
	M1_inverse_r1.print();
	M1_inverse_r2.print();
	M1_inverse_r3.print();*/

	std::cout << std::endl;
	system("Pause");
	return 0;
}