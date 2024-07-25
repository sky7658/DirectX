#include "Example.h"

// 연산자 오버로딩을 통해 FXMVECTOR를 출력
ostream& operator<<(ostream& os, FXMVECTOR v)
{
	XMFLOAT3 dest;			 // XMVECTOR를 저장할 변수
	XMStoreFloat3(&dest, v); // XMFLOAT3에 XMVECTOR를 저장하는 함수

	os << "(" << dest.x << ", " << dest.y << ", " << dest.z << ") ";
	return os;
}

int main()
{
	cout.setf(ios_base::boolalpha);
	if (!XMVerifyCPUSupport()) // DirectXMath 라이브러리가 현재 플랫폼을 지원하는지 확인
	{
		cout << "xna math not supported" << '\n';
		return 0;
	}

	XMVECTOR p = XMVectorZero();						// 영벡터 0을 돌려준다
	XMVECTOR q = XMVectorSplatOne();					// 벡 (1,1,1,1)을 돌려준다
	XMVECTOR u = XMVectorSet(1.0f, 2.0f, 3.0f, 0.0f);	// 벡터(x,y,z,w)를 돌려준다
	XMVECTOR v = XMVectorReplicate(-2.0f);				// 벡터(s,s,s,s)를 돌려준다
	XMVECTOR w = XMVectorSplatZ(u);						// 벡터(vx,vx,vx,vx)를 돌려준다.

	cout << "p = " << p << '\n';
	cout << "q = " << q << '\n';
	cout << "u = " << u << '\n';
	cout << "v = " << v << '\n';
	cout << "w = " << w << "\n\n";

	XMVECTOR n = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);
	u = XMVectorSet(1.0f, 2.0f, 3.0f, 0.0f);
	v = XMVectorSet(-2.0f, 1.0f, -3.0f, 0.0f);
	w = XMVectorSet(0.707f, 0.707f, 0.0f, 0.0f);

	// 벡터 덧셈
	XMVECTOR a = u + v;
	// 벡터 뺄셈
	XMVECTOR b = u - v;
	// 스칼라 곱셈
	XMVECTOR c = 10.0f * u;
	// 벡터 u의 크기
	XMVECTOR L = XMVector3Length(u);
	// 벡터 u의 단위 벡터
	XMVECTOR d = XMVector3Normalize(u);
	// 벡터 u, v의 내적
	XMVECTOR s = XMVector3Dot(u, v);
	// 벡터 u, v의 외적
	XMVECTOR e = XMVector3Cross(u, v);

	// p를 n에 대한 w의 직교투영
	XMVECTOR projW;
	// 힘 w중에서 n의 수직 방향으로 작용하는 부분
	XMVECTOR perpW;
	XMVector3ComponentsFromNormal(&projW, &perpW, w, n);

	// projW + perpW == w 인가?
	bool equal = XMVector3Equal(projW + perpW, w) != 0;
	bool notEqual = XMVector3NotEqual(projW + perpW, w) != 0;

	// projW와 perpW 사이의 각도는 반드시 90도이어야 한다. (projW + perpW = W 이기 때문.)
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