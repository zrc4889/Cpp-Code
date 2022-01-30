#include <bits/stdc++.h>
#include <windows.h>
#pragma comment(lib,"Winmm.lib")
int main()
{
    PlaySound(TEXT("E:\\Wolves.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
    system("pause");
}