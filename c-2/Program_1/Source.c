#include<stdio.h>
#include<stdlib.h>

void load(const char* filename)
{
	FILE* file = fopen(filename, "r");

	int count = 0;

	int character = '\0'; //EOF의 반환값이 -1이므로 안전하게 int로 정의함

	//파일 포인터를 파일 끝으로 이동시킵니다.
	while ((character = fgetc(file)) != EOF)
	{
		count++;
	}

	//숙제 동적할당해오기

	rewind(file);

	char* buffer;
	buffer = malloc(sizeof(char) * (count + 1));

	//1번 매개변수 : 읽을 데이터를 저장할 메모리 버퍼의 포인터 변수
	//2번 매개변수 : 각 데이터 항목의 크기
	//3번 매개변수 : 테이터를 읽어올 항목의 수
	//4번 매개변수 : 데이터를 읽어올 파일의 포인터 변수
	//fread(&buffer, sizeof(char), sizeof(buffer), file);

	for (int i = 0;i < count;i++)
	{
		buffer[i] = fgetc(file);
	}

	buffer[count] = NULL;

	printf("%s", buffer);

	free(buffer);
	fclose(file);

}

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

	//load("resources/asc.txt");

#pragma endregion


#pragma endregion


	return 0;
}
