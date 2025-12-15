#include <stdio.h>

void main()
{

#pragma region 상수연산자

	//1. 변수 = 변수 + 변수

	//2. 변수 = 변수 - 리터럴 상수

	//3. 변수 = 변수 * 심볼릭 상수

	//4. 변수 = 리터럴 상수 / 리터럴 상수

	//5. 변수 = 심볼릭 상수 % 리터럴 상수
	//int storage = 0;
	//
	//int A = 15;
	//const int B = 30;
	//const int C = 3;
	////1
	//storage = A + B;  	
	//printf("A + B = %d\n", storage);
	//
	////2
	//storage = A - 10;
	//printf("A - 10= %d\n", storage);
	//
	////3
	//storage = A * B;
	//printf("A * B = %d\n", storage);
	//
	////4
	//storage = 30 / A;
	//printf("30 / A = %d", storage);
	//
	////5 
	//storage = A % 3;
	//printf("A % 3 = %d", storage);

#pragma endregion

#pragma region 비트
	//데이터를 나타내는 최소의 단위이며, 0 또는 1의
	//조합으로 논리 계산을 수행하는 단위입니다.
#pragma endregion

#pragma region (10)진수를 (2)진수로 변환하는 과정
	//10진수를 1이 될 때까지 계속 2로 나누어 준 다음
	//나눈 위치의 나머지 값을 아래에서 위로 순서대로 정렬합니다.

	// 23 11 5 2 1  - 10111 (2)
	//    1  1 1 0



#pragma endregion

#pragma region (2)진수를 10진수로 변환하는 과정
	//1 byte에 2진수로 저장된 값을 2의 제곱으로 나타냅니다.

	//각각의 비트에 1이 있다면 1과 2의 제곱의 위치를 계산한
	//다음 각각의 비트를 모두 더하여 10진수로 나타냅니다.

#pragma endregion

#pragma region 비트 연산자
	//비트 단위로 논리 연산을 수행하기 위해 사용하는 연산자입니다.
	
#pragma region AND 연산자
	//두 개의 피연산자가 모두 1이면 1을 반환하는 연산자입니다.

	int wisdom = 10;    // 00001010
	int dexterity = 6;	// 00000110

	printf("wisdom & dexterity : %d\n", wisdom & dexterity);
#pragma endregion




#pragma endregion


}