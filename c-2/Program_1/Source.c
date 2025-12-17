#include <stdio.h>

void main()
{
#pragma region 조건문
	//어떤 조건이 주어질 때 해당 조건에 따라 동작을
	//수행하도록 실행하는 명령문입니다.

#pragma region 관계 연산자
	//두 개의 피연산자의 값을 비교하여 그 결과를 0 또는
	//1이라는 값으로 나타내는 연산자입니다.

	//int accuracy = 10;
	//int attack = 20;
	//
	//printf("accuracy < attack : %d\n", accuracy < attack);
	//
	//printf("10 < 20 : %d\n", 10 < 20);
	//
	//printf("10 > 20 : %d\n", 10 > 20);
	//
	//printf("20 <= 30 : %d\n", 20 <= 30);
	//
	//printf("30 >= 20 : %d\n", 30 >= 20);
	//
	//printf("10 != 20 : %d\n", 10 != 20);
	//
	//printf("10 == 20 : %d\n", 10 == 20);

	//관계 연산자는 조건이 맞을 때 1이라는 값으로 반환되며,
	//조건이 틀릴 때 0이라는 값으로 반환됩니다.

#pragma endregion

#pragma region if문
	//어떤 특정한 조건을 비교하여 조건이 맞다면 실행되는
	//명령문입니다.

	//int health = 0;
	//if (health <= 0)
	//{
	//	printf("Destroy");
	//}

	//if문은 조건이 1일 때 실행되며, 0일 때 실행되지 않습니다.


#pragma endregion

#pragma region else if문
	//if문의 조건이 틀릴 때 else if문의 조건이
	//맞다면 실행되는 명령문입니다.

	//int level = 10;
	//if (level >= 20)
	//{
	//	printf("2차전직 가이드 팝업");
	//}
	//else if (level < 20)
	//{
	//	printf("사냥터제시 팝업");
	//}

	//else if문은 여러번 정의할 수 있으며, if문이
	//존재할 때 사용할 수 있습니다.

#pragma endregion

#pragma region else문
	//if문과 else if문의 조건이 다 틀리면
	//실행되는 명령문입니다.

	//int integer = 0;
	//
	//if (integer > 0)
	//{
	//	printf("양수입니다.");
	//}
	//else if (integer < 0)
	//{
	//	printf("음수입니다.");
	//}
	//else
	//{
	//	printf("0입니다.");
	//}

	//if문에 연결된 모든 조건문의 조건이 맞을 때
	//가장 위에 있는 조건문만 실행됩니다.

#pragma endregion

#pragma region switch문
	//어떤 결과에 따라 그 결과부터 실행되는 명령문입니다.

	//char grade = 'k';
	//
	////switch문은 해당 조건이 완료되었을 때, break문이 없으면
	////나머지 밑에 있는 case문까지 계속 실행시키다 종료합니다.
	//
	//switch (grade)
	//{
	//case 'A':  printf("100 ~ 90\n"); break; 
	//case 'B':  printf("89 ~ 80\n"); break;
	//case 'C':  printf("79 ~ 70\n"); break;
	//case 'D':  printf("69 ~ 60\n"); break;
	//case 'F':  printf("59 이하\n"); break;
	//default: printf("exception\n"); break;
	//}

	//switch문의 경우 조건에 해당하는 값에 따라 조건의
	//위치로 이동합니다.
#pragma endregion

#pragma region 논리 연산자

#pragma region AND 연산자
//두 개의 조건이 다 성립될 때 실행되는 연산자입니다.
//int a = 10, b = 10;
//
//if(a > 0 && b > 0)
//{
//	printf("참입니다.");
//}
//else
//{
//	printf("거짓입니다.");
//}

//조건문에서 하나 이상의 조건이 있다면 왼쪽부터 조건을 검사합니다.

#pragma endregion

#pragma region OR 연산자
//두 개의 조건 중에서 하나라도 조건이 성립될 때 실행되는 연산자입니다.

//int a = 10, b = 20;
//
//if (a >= 0 || b <= 0)
//{
//	printf("참입니다.");
//}
//else
//{
//	printf("거짓입니다.");
//}

// 조건문의 논리 표현식을 평가하는 도중에 결과가 이미 확정이 났다면, 그 이후의 평가는 생략합니다.

#pragma endregion

#pragma region NOT 연산자
//하나의 조건을 반전시키는 연산자입니다.

//int power = 0;
//
//
//if (!power)
//{
//	printf("the power is on");
//}
//else
//{
//	printf("the power is off");
//}

#pragma endregion


#pragma endregion

#pragma region 사분면
int X = 0;
int Y = 0;

if (X > 0 && Y > 0)
{
	printf("제 1 사분면");
}
else if (X < 0 && Y > 0)
{
	printf("제 2 사분면");
}
else if (X < 0 && Y < 0)
{
	printf("제 3 사분면");
}
else if (X > 0 && Y < 0)
{
	printf("제 4 사분면");
}
else if (X == 0 && Y < 0 || Y > 0)
{
	printf("Y 절편");
}
else if (Y == 0 && X < 0 || X > 0)
{
	printf("X 절편");
}
else
{
	printf("원점");
}

#pragma endregion


#pragma endregion

}