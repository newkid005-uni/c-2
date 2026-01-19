#include<stdio.h>
#include<Windows.h>

enum State
{
	//IDLE,
	//ATTACK,
	//DIE

	//열거형은 값을 따로 설정할 수 있으며, 따로 설정된 다음의 값은 그 전의값에서
	//하나 증가된 값으로 설정됩니다.
};

enum Color
{
	BLACK,
	DARKBLUE,
	DARKGREEN,
	DARKSKYBLUE,
	DARKRED,
	DARKVIOLET,
	DARKYELLOW,
	GRAY,
	DARKGRAY,
	BLUE,
	GREEN,
	SKYBLUE,
	RED,
	VIOLET,
	YELLOW,
	WHITE
};

void set(enum State state)
{
	//switch (state)
	//	{
	//	case IDLE: state = IDLE;
	//		printf("지금 상태는 IDLE 입니다.");
	//		break;
	//	case ATTACK: state = ATTACK;
	//		printf("지금 상태는 ATTACK 입니다.");
	//		break;
	//	case DIE: state = DIE;
	//		printf("지금 상태는 DIE 입니다.");
	//		break;
	//	default:
	//		printf("0~2를 입력하세요.");
	//		break;
	//	}
};



int main()
{
#pragma region 열거형
	//관련된 상수의 값을 이름으로 정의한 집합의 자료형입니다.

	//enum State state;
	//state = IDLE;
	//
	//scanf_s("%d", &state);
	//select(state);




#pragma endregion

	//for (int i = 0;i < 16;i++)
	//{
	//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
	//
	//	if (i != 0 && i % 3 == 0)
	//	{
	//		system("pause");
	//	}
	//
	//	printf("color!\n");
	//}





	return 0;
}
