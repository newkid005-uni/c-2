#include<stdio.h>
#define SIZE 1000

int main()
{
#pragma region 파일 입출력

#pragma region 파일 쓰기
	//첫 번째 매개변수 (파일의 이름)
	//두 번째 매개변수 (파일의 입출력 모드)
	//FILE* file = fopen("data.txt","w");
	//
	//fputs("Character Information\n\n", file);
	//
	//fputs("Health : \n", file);
	//fputs("Attack : \n", file);
	//fputs("Defense : \n", file);
	//
	//fclose(file);
	//작성내용은 덮어써진다.

#pragma endregion

#pragma region 파일 읽기
	FILE* file = fopen("data.txt", "r");

	int count = 0;
	char character = NULL;
	
	
	

	//파일 포인터를 파일 끝으로 이동시킵니다.
	while ((character = fgetc(file)) != EOF)
	{
		count++;
	}

	printf("%d\n", count);
	//숙제 동적할당해오기
	char buffer[] = {0,};

	//1번 매개변수 : 읽을 데이터를 저장할 메모리 버퍼의 포인터 변수
	//2번 매개변수 : 각 데이터 항목의 크기
	//3번 매개변수 : 테이터를 읽어올 항목의 수
	//4번 매개변수 : 데이터를 읽어올 파일의 포인터 변수
	//fread(buffer, sizeof(char), sizeof(buffer), file);


	printf("%s", buffer);

	fclose(file);

#pragma endregion



#pragma endregion


	return 0;
}