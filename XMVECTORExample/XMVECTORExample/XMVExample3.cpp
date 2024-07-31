#include "main.h"

/*ostream& operator<< (ostream& os, XMVECTOR v)
{
	XMFLOAT4 dest;
	XMStoreFloat4(&dest, v);
	os << "(" << dest.x << ", " << dest.y << ", " << dest.z << ", " << dest.w << ")";
	return os;
}

int main()
{
	cout.setf(ios_base::boolalpha);

	if (!XMVerifyCPUSupport())
	{
		cout << "xna math not supported" << '\n';
	}

	XMVECTOR p = XMVectorSet(2.0f, 2.0f, 1.0f, 0.0f);
	XMVECTOR q = XMVectorSet(2.0f, -0.5f, 0.5f, 0.1f);
	XMVECTOR u = XMVectorSet(1.0f, 2.0f, 4.0f, 8.0f);
	XMVECTOR v = XMVectorSet(-2.0f, 1.0f, -3.0f, 2.5f);
	// XM_PIDIV4 = ��/4, XM_PIDIV2 = ��/2 , XM_PI = ��
	XMVECTOR w = XMVectorSet(0.0f, XM_PIDIV4, XM_PIDIV2, XM_PI);

	// ������ �� ������ �������� ��ȯ
	cout << "XMVectorAbs(v) = " << XMVectorAbs(v) << '\n';
	// ������ �� ������ �ڻ��ΰ����� ���
	cout << "XMVectorCos(w) = " << XMVectorCos(w) << '\n';
	// ������ �� ������ �α�2 ������ ���
	cout << "XMVectorLog(u) = " << XMVectorLog2(u) << '\n';
	// 2�� p�� �ŵ��������� ��� (ex. p.x = 2.0f -> 2^2 = 4)
	cout << "XMVectorExp(p) = " << XMVectorExp(p) << '\n';

	// u�� p�� �ŵ��������� ���
	cout << "XMVectorPow(u, p) = " << XMVectorPow(u, p) << '\n';
	// ������ �� ������ ��Ʈ ���� ������ ���
	cout << "XMVectorSqrt(u) = " << XMVectorSqrt(u) << '\n';

	// �� �Ӽ��� ������ x��° ������ ǥ��
	cout << "XMVectorSwizzle(u, 2, 2, 1, 3) = " << XMVectorSwizzle(u, 2, 2, 1, 3) << '\n';
	cout << "XMVectorSwizzle(u, 2, 1, 0, 3) = " << XMVectorSwizzle(u, 2, 1, 0, 3) << '\n';

	// �� ������ ���� ���
	cout << "XMVectorMultiply(u, v) = " << XMVectorMultiply(u, v) << '\n';
	// ������ �� ������ 0.0f ~ 0.1f ������ ǥ��
	cout << "XMVectorSaturate(q) = " << XMVectorSaturate(q) << '\n';
	// �� ������ ���� �� �� ���� ������ ǥ��
	cout << "XMVectorMin(p, v) = " << XMVectorMin(p, v) << '\n';
	// �� ������ ���� �� �� ū ������ ǥ��
	cout << "XMVectorMax(p, v) = " << XMVectorMax(p, v) << '\n';

	return 0;
}*/