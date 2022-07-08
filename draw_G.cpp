#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "graphics.h"
#include "easyx.h"
//#pragma comment(lib, "Winmm.lib")
using namespace std;
void startVideo()
{
    int SleepTime = 500;
    //Line: 1
    for (int i = 0; i < 11; i++)
    {
        printf("\n");
    }
    for (int i = 0; i < 12; i++)
    {
        printf(" ");
    }
    for (int i = 0; i < 3; i++)
    {
        printf("o");
        Sleep(SleepTime);
    }
    printf("\n");
    for (int i = 0; i < 11; i++)
    {
        printf(" ");
    }
    for (int i = 0; i < 2; i++)
    {
        printf("o");
        Sleep(SleepTime);
    }
    printf(" ");
    for (int i = 0; i < 2; i++)
    {
        printf("o");
        Sleep(SleepTime);
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf(" ");
        }
        for (int i = 0; i < 2; i++)
        {
            printf("o");
            Sleep(SleepTime);
        }
        printf("\n");
    }
    for (int i = 0; i < 10; i++)
    {
        printf(" ");
    }
    for (int i = 0; i < 2; i++)
    {
        printf("o");
        Sleep(SleepTime);
    }
    printf(" ");
    for (int i = 0; i < 4; i++)
    {
        printf("o");
        Sleep(SleepTime);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf(" ");
    }
    for (int i = 0; i < 2; i++)
    {
        printf("o");
    }
    for (int i = 0; i < 2; i++)
    {
        printf(" ");
    }
    for (int i = 0; i < 2; i++)
    {
        printf("o");
        Sleep(SleepTime);
    }
    printf("\n");
    for (int i = 0; i < 11; i++)
    {
        printf(" ");
    }
    for (int i = 0; i < 2; i++)
    {
        printf("o");
        Sleep(SleepTime);
    }
    printf(" ");
    for (int i = 0; i < 2; i++)
    {
        printf("o");
    }
    printf("\n");
    for (int i = 0; i < 12; i++)
    {
        printf(" ");
    }
    for (int i = 0; i < 3; i++)
    {
        printf("o");
        Sleep(SleepTime);
    }
    Sleep(3000);
}
int main()
{
    //mciSendString("play Gotrcer-music_01.mp3",NULL,0,NULL);
    startVideo();
}