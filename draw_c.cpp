#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<mmsystem.h>
#pragma comment(lib, "Winmm.lib")
static int SleepTime = 500;
void jump(int l);
void write(int l);
void o_two()
{
    printf("@");
    jump(35);
    // 1 0 1 0 1
    printf("@ @ @");
    jump(18);
    printf("@\n");
}
void init()
{
    printf("开始....");
    getch();
    an:
    system("cls");
    for (int i = 0; i < 60; i++)
    {
        printf("@");
        if (i == 31)
        {
            Sleep(SleepTime);
        }
    }
    printf("\n");

    o_two();
    
    printf("@ A、中速（推荐，间隔为0.5秒）");
    jump(6);
    printf("@ @ @");
    write(19);
    Sleep(SleepTime);
    printf("\n");
    
    o_two();
    
    printf("@ B、快速（间隔为0.1秒）");
    jump(12);
    printf("@ @ @");
    write(19);
    Sleep(SleepTime);
    printf("\n");

    o_two();

    printf("@ C、不显示过程");
    jump(21);
    printf("@ @ @");
    write(19);
    Sleep(SleepTime);
    printf("\n");

    o_two();

    for (int i = 0; i < 60; i++)
    {
        printf("@");
        if (i == 31)
        {
            Sleep(SleepTime);
        }
    }
    printf("\n");
    printf("Answer：");
    std::string answer;
    std::cin>>answer;
    printf("\n");
    if (answer == "A")
    {
        SleepTime = 500;
        printf("已设为中速...");
    }
    else if(answer == "B")
    {
        SleepTime = 100;
        printf("已设为快速...");
    }
    else if(answer == "C")
    {
        SleepTime = 0;
        printf("已设为只看结果...");
    }
    else
    {
        goto an;
    }
    Sleep(SleepTime);
}
void Line()
{
    for (int i = 0; i < 120; i++)
    {
        printf("@");
        if (i == 50)
        {
            Sleep(SleepTime);
        }
    }
}
void o_four()
{
    printf("@ @");
    Sleep(SleepTime);
    for (int i = 0; i < 114; i++)
    {
        printf(" ");
    }
    printf("@ @");
    Sleep(SleepTime);
}
void jump(int l)
{
    for (int i = 0; i < l; i++)
    {
        printf(" ");
    }
    
}
void write(int l)
{
    for (int i = 0; i < l; i++)
    {
        printf("@");
    }
    
}
void jump_pp()
{
    jump(19);
    write(3);
    Sleep(SleepTime);
    jump(30);
    write(3);
    Sleep(SleepTime);
    jump(27);
    printf("@ @\n");
    Sleep(SleepTime);
}
void start()
{
    mciSendString("play Gotrcer-music_01.mp3",NULL,0,NULL);
    //Line: 1
    system("cls");
    Line();
    Sleep(SleepTime);
    printf("\n");
    //Line: 2
    o_four();
    Sleep(SleepTime);
    printf("\n");
    //Line: 3
    Line();
    Sleep(SleepTime);
    printf("\n");
    //Line: 4~8
    for (int i = 0; i < 5; i++)
    {
        o_four();
        printf("\n");
        Sleep(SleepTime);
    }
    //Line: 9
    printf("@ @");
    for (int i = 0; i < 14; i++)
    {
        printf(" ");
    }
    for (int i = 0; i < 15; i++)
    {
        printf("@");
    }
    Sleep(SleepTime);
    for (int i = 0; i < 22; i++)
    {
        printf(" ");
    }
    printf("@@@");
    Sleep(SleepTime);
    for (int i = 0; i < 30; i++)
    {
        printf(" ");
    }
    printf("@@@");
    Sleep(SleepTime);
    for (int i = 0; i < 27; i++)
    {
        printf(" ");
    }
    printf("@ @");
    Sleep(SleepTime);
    printf("\n");
    //Line: 10
    printf("@ @");
    jump(12);
    write(5);
    Sleep(SleepTime);
    jump(7);
    write(8);
    Sleep(SleepTime);
    jump_pp();
    //Line: 11
    printf("@ @");
    jump(9);
    write(5);
    Sleep(SleepTime);
    jump(13);
    write(5);
    Sleep(SleepTime);
    jump_pp();
    //Line: 12
    printf("@ @");
    jump(7);
    write(5);
    Sleep(SleepTime);
    jump(15);
    write(5);
    Sleep(SleepTime);
    jump_pp();
    //Line: 13
    printf("@ @");
    jump(7);
    write(5);
    Sleep(SleepTime);
    jump(27);
    for (int i = 0; i < 2; i++)
    {
        write(14);
        Sleep(SleepTime);
    }
    jump(5);

    for (int i = 0; i < 2; i++)
    {
        write(15);
        Sleep(SleepTime);
    }
    jump(12);
    printf("@ @\n");
    //jump_pp();

    //Line: 14~16

    for (int i = 0; i < 3; i++)
    {
        
        printf("@ @");
        jump(7);
        write(5);
        Sleep(SleepTime);
        jump(39);
        write(3);
        Sleep(SleepTime);
        jump(30);
        write(3);
        Sleep(SleepTime);
        jump(27);

        printf("@ @\n");
        Sleep(SleepTime);
    }

    //Line: 17
    printf("@ @");
    jump(7);
    write(5);
    Sleep(SleepTime);
    jump(20);
    write(2);
    Sleep(SleepTime);
    jump(17);
    write(3);
    Sleep(SleepTime);
    jump(30);
    write(3);
    Sleep(SleepTime);
    jump(27);
    printf("@ @\n");
    Sleep(SleepTime);
    //Line: 18
    printf("@ @");
    jump(9);
    write(5);
    Sleep(SleepTime);
    jump(15);
    write(5);
    Sleep(SleepTime);
    jump(17);
    write(3);
    Sleep(SleepTime);
    jump(30);
    write(3);
    Sleep(SleepTime);
    jump(27);
    printf("@ @\n");
    Sleep(SleepTime);
    //Line: 19
    printf("@ @");
    jump(12);
    write(5);
    Sleep(SleepTime);
    jump(10);
    write(5);
    Sleep(SleepTime);
    jump(2);
    jump(17);
    write(3);
    Sleep(SleepTime);
    jump(30);
    write(3);
    Sleep(SleepTime);
    jump(27);
    printf("@ @\n");
    Sleep(SleepTime);
    //Line: 20
    printf("@ @");
    Sleep(SleepTime);
    jump(14);
    write(15);
    Sleep(SleepTime);
    jump(5);
    jump(17);
    write(3);
    Sleep(SleepTime);
    jump(30);
    write(3);
    Sleep(SleepTime);
    jump(27);
    printf("@ @\n");
    Sleep(SleepTime);
    //Line: 21~27
    for (int i = 0; i < 7; i++)
    {
        o_four();
        printf("\n");
    }
    //Line: 28
    Line();
    printf("\n");
    //Line: 29
    o_four();
    printf("\n");
    //line: 30
    Line();
    Sleep(5000);
    system("cls");
}

void stop()
{
    printf("\n继续....");
    getch();
}

int main(int argc, char const *argv[])
{
    init();
    start();
    stop();
    return 0;
}