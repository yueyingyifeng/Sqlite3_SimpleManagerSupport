//
// Created by Administrator on 2024/3/15.
// 此文件来自：https://blog.csdn.net/weixin_44816404/article/details/127832362
#include<iostream>
#include<Windows.h>

using std::cout;
using std::cerr;
using std::endl;
using std::string;


/*
	注意：
        设置后，在此之后输出的都将是设置的颜色。
        若再想恢复默认颜色，可通过不传参数执行此方法恢复默认颜色。
*/

/*
    设置字体颜色：
        方法支持15种颜色（请传入相应的英文参数）：
            0、浅白色：littlewhite
            1、红色：red      2、绿色：green     3、蓝色：blue
            4、白色: white    5、天蓝色：skyblue   6、黄色：yellow
            7、粉色: pink
            11、亮红色：lightred      12、亮绿色：lightgreen     13、亮蓝色：lightblue
            14、亮白色: lightwhite    15、亮天蓝色：lightskyblue   16、亮黄色：lightyellow
            17、亮粉色: lightpink
            其它参数或不传参数：默认色(白色)
*/
inline void setTextColor(string color = "white")
{
    //设置Windows控制台打印颜色
    int num = 4;
    if (color == "littlewhite")
    {
        num = 0;
    }
    else if (color == "red")
    {
        num = 1;
    }
    else if (color == "green")
    {
        num = 2;
    }
    else if (color == "blue")
    {
        num = 3;
    }
    else if (color == "white")
    {
        num = 4;
    }
    else if (color == "skyblue")
    {
        num = 5;
    }
    else if (color == "yellow")
    {
        num = 6;
    }
    else if (color == "pink")
    {
        num = 7;
    }
    else if (color == "lightred")
    {
        num = 11;
    }
    else if (color == "lightgreen")
    {
        num = 12;
    }
    else if (color == "lightblue")
    {
        num = 13;
    }
    else if (color == "lightwhite")
    {
        num = 14;
    }
    else if (color == "lightskyblue")
    {
        num = 15;
    }
    else if (color == "lightyellow")
    {
        num = 16;
    }
    else if (color == "lightpink")
    {
        num = 17;
    }
    else
    {
        num = 4;
    }

    switch (num)
    {
        case 0://浅白色
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
            break;
        case 1://红色
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            break;
        case 2://绿色
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            break;
        case 3://蓝色
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
            break;
        case 4://白色
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
            break;
        case 5://天蓝色
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN);
            break;
        case 6://黄色
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_RED);
            break;
        case 7://粉色
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_RED);
            break;
        case 11://增强红色
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
            break;
        case 12://增强绿色
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
            break;
        case 13://增强蓝色
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
            break;
        case 14://增强白色
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
            break;
        case 15://增强天蓝色
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN);
            break;
        case 16://增强黄色
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
            break;
        case 17://增强粉色
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED);
            break;
        default://默认
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
            break;
    }
}

/*
    设置字体背景色：
        方法支持15种颜色（请传入相应的英文参数）：
            0、浅白色：littlewhite
            1、红色：red      2、绿色：green     3、蓝色：blue
            4、白色: white    5、天蓝色：skyblue   6、黄色：yellow
            7、粉色: pink
            11、亮红色：lightred      12、亮绿色：lightgreen     13、亮蓝色：lightblue
            14、亮白色: lightwhite    15、亮天蓝色：lightskyblue   16、亮黄色：lightyellow
            17、亮粉色: lightpink
    注意：背景色一旦设置，就恢复不了原来的黑色字体背景了，除非不设置背景色
*/
inline void setTextBackgroundColor(string color = "white")
{
    //设置Windows控制台打印颜色
    int num = 4;
    if (color == "littlewhite")
    {
        num = 0;
    }
    else if (color == "red")
    {
        num = 1;
    }
    else if (color == "green")
    {
        num = 2;
    }
    else if (color == "blue")
    {
        num = 3;
    }
    else if (color == "white")
    {
        num = 4;
    }
    else if (color == "skyblue")
    {
        num = 5;
    }
    else if (color == "yellow")
    {
        num = 6;
    }
    else if (color == "pink")
    {
        num = 7;
    }
    else if (color == "lightred")
    {
        num = 11;
    }
    else if (color == "lightgreen")
    {
        num = 12;
    }
    else if (color == "lightblue")
    {
        num = 13;
    }
    else if (color == "lightwhite")
    {
        num = 14;
    }
    else if (color == "lightskyblue")
    {
        num = 15;
    }
    else if (color == "lightyellow")
    {
        num = 16;
    }
    else if (color == "lightpink")
    {
        num = 17;
    }
    else
    {
        num = 4;
    }

    switch (num)
    {
        case 0://浅白色
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY);
            break;
        case 1://红色
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED);
            break;
        case 2://绿色
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
            break;
        case 3://蓝色
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE);
            break;
        case 4://白色
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
            break;
        case 5://天蓝色
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE | BACKGROUND_GREEN);
            break;
        case 6://黄色
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN | BACKGROUND_RED);
            break;
        case 7://粉色
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE | BACKGROUND_RED);
            break;
        case 11://增强红色
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_RED);
            break;
        case 12://增强绿色
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_GREEN);
            break;
        case 13://增强蓝色
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_BLUE);
            break;
        case 14://增强白色
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
            break;
        case 15://增强天蓝色
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_BLUE | BACKGROUND_GREEN);
            break;
        case 16://增强黄色
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_RED);
            break;
        case 17://增强粉色
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_BLUE | BACKGROUND_RED);
            break;
        default://默认
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
            break;
    }
}
