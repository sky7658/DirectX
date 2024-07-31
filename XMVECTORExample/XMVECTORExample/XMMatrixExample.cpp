//#define _XM_NO_INTRINSICS_
//#include "main.h"
//
//ostream& operator<< (ostream& os, FXMVECTOR v)
//{
//	XMFLOAT4 dest;
//	XMStoreFloat4(&dest, v);
//	os << "(" << dest.x << ", " << dest.y << ", " << dest.z << ", " << dest.w << ")";
//	return os;
//}
//
//ostream& operator << (ostream& os, CXMMATRIX m)
//{
//	for (int i = 0; i < 4; ++i)
//	{
//		for (int j = 0; j < 4; j++)
//			os << m(i, j) << '\t';
//		os << '\n';
//	}
//	return os;
//}
//
//int main()
//{
//	if (!XMVerifyCPUSupport())
//	{
//		cout << "xna math not supported\n";
//		return 0;
//	}
//
//	// 생성자를 통한 Matrix 초기화
//	XMMATRIX A(1.0f, 0.0f, 0.0f, 0.0f,
//			   0.0f, 2.0f, 0.0f, 0.0f,
//			   0.0f, 0.0f, 4.0f, 0.0f,
//			   1.0f, 2.0f, 3.0f, 1.0f);
//
//	// 단위 행렬 초기화
//	XMMATRIX B = XMMatrixIdentity();
//
//	// 행렬 AB의 곱
//	XMMATRIX C = A * B;
//
//	// A행렬의 전치 행렬
//	XMMATRIX D = XMMatrixTranspose(A);
//
//	// 행렬식
//	XMVECTOR det = XMMatrixDeterminant(A);
//	// A행렬의 역행렬
//	XMMATRIX E = XMMatrixInverse(&det, A);
//
//	// A행렬과 역행렬의 곱은 단위 행렬이라는 것을 보여줌
//	XMMATRIX F = A * E;
//
//	cout << "A = \n" << A << '\n';
//	cout << "B = \n" << B << '\n';
//	cout << "C = A * B = \n" << C << '\n';
//	cout << "D = transpose(A) = \n" << D << '\n';
//	cout << "det = determinant(A) = " << det << '\n';
//	cout << "E = inverse(A) = \n" << E << '\n';
//	cout << "F = A * E = \n" << F << '\n';
//	return 0;
//}