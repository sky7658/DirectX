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
	// XM_PIDIV4 = π/4, XM_PIDIV2 = π/2 , XM_PI = π
	XMVECTOR w = XMVectorSet(0.0f, XM_PIDIV4, XM_PIDIV2, XM_PI);

	// 벡터의 각 성분을 절댓값으로 변환
	cout << "XMVectorAbs(v) = " << XMVectorAbs(v) << '\n';
	// 벡터의 각 성분의 코사인값으로 계산
	cout << "XMVectorCos(w) = " << XMVectorCos(w) << '\n';
	// 벡터의 각 성분을 로그2 값으로 계산
	cout << "XMVectorLog(u) = " << XMVectorLog2(u) << '\n';
	// 2를 p의 거듭제곱으로 계산 (ex. p.x = 2.0f -> 2^2 = 4)
	cout << "XMVectorExp(p) = " << XMVectorExp(p) << '\n';

	// u을 p의 거듭제곱으로 계산
	cout << "XMVectorPow(u, p) = " << XMVectorPow(u, p) << '\n';
	// 벡터의 각 성분을 루트 씌운 값으로 계산
	cout << "XMVectorSqrt(u) = " << XMVectorSqrt(u) << '\n';

	// 각 속성을 벡터의 x번째 값으로 표현
	cout << "XMVectorSwizzle(u, 2, 2, 1, 3) = " << XMVectorSwizzle(u, 2, 2, 1, 3) << '\n';
	cout << "XMVectorSwizzle(u, 2, 1, 0, 3) = " << XMVectorSwizzle(u, 2, 1, 0, 3) << '\n';

	// 두 벡터의 곱을 계산
	cout << "XMVectorMultiply(u, v) = " << XMVectorMultiply(u, v) << '\n';
	// 벡터의 각 성분을 0.0f ~ 0.1f 범위로 표현
	cout << "XMVectorSaturate(q) = " << XMVectorSaturate(q) << '\n';
	// 두 벡터의 성분 중 젤 작은 값으로 표현
	cout << "XMVectorMin(p, v) = " << XMVectorMin(p, v) << '\n';
	// 두 벡터의 성분 중 젤 큰 값으로 표현
	cout << "XMVectorMax(p, v) = " << XMVectorMax(p, v) << '\n';

	return 0;
}*/