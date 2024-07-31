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
//	// �����ڸ� ���� Matrix �ʱ�ȭ
//	XMMATRIX A(1.0f, 0.0f, 0.0f, 0.0f,
//			   0.0f, 2.0f, 0.0f, 0.0f,
//			   0.0f, 0.0f, 4.0f, 0.0f,
//			   1.0f, 2.0f, 3.0f, 1.0f);
//
//	// ���� ��� �ʱ�ȭ
//	XMMATRIX B = XMMatrixIdentity();
//
//	// ��� AB�� ��
//	XMMATRIX C = A * B;
//
//	// A����� ��ġ ���
//	XMMATRIX D = XMMatrixTranspose(A);
//
//	// ��Ľ�
//	XMVECTOR det = XMMatrixDeterminant(A);
//	// A����� �����
//	XMMATRIX E = XMMatrixInverse(&det, A);
//
//	// A��İ� ������� ���� ���� ����̶�� ���� ������
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