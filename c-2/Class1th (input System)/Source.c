#include<stdio.h>
#include<Windows.h>

#define SIZE 10

int main()
{
#pragma region 포인터 배열
	int i = 0;
	const char* arr[SIZE];
	int power = 0;

	arr[0] = "실례합니다.\n";
	arr[1] = "어서오세요. 김씨네 탐정사무소에 오신걸 환영합니다.\n";
	arr[2] = "전에 저희가게에서 도둑이 든 것 같아\n 조사를 부탁드리고 싶어서 왔습니다.\n";
	arr[3] = "그럼 계약서부터 작성할까요? 성함이 어떻게 되시나요?\n";
	arr[4] = "박득춘입니다.\n";
	arr[5] = "네. 박득춘씨 가게위치는 어디인가요?\n";
	arr[6] = "옆블럭의 박가네 국밥입니다.\n";
	arr[7] = "그럼 가게에서 사전조사를 해야겠네요.\n 조사하는데 출장비는 3만원입니다.\n";
	arr[8] = "네? 현수막에 착수비는 무료라고 적혀있던데요?\n";
	arr[9] = "그건 작년까지였어요. 철거비가 비싸더군요.\n";

	//0x0000 : 이전에 누른 적이 없고 호출 시점에도 눌려있지 않은 상태

	//0x0001 : 이전에 누른 적이 있고 호출 시점에는 눌려있지 않은 상태

	//0x8000 : 이전에 누른 적이 없고 호출 시점에는 눌려있는 상태

	//0x8001 : 이전에 누른 적이 있고 호출 시점에도 눌려있는 상태


	while (power == 0)
	{
		if (GetAsyncKeyState(VK_SPACE) & 0x0001)
		{
			if (i % 2 == 0)
			{
				printf("의뢰인 : ");
			}
			else
			{
				printf("탐정 : ");
			}
			printf("%s\n", arr[i]);
			i++;

			//종료스위치
			if (i == SIZE)
			{
				++power;
			}

		}
	}

	printf("대화가 종료되었습니다.\n");


#pragma endregion


	return 0;
}