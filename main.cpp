#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<conio.h>
#include<string.h>
#include<mmsystem.h>
#pragma comment(lib, "Winmm.lib")
using namespace std;
static int SleepTime = 500;
static int x = 5;
static int y = 1;
static int windowsHeight = 30;
void jump_n(int v)
{
    for (int i = 0; i < v; i++)
    {
        printf("\n");
    }
}
void jump(int v)
{
    for (int i = 0; i < v; i++)
    {
        
        printf(" ");
    }
    
}
void ShowIn(int x,int y)
{
    system("cls");
    if (y <= 3)
    {
        switch (y)
        {
        case 1:
            jump(x-1);
            printf("@@@");
            jump((120 - (x + 2)) - 3);
            printf("@@@\n");
            jump(x - 1);
            printf("@@@");
            jump((120 - (x + 2)) - 3);
            printf(   "@@@\n");
            jump(x - 1);
            printf("@@@");
            jump((120 - (x + 2)) - 3);
            printf(   "@@@\n");
            jump(x);
            printf(   "@\n");
            jump(x-3);
            printf("@@@@@@@\n");
            jump(x);
            printf(   "@\n");
            jump(x-3);
            printf("@@@@@@@\n");
            jump(x-3);
            printf("@     @\n");
            jump(x-3);
            printf("@     @\n");
            jump(x-3);
            printf("@     @\n");
            //jump_n(windowsHeight - y);
            break;
        case 2:
            jump(120 - 3);
            printf("@@@\n");

            jump(x-1);
            printf("@@@");
            jump((120 - (x + 2)) - 3);
            printf("@@@\n");
            jump(x - 1);
            printf("@@@");
            jump((120 - (x + 2)) - 3);
            printf(   "@@@\n");
            jump(x - 1);
            printf("@@@\n");
            //jump((120 - (x + 2)) - 3);
            //printf(   "@@@\n");
            jump(x);
            printf(   "@\n");
            jump(x-3);
            printf("@@@@@@@\n");
            jump(x);
            printf(   "@\n");
            jump(x-3);
            printf("@@@@@@@\n");
            jump(x-3);
            printf("@     @\n");
            jump(x-3);
            printf("@     @\n");
            jump(x-3);
            printf("@     @\n");
            break;
        case 3:
            jump(120 - 3);
            printf("@@@\n");
            jump(120 - 3);
            printf("@@@\n");

            jump(x-1);
            printf("@@@");
            jump((120 - (x + 2)) - 3);
            printf("@@@\n");
            jump(x - 1);
            printf("@@@\n");
            //jump((120 - (x + 2)) - 3);
            //printf(   "@@@\n");
            jump(x - 1);
            printf("@@@\n");
            //jump((120 - (x + 2)) - 3);
            //printf(   "@@@\n");
            jump(x);
            printf(   "@\n");
            jump(x-3);
            printf("@@@@@@@\n");
            jump(x);
            printf(   "@\n");
            jump(x-3);
            printf("@@@@@@@\n");
            jump(x-3);
            printf("@     @\n");
            jump(x-3);
            printf("@     @\n");
            jump(x-3);
            printf("@     @\n");
            break;
        default:
            break;
        }
    }
    else
    {
    jump(120 - 3);
    printf("@@@\n");
    jump(120 - 3);
    printf("@@@\n");
    jump(120 - 3);
    printf("@@@\n");
    //jump_n(y - 1);
    jump_n(y - 1 - 3);
    jump(x - 1);
    printf(   "@@@\n");
    jump(x - 1);
    printf(   "@@@\n");
    jump(x - 1);
    printf(   "@@@\n");
    jump(x);
     printf(   "@\n");
    jump(x-3);
     printf("@@@@@@@\n");
    jump(x);
     printf(   "@\n");
     jump(x-3);
     printf("@@@@@@@\n");
     jump(x-3);
     printf("@     @\n");
     jump(x-3);
     printf("@     @\n");
     jump(x-3);
     printf("@     @\n");
    //jump_n(windowsHeight - y);
    if (y == 19 || y == 20)
    {
        for (int i = 0; i < 120; i++)
        {
            printf("@");
        }
        
    }
    
    }
}
void init(const char *color)
{
    getch();
    printf("?????????w,a,s,d???????????????...");
    Sleep(1500);
    printf("\n??????...");
    mciSendString("play Gotrcer-music_01.mp3",NULL,0,NULL);
    getch();
    system(color);
}
void run()
{
    main:
        ShowIn(x,y);
        char keyyy = getch();

        if (keyyy == 'W' || keyyy == 'w')
        {
            if (!(y == 1))//???????????????????????????
            {
                if (!((x == 120 - (1 + 3)) && y == 4))//???????????????????????? ????????????
                {
                    y -= 1;
                }
            }
            
            
            //printf("??????");
        }
        else if(keyyy == 'S' || keyyy == 's')
        {
            if ((y != 30 - 10))
            {
                y += 1;
            }
            //printf("??????");
        }
        else if(keyyy == 'A' || keyyy == 'a')
        {
            if ((x != 3))
            {
                 x -= 1;
            }
            //printf("??????");
        }
        else if(keyyy == 'D' || keyyy == 'd')
        {
            if (!((x == (120 - (3 + 2)) && y <= 3))) // ????????????????????? ????????????
            {
                if (!(x == 120 - (1 + 3)))//????????????????????????(120)
                {
                    x += 1;
                }
            }
            
            //printf("??????"); 
        }
        goto main;
}
void stop()
{
    printf("??????...");
    getch();
}
int main(int argc, char const *argv[])
{
    init("color 70");
    run();
    stop();
    return 0;
}
