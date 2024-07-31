#include <iostream>
#include <vector>
using namespace std;

class Matrix2D
{
private:
	vector<vector<float>> m;
public:
	Matrix2D()
	{
	}

	Matrix2D(float arr[4][4]) : m(4)
	{
		for (int i = 0; i < 4; i++)
		{
			m[0].push_back(arr[0][i]);
			m[1].push_back(arr[1][i]);
			m[2].push_back(arr[2][i]);
			m[3].push_back(arr[3][i]);
		}
	}

	Matrix2D(float m11, float m12, float m13, float m14,
		float m21, float m22, float m23, float m24,
		float m31, float m32, float m33, float m34, 
		float m41, float m42, float m43, float m44) : m(4)
	{
		m[0].push_back(m11);
		m[0].push_back(m12);
		m[0].push_back(m13);
		m[0].push_back(m14);

		m[1].push_back(m21);
		m[1].push_back(m22);
		m[1].push_back(m23);
		m[1].push_back(m24);

		m[2].push_back(m31);
		m[2].push_back(m32);
		m[2].push_back(m33);
		m[2].push_back(m34);

		m[3].push_back(m41);
		m[3].push_back(m42);
		m[3].push_back(m43);
		m[3].push_back(m44);
	}
public:
	int size()
	{
		return m.size();
	}
	void EraseComponent(int idx)
	{
		m.erase(m.begin() + idx);
	}
	void EraseComponent(int idx, int jdx)
	{
		for (int i = 0; i < m.size(); i++)
			m[i].erase(m[i].begin() + jdx);
	}
public:
	float& operator() (int i, int j)
	{
		return m[i][j];
	}
};

ostream& operator<< (ostream& os, Matrix2D m)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			os << m(i, j) << '\t';
		os << '\n';
	}
	return os;
}

Matrix2D Transpose(Matrix2D m) // 전치 행렬을 리턴
{
	float arr[4][4];

	for (int i = 0; i < 4; i++)
	{
		arr[i][0] = m(0, i);
		arr[i][1] = m(1, i);
		arr[i][2] = m(2, i);
		arr[i][3] = m(3, i);
	}

	return Matrix2D(arr);
}

float determinant(Matrix2D m, int idx = -1, int jdx = -1) // default = 해당 행렬의 행렬식을 리턴, 행과 열 값을 대입시 소행렬의 행렬식을 리턴
{
	Matrix2D copyM(m);

	if (jdx != -1)
	{
		copyM.EraseComponent(idx, jdx);
		copyM.EraseComponent(idx);
	}

	if (copyM.size() == 1) return copyM(0, 0);
	
	float sum = 0;
	
	for (int i = 0; i < copyM.size(); i++)
	{
		sum += copyM(0, i) * determinant(copyM, 0, i) * pow(-1, i);
	}
	return sum;
}

Matrix2D Inverse(Matrix2D m) // 역행렬을 리턴.
{
	float detA = determinant(m);
	float cof[4][4];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			cof[i][j] = determinant(m, i, j) / detA * pow(-1, i + j) + 0.0;
	}
	return Transpose(Matrix2D(cof));
}

int main()
{
	Matrix2D m(1.0f, 0.0f, 0.0f, 0.0f,
		0.0f, 2.0f, 0.0f, 0.0f,
		0.0f, 0.0f, 4.0f, 0.0f,
		1.0f, 2.0f, 3.0f, 1.0f);

	cout << determinant(m) << '\n';
	cout << Inverse(m) << '\n';
}