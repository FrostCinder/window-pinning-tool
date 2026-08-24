#include <cstdio>
#include <windows.h>
#include <conio.h>
int main()
{
    HWND hwnd1,hwnd;
    char ch;
    hwnd1=GetForegroundWindow();
    SetWindowPos(hwnd1,HWND_TOPMOST,0,0,0,0,SWP_NOMOVE|SWP_NOSIZE);
    printf("1.Top window\n");
    printf("2.Unpin window\n");
    while(1)
    {
        ch=getch();
        if(ch=='1')
        {
            ShowWindow(hwnd1,SW_HIDE);
            Sleep(2700);
            hwnd=GetForegroundWindow();
            SetWindowPos(hwnd,HWND_TOPMOST,0,0,0,0,SWP_NOMOVE|SWP_NOSIZE);
            ShowWindow(hwnd1,SW_RESTORE);
            SetWindowPos(hwnd1,HWND_TOP,0,0,0,0,SWP_NOMOVE|SWP_NOSIZE);

        }
        else if(ch=='2')
        {
            ShowWindow(hwnd1,SW_HIDE);
            Sleep(2700);
            hwnd=GetForegroundWindow();
            SetWindowPos(hwnd,HWND_NOTOPMOST,0,0,0,0,SWP_NOMOVE|SWP_NOSIZE);
            ShowWindow(hwnd1,SW_RESTORE);
            SetWindowPos(hwnd1,HWND_TOP,0,0,0,0,SWP_NOMOVE|SWP_NOSIZE);
        }
    }
}