#include "Example.h"

// ������ �����ε��� ���� FXMVECTOR�� ���
ostream& operator<<(ostream& os, FXMVECTOR v)
{
	XMFLOAT3 dest;			 // XMVECTOR�� ������ ����
	XMStoreFloat3(&dest, v); // XMFLOAT3�� XMVECTOR�� �����ϴ� �Լ�

	os << "(" << dest.x << ", " << dest.y << ", " << dest.z << ") ";
	return os;
}

int main()
{
	cout.setf(ios_base::boolalpha);
	if (!XMVerifyCPUSupport()) // DirectXMath ���̺귯���� ���� �÷����� �����ϴ��� Ȯ��
	{
		cout << "xna math not supported" << '\n';
		return 0;
	}

	XMVECTOR p = XMVectorZero();						// ������ 0�� �����ش�
	XMVECTOR q = XMVectorSplatOne();					// �� (1,1,1,1)�� �����ش�
	XMVECTOR u = XMVectorSet(1.0f, 2.0f, 3.0f, 0.0f);	// ����(x,y,z,w)�� �����ش�
	XMVECTOR v = XMVectorReplicate(-2.0f);				// ����(s,s,s,s)�� �����ش�
	XMVECTOR w = XMVectorSplatZ(u);						// ����(vx,vx,vx,vx)�� �����ش�.

	cout << "p = " << p << '\n';
	cout << "q = " << q << '\n';
	cout << "u = " << u << '\n';
	cout << "v = " << v << '\n';
	cout << "w = " << w << "\n\n";

	XMVECTOR n = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);
	u = XMVectorSet(1.0f, 2.0f, 3.0f, 0.0f);
	v = XMVectorSet(-2.0f, 1.0f, -3.0f, 0.0f);
	w = XMVectorSet(0.707f, 0.707f, 0.0f, 0.0f);

	// ���� ����
	XMVECTOR a = u + v;
	// ���� ����
	XMVECTOR b = u - v;
	// ��Į�� ����
	XMVECTOR c = 10.0f * u;
	// ���� u�� ũ��
	XMVECTOR L = XMVector3Length(u);
	// ���� u�� ���� ����
	XMVECTOR d = XMVector3Normalize(u);
	// ���� u, v�� ����
	XMVECTOR s = XMVector3Dot(u, v);
	// ���� u, v�� ����
	XMVECTOR e = XMVector3Cross(u, v);

	// p�� n�� ���� w�� ��������
	XMVECTOR projW;
	// �� w�߿��� n�� ���� �������� �ۿ��ϴ� �κ�
	XMVECTOR perpW;
	XMVector3ComponentsFromNormal(&projW, &perpW, w, n);

	// projW + perpW == w �ΰ�?
	bool equal = XMVector3Equal(projW + perpW, w) != 0;
	bool notEqual = XMVector3NotEqual(projW + perpW, w) != 0;

	// projW�� perpW ������ ������ �ݵ�� 90���̾�� �Ѵ�. (projW + perpW = W �̱� ����.)
	XMVECTOR angleVec = XMVector3AngleBetweenVectors(projW, perpW);
	float angleRadians = XMVectorGetX(angleVec);
	float angleDegrees = XMConvertToDegrees(angleRadians);

	cout << "u = " << u << '\n';
	cout << "v = " << v << '\n';
	cout << "w = " << w << '\n';
	cout << "n = " << n << '\n';
	cout << "a = u + v = " << a << '\n';
	cout << "b = u - v = " << b << '\n';
	cout << "c = 10 * u = " << c << '\n';
	cout << "d = u / ||u|| = " << d << '\n';
	cout << "s = u . v = " << s << '\n';
	cout << "e = u x v = " << e << '\n';
	cout << "L = ||u|| = " << L << '\n';
	cout << "projW = " << projW << '\n';
	cout << "perpW = " << perpW << '\n';
	cout << "projW + perpW == W = " << equal << '\n';
	cout << "projW + perpW != W = " << notEqual << '\n';
	cout << "angle = " << angleDegrees << '\n';


	return 0;
}