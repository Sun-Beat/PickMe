#include <iostream>
#include <windows.h>
#include <conio.h>
#include <mmsystem.h>
#include "console.h"

#pragma comment(lib, "winmm.lib")

using namespace std;

//키보드값
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4

//함수 정의 
void TitleDraw();
void init();
int menuDraw();
int keyControl();



int main()
{
    PlaySound(TEXT("Waterfall.wav"), NULL, SND_ASYNC | SND_LOOP);
    while (1)
    {
        init();
        TitleDraw();
        menuDraw();
        Sleep(1000);
    }

    return 0;
}


void init() {
    system("mode con:cols=120 lines=30 | title Save the Princess");
}

void TitleDraw()
{
    int x = 5, y = 3;

    gotoxy(x, y++); printf("\t\t\t\t  _______  ___   _______  ___   _  __   __  _______ ");
    gotoxy(x, y++); printf("\t\t\t\t |       ||   | |       ||   | | ||  |_|  ||       |");
    gotoxy(x, y++); printf("\t\t\t\t |    _  ||   | |       ||   |_| ||       ||    ___|");
    gotoxy(x, y++); printf("\t\t\t\t |   |_| ||   | |       ||      _||       ||   |___ ");
    gotoxy(x, y++); printf("\t\t\t\t |    ___||   | |      _||     |_ |       ||    ___|");
    gotoxy(x, y++); printf("\t\t\t\t |   |    |   | |     |_ |    _  || ||_|| ||   |___ ");
    gotoxy(x, y++); printf("\t\t\t\t |___|    |___| |_______||___| |_||_|   |_||_______|");
    gotoxy(x, y++);
    gotoxy(x, y++);
    gotoxy(x, y++); printf("\t\t\t\t                 /|  /|  ---------------------------\t");
    gotoxy(x, y++); printf("\t\t\t\t                 ||__||  |                         |\t");
    gotoxy(x, y++); printf("\t\t\t\t                /   O O|__  start the Game Pickme  |\t");
    gotoxy(x, y++); printf("\t\t\t\t               /          |     Do your best       |\t");
    gotoxy(x, y++); printf("\t\t\t\t              /      |     |                       |\t");
    gotoxy(x, y++); printf("\t\t\t\t             /   _    |     | ----------------------\t");
    gotoxy(x, y++); printf("\t\t\t\t            /    ||____|     |       ||\t");
    gotoxy(x, y++); printf("\t\t\t\t           /     | | | ||____/       ||\t");
    gotoxy(x, y++); printf("\t\t\t\t          /       | | | | |/ |     __||\t");
    gotoxy(x, y++); printf("\t\t\t\t         /  /  |   -------  |_____|  ||\t");
    gotoxy(x, y++); printf("\t\t\t\t        /   |   |           |       --|\t");
    gotoxy(x, y++); printf("\t\t\t\t        |   |   |           |_____  --|\t");
    gotoxy(x, y++); printf("\t\t\t\t        |  |_|_|_|          |     |---|\t");


}

void GameRule() {
    system("cls");

    cout << "게임 룰을 설명합니다." << endl;
    cout << "..." << endl;

    cout << "계속하려면 아무 키나 누르세요...";
    _getch(); 
}

int menuDraw()
{
    int x = 55;
    int y = 26;
    int menuIndex = 0;
    string menuItems[2] = { "게 임 시 작", "게 임 정 보" };

    while (1)
    {
        for (int i = 0; i < 2; i++)
        {
            gotoxy(x, y + i);
            if (i == menuIndex)
                cout << "> " << menuItems[i];
            else
                cout << "  " << menuItems[i];
        }

        int n = keyControl();
        switch (n)
        {
        case UP:
            if (menuIndex > 0)
                menuIndex--;
            break;
        case DOWN:
            if (menuIndex < 1)
                menuIndex++;
            break;
        case SUBMIT:
            if (menuIndex == 0)
            {
                //return Function();
            }
            else if (menuIndex == 1)

                Rb
            {
                GameRule();
            }
        }
    }
}

int keyControl()
{
    int temp = _getch();

    if (temp == 0xE0 || temp == 0)
    {
        temp = _getch();
    }

    switch (temp)
    {
    case 72: // VK_UP
        return UP;
    case 80: // VK_DOWN
        return DOWN;
    case 75: // VK_LEFT
        return LEFT;
    case 77: // VK_RIGHT
        return RIGHT;
    case 13: // Space
        return SUBMIT;
    default:
        return 0;
    }
}

