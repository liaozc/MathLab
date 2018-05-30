#pragma once

class Matrix2
{
	float m00, m01, m10, m11;
	Matrix2() :m00(0), m01(0), m10(0), m11(0) {}
};

class Matrix3
{

};

class Matrix4
{};

template<int M,int N>
class Matrix
{
	float m[M][N];
};