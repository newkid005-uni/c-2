#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//void shuffle(int array[],int size)
//{
//	for (int i = 0;i < size;i++)
//	{
//		int random = rand() % size;
//
//		int temp = array[random];
//		array[random] = array[i];
//		array[i] = temp;
//	}
//}

int main()
{
#pragma region 의사 난수
	//0 ~ 32767 사이의 난수 값을 반환하는 함수입니다.

	//UTC 기준으로 1970년 1월 1일 0시 0분 0초부터 경과된
	//시간을 초(sec)로 반환하는 함수입니다.

	//srand : rand()가 사용할 초기값(seed)을 설정하는 함수



	//srand(time(NULL));
	//
	//int random = rand() % 10 + 1;
	//
	//printf("random = %d\n", random);


#pragma endregion

#pragma region 셔플 함수

	//srand(time(NULL));
	//
	//int array[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int size = sizeof(array)/sizeof(array[0]);
	//
	//
	//shuffle(array,size);
	//
	//for (int i = 0;i < size;i++)
	//{
	//	printf("%d ", array[i]);
	//}
#pragma endregion

#pragma region UP - DOWN 게임
//	int life = 5;
//	srand(time(NULL));
//	int scan = 0;
//
//	int answer = rand() % 50 + 1;
//
//	while (life >= 1)
//	{
//		for (int i = 0;i < life;i++)
//		{
//			printf("♥");
//		}
//		printf("\n");
//
//		scanf_s("%d", &scan);
//
//		if (scan == answer)
//		{
//			break;
//		}
//		else if (scan < answer)
//		{
//			printf("UP! 컴퓨터가 가지고 있는 값보다 작습니다.\n");
//			life--;
//		}
//		else if (scan > answer)
//		{
//			printf("DOWN! 컴퓨터가 가지고 있는 값보다 큽니다.\n");
//			life--;
//		}
//	}
//
//if (life <= 0)
//{
//	printf("\nDefeat...\n");
//}
//else
//{
//	printf("\nVictory!!!\n");
//}

#pragma endregion


	return 0;
}