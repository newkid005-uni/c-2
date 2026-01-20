#include<stdio.h>
#include<windows.h>
#include<conio.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80
#define SIGNAL 224

void position(int x, int y)
{
	COORD position = { x,y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main()
{
	int x = 0;
	int y = 0;
	position(5, 5);
	
	printf("¡Ú");

	while (1)
	{
		

		int key = _getch();
		if (key == SIGNAL || key == 0)
		{
			key = _getch();
		}

		switch (key)
		{
		//case SIGNAL:
		//	break;
		case UP:y--;
			break;
		case LEFT:x -= 2;
			break;
		case DOWN:y++;
			break;
		case RIGHT:x += 2;
			break;
		
		default: printf("exeption\n");
			break;
		}
		system("cls");
		position(x, y);
		
		printf("¡Ú");
	}

	return 0;
}
