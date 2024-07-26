#include "main.h"

/*int main()
{
	cout.precision(8); // 소수점 8번째 자리까지 출력

	if (!XMVerifyCPUSupport()) // DirectXMath 라이브러리가 현재 플랫폼을 지원하는지 확인
	{
		cout << "xna math not supported" << '\n';
		return 0;
	}

	XMVECTOR u = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f); // (1, 1, 1) 벡터 생성
	XMVECTOR n = XMVector3Normalize(u);				  // u의 단위 벡터

	float LU = XMVectorGetX(XMVector3Length(n));	  // n벡터의 크기

	// 수학적으로 정규화 된 벡터(단위 벡터)는 길이가 정확히 1이어야 한다.
	// 수치적으로도 그럴까?
	cout << LU << '\n';
	if (LU == 1.0f)
		cout << "Length 1" << '\n';
	else
		cout << "Length not 1" << '\n';

	// 1을 임의의 지수로 거듭제곱해도 여전히 1이어야 한다.
	float powLU = powf(LU, 1.0e6f);
	cout << "LU^(10^6) = " << powLU << '\n';

	// 컴퓨터 프로그램 안에서 벡터의 길이는 근사적으로만 1이다.
	// 더 나아가서, 임의의 실수 p에 대해 거듭제곱을 할 경우 오차가 증가 즉, 수치 오차가 누적됨

	// 이러한 부동소수점의 부정확함 때문에,
	// 두 부동소수점 수의 상등을 판정할 때에는 두 수가 '근사적으로' 같은지를 보아야 함
	// XNA Math 라이브러리에는 두 벡터의 상등을 판정하는 XMVector3NearEqual이라는 함수가 있다.

	return 0;
}*/