#include <bits/stdc++.h>
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include <conio.h>
using namespace std;
int hh = 0, jj = 0, kk = 0, dd = 0, pp = 0, icp = 0, abcd = 0;
int key = 0, ktk = 0, tkt = 0, ttt = 0;
<<<<<<< HEAD
int na; 
=======
int na;
>>>>>>> 0e9d35f40819b12011289380e292b7345cbb7300
char xy[1005][1005];
int h, p, l, t;
int pan = 0, bigger;
struct ppp
{
    int xu, mn, gn, du, fe, ja;
} py;
void draw();
void delay(int s)
{ // ���뼶��ʱ(AT89C52 @ 11.0592MHz)
    int ti;
    while (s--)
    {
        for (ti = 0; ti < 10000; ti++)
        {
        } // 112
    }
}
void sa(int a);
void goto_xy(int x, int y)
{ //��λ���λ�õ�ָ������
    HANDLE hOut;
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = {x, y};
    SetConsoleCursorPosition(hOut, pos);
}
bool jjj(int x, int y, int a, int b, int c, int d)
{
    HANDLE handle_out = GetStdHandle(STD_OUTPUT_HANDLE); //��ñ�׼����豸���
    CONSOLE_SCREEN_BUFFER_INFO csbi;                     //���崰�ڻ�������Ϣ�ṹ��
    SMALL_RECT scroll;                                   //�����ƶ�����
    COORD pos = {x, y};                                  //�ƶ�λ��
    CHAR_INFO chFill;                                    //��������ַ�
    GetConsoleScreenBufferInfo(handle_out, &csbi);       //��ô��ڻ�������Ϣ
    //��������ַ��ĸ�������������
    chFill.Char.AsciiChar = '*';
    chFill.Attributes = csbi.wAttributes;
    //ѡ������
    scroll.Left = a;
    scroll.Top = c;
    scroll.Right = b;
    scroll.Bottom = d;
    ScrollConsoleScreenBuffer(handle_out, &scroll, NULL, pos, &chFill);
}
void keyDown()
{
    int n;
    srand((unsigned)time(NULL));
    if (_kbhit())
    {                  //����û������˼����е�ĳ����
        fflush(stdin); //��ջ��������ַ�
        // getch()��ȡ�������ʱ�򣬻᷵�����Σ��ڶ��ε��÷��صĲ���ʵ��ֵ
        key = _getch(); //��һ�ε��÷��صĲ���ʵ��ֵ
        key = _getch(); //�ڶ��ε��÷���ʵ��ֵ
    }
    if (key == 0)
        return;
    if (key == 75)
        h--; //����
    if (key == 77)
        h++; //����
    if (key == 72)
        p--; //����
    if (key == 80)
        p++; //����
    if (key == 13 && py.ja == 3)
        abcd = 0;
    p %= bigger;
    if (p < 0)
        p += bigger;
    h %= bigger;
    if (h < 0)
        h += bigger;
    if (key != 0)
    {
        n = rand();
        sa(n);
        // cout<<h<<" "<<p<<" "<<l<<" "<<t<<" "<<xy[p][h]<<endl;
        // system("pause");
        if (xy[p][h] == 'J')
        {
            pan = 1;
            xy[p][h] = '@';
        }
        if (xy[p][h] == 'K')
        {
            pan = 2;
            xy[p][h] = '@';
        }
        if (xy[p][h] == 'S')
        {
            pan = 3;
            xy[p][h] = '@';
        }
        if (xy[p][h] == 'G')
        {
            pan = 4;
            xy[p][h] = '@';
        }
        if (xy[p][h] == 'P')
        {
            pan = 5;
            xy[p][h] = '@';
        }
        if (xy[p][h] == 'H')
        {
            pan = 6;
            xy[p][h] = '@';
        }
    }
    key = 0;
    jjj(h, p, l, l, t, t);
    xy[t][l] = '*';
    xy[p][h] = '@';
    if (t == 0 && l == 0 && (p != 0 || h != 0))
    {
        xy[0][0] = 'H';
        draw();
    }
    return;
}
int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0;
void sa(int a)
{
    int x, y;
    srand((unsigned)time(NULL));
    if (a % (31 - 5 * na) == 0 && a1 == 0)
    {
        x = rand() % bigger;
        y = rand() % bigger;
        while (xy[x][y] != '*')
        {
            x = rand() % bigger;
            y = rand() % bigger;
        }
        goto_xy(y, x);
        cout << "K" << endl;
        xy[x][y] = 'K';
        a1++;
        goto_xy(0, bigger + 2);
    }
    if (a % (23 - 5 * na) == 0 && a2 == 0)
    {
        x = rand() % bigger;
        y = rand() % bigger;
        while (xy[x][y] != '*')
        {
            x = rand() % bigger;
            y = rand() % bigger;
        }
        goto_xy(y, x);
        cout << "G" << endl;
        xy[x][y] = 'G';
        goto_xy(0, bigger + 2);
        a2++;
    }
    if (a % (27 - 5 * na) == 0 && a3 == 0)
    {
        x = rand() % bigger;
        y = rand() % bigger;
        while (xy[x][y] != '*')
        {
            x = rand() % bigger;
            y = rand() % bigger;
        }
        goto_xy(y, x);
        cout << "S" << endl;
        xy[x][y] = 'S';
        goto_xy(0, bigger + 2);
        a3++;
    }
    if (a % (47 - 5 * na) == 0 && a4 == 0)
    {
        x = rand() % bigger;
        y = rand() % bigger;
        while (xy[x][y] != '*')
        {
            x = rand() % bigger;
            y = rand() % bigger;
        }
        goto_xy(y, x);
        cout << "J" << endl;
        xy[x][y] = 'J';
        goto_xy(0, bigger + 2);
        a4++;
    }
    if (a % (40 - 5 * na) == 0 && a5 == 0)
    {
        x = rand() % bigger;
        y = rand() % bigger;
        while (xy[x][y] != '*')
        {
            x = rand() % bigger;
            y = rand() % bigger;
        }
        goto_xy(y, x);
        cout << "P" << endl;
        xy[x][y] = 'P';
        goto_xy(0, bigger + 2);
        a5++;
    }
    if (a1 == 0 && a2 == 0 && a3 == 0 && a4 == 0 && a5 == 0)
    {
        a = rand() % 5;
        if (a == 0)
        {
            x = rand() % bigger;
            y = rand() % bigger;
            while (xy[x][y] != '*')
            {
                x = rand() % bigger;
                y = rand() % bigger;
            }
            goto_xy(y, x);
            cout << "K" << endl;
            xy[x][y] = 'K';
            a1++;
            goto_xy(0, bigger + 2);
        }
        if (a == 1)
        {
            x = rand() % bigger;
            y = rand() % bigger;
            while (xy[x][y] != '*')
            {
                x = rand() % bigger;
                y = rand() % bigger;
            }
            goto_xy(y, x);
            cout << "G" << endl;
            xy[x][y] = 'G';
            goto_xy(0, bigger + 2);
            a2++;
        }
        if (a == 2)
        {
            x = rand() % bigger;
            y = rand() % bigger;
            while (xy[x][y] != '*')
            {
                x = rand() % bigger;
                y = rand() % bigger;
            }
            goto_xy(y, x);
            cout << "S" << endl;
            xy[x][y] = 'S';
            goto_xy(0, bigger + 2);
            a3++;
        }
        if (a == 3)
        {
            x = rand() % bigger;
            y = rand() % bigger;
            while (xy[x][y] != '*')
            {
                x = rand() % bigger;
                y = rand() % bigger;
            }
            goto_xy(y, x);
            cout << "J" << endl;
            xy[x][y] = 'J';
            goto_xy(0, bigger + 2);
            a4++;
        }
        if (a == 5)
        {
            x = rand() % bigger;
            y = rand() % bigger;
            while (xy[x][y] != '*')
            {
                x = rand() % bigger;
                y = rand() % bigger;
            }
            goto_xy(y, x);
            cout << "P" << endl;
            xy[x][y] = 'P';
            goto_xy(0, bigger + 2);
            a5++;
        }
    }
}
void draw()
{
    system("cls");
    goto_xy(0, 0);
    for (int i = 0; i < bigger; i++)
    {
        for (int j = 0; j < bigger; j++)
        {
            printf("%c", xy[i][j]);
            if (j == bigger - 1)
                printf("\n");
        }
    }
    cout << "������" << py.gn << " "
         << "������" << py.fe << " "
         << "ѫ������" << py.ja;
    cout << " Ѫ����" << py.xu << " Ǯ����" << py.mn << " ����ʣ�" << 100 / py.du << "%" << endl;
    cout << "����� ��ͣ/���� �밴Enter����������һЩ������Ҳ�У�������Enter) ";
    if (py.ja == 3)
        cout << "������Enter��ʤ" << endl;
    else
        cout << endl;
}
int abc = 0;
void kuang(int a)
{
    int ba;
    goto_xy(0, bigger + 2);
    cout << "1.��ը���䣨�ױ��ң�" << endl;
    cout << "2.�ò����ڣ�Ǯ�٣�" << endl;
    cin >> ba;
    if (ba == 1)
    {
        py.mn += max(15, 20 + 5 * na);
        if (a % (40 + 5 * na) == 0)
        {
            if (a % 117 == 0)
            {
                cout << "�㱻������" << endl;
                pan = 101;
                return;
            }
            cout << "�㱻������" << endl;
            py.fe = 0;
            py.xu -= 10;
            abc = 0;
        }
        abc++;
        if (abc == 10)
        {
            system("color 9D");
            cout << "��ϲ����¸�ѫ��" << endl;
            py.ja++;
            py.mn += 200;
            py.xu += 25;
        }
    }
    else
    {
        abc = 0;
        py.mn += max(5, 10 + 5 * na);
        if (a % (80 + 5 * na) == 0)
        {
            if (a % 237 == 0)
            {
                cout << "�㱻������" << endl;
                return;
            }
            cout << "�㱻������" << endl;
            py.fe = 0;
            py.xu -= 10;
        }
    }
    system("pause");
    draw();
}
int ppt = 0;
void guai(int a)
{
    system("cls");
    goto_xy(0, 0);
    int c, b;
    cout << "������" << py.gn << " "
         << "������" << py.fe << " "
         << "ѫ������" << py.ja;
    cout << " Ѫ����" << py.xu << " Ǯ����" << py.mn << " ����ʣ�" << 100 / py.du << "%" << endl;
    int go, fa, bi, qi, jg, po = 0, xe;
    srand((unsigned)time(NULL));
    b = a % 15;
    if (ttt == 1)
    {
        b = 14;
        ttt = 0;
    }
    if (0 <= b && b < 5)
    {
        xe = 25;
        go = 10 - na;
        fa = 3;
        bi = 12;
        qi = 30;
        jg = 5;
        cout << "��������С����" << endl;
    }
    else
    {
        if (5 <= b && b < 9)
        {
            xe = 50;
            go = 17 - 2 * na;
            fa = 5 - na;
            bi = 9;
            qi = 75;
            jg = 10;
            cout << "�������˾�Ӣ��" << endl;
        }
        else
        {
            if (9 <= b && b < 12)
            {
                xe = 75 - na;
                go = 35 - 2 * na;
                fa = 10 - 3 * na;
                bi = 6;
                qi = 120;
                jg = 16;
                cout << "�������˿�������" << endl;
            }
            else
            {
                if (12 <= b && b < 14)
                {
                    xe = 100 - 2 * na;
                    go = 80 - 3 * na;
                    fa = 30 - 4 * na;
                    bi = max(2, 4 + na);
                    qi = 200;
                    jg = 32;
                    cout << "��������������" << endl;
                }
                else
                {
                    if (b == 14)
                    {
                        po = 1;
                        xe = (250 - 3 * na);
                        go = 200 - 4 * na;
                        fa = (70 - 5 * na);
                        bi = max(2, 2 + na);
                        qi = 390;
                        jg = 200;
                        cout << "��������ѫ��ħ��" << endl;
                        if (ppt == 0)
                            cout << "ѫ�����⼼�ܣ����ӷ���" << endl;
                        if (ppt == 1)
                            po = 0;
                    }
                }
            }
        }
    }
    cout << "�Է�������" << go << " "
         << "������" << fa << " "
         << "ѫ������" << po << " ��ǿ������" << jg;
    cout << " Ѫ����" << xe << " ����Ǯ����" << qi << " ����ʣ�" << 100 / bi << "%" << endl;
    cout << endl;
    cout << "1.ֱ�Ӹ�" << endl;
    cout << "2.��������ҩˮ(  $20)��ս" << endl;
    cout << "3.���򳬼�����ҩˮ(  $300)��ս" << endl;
    cout << "4.����" << endl;
    cin >> c;
    if (c == 2)
    {
        if (py.mn < 20)
        {
            cout << "ûǮ������" << endl;
            delay(20000);
            system("cls");
            draw();
            return;
        }
        py.mn -= 20;
        go -= 2 * b;
        xe -= b * 2;
        fa -= b / 2;
    }
    if (c == 3)
    {
        if (py.mn < 300)
        {
            cout << "ûǮ������" << endl;
            delay(20000);
            system("cls");
            draw();
            return;
        }
        py.mn -= 300;
        go -= 10 * b;
        xe = max(xe - b * 10, 1);
        fa = max(fa - b * 5, 0);
        bi += 2;
    }
    if (c == 4)
    {
        draw();
        return;
    }
    int op = rand();
    for (int i = 1; i >= 0; i++)
    {
        cout << "Round" << i << endl
             << endl;
        if (op % 2 == 0)
        {
            if (po == 0)
            {
                cout << "���޷�������" << endl;
                a = rand();
                if (a % py.du == 0)
                {
                    cout << "��ɹ�����˹�����" << endl
                         << endl;
                }
                else
                {
                    cout << "�㱻�����ˣ�" << endl;
                    py.xu = py.xu - max(go - py.fe, 0);
                    cout << "�����" << max(go - py.fe, 0) << "��" << endl
                         << endl;
                    py.fe = max(0, py.fe - go / 2);
                }
            }
            else
            {
                cout << "���޷�������" << endl;
                a = rand();
                if (a % (py.du + 2) == 0)
                {
                    cout << "��ɹ�����˹�����" << endl
                         << endl;
                }
                else
                {
                    cout << "�㱻�����ˣ�" << endl;
                    py.xu = py.xu - go;
                    cout << "�����" << go << "��" << endl
                         << endl;
                    py.fe = max(0, py.fe - go / 2);
                }
            }
            delay(1000);
            cout << "�㷢������" << endl;
            a = rand();
            if (a % bi == 0)
            {
                cout << "���޶�����㹥����" << endl
                     << endl;
            }
            else
            {
                a = rand();
                cout << "���ޱ������ˣ�" << endl;
                if (a % (5 - na - tkt) == 0)
                {
                    cout << "�������ŭ��" << endl;
                    if (ktk == 0)
                    {
                        xe = xe - max(2 * py.gn - fa, 0);
                        cout << "���޿���" << max(2 * py.gn - fa, 0) << "��" << endl
                             << endl;
                    }
                    else
                    {
                        xe = xe - 2 * py.gn;
                        cout << "���޿���" << 2 * py.gn << "��" << endl
                             << endl;
                    }
                    fa = max(0, fa - py.gn);
                }
                else
                {
                    if (ktk == 0)
                    {
                        xe = xe - max(py.gn - fa, 0);
                        cout << "���޿���" << max(py.gn - fa, 0) << "��" << endl
                             << endl;
                    }
                    else
                    {
                        xe = xe - py.gn;
                        cout << "���޿���" << py.gn << "��" << endl
                             << endl;
                    }
                    fa = max(0, fa - py.gn / 2);
                }
            }
        }
        else
        {
            cout << "�㷢������" << endl;
            a = rand();
            if (a % bi == 0)
            {
                cout << "���޶�����㹥����" << endl
                     << endl;
            }
            else
            {
                a = rand();
                cout << "���ޱ������ˣ�" << endl;
                if (a % (5 - na) == 0)
                {
                    cout << "�������ŭ��" << endl;
                    if (ktk == 0)
                    {
                        xe = xe - max(2 * py.gn - fa, 0);
                        cout << "���޿���" << max(2 * py.gn - fa, 0) << "��" << endl
                             << endl;
                    }
                    else
                    {
                        xe = xe - 2 * py.gn;
                        cout << "���޿���" << 2 * py.gn << "��" << endl
                             << endl;
                    }
                    fa = max(0, fa - py.gn);
                }
                else
                {
                    if (ktk == 0)
                    {
                        xe = xe - max(py.gn - fa, 0);
                        cout << "���޿���" << max(py.gn - fa, 0) << "��" << endl
                             << endl;
                    }
                    else
                    {
                        xe = xe - py.gn;
                        cout << "���޿���" << py.gn << "��" << endl
                             << endl;
                    }
                    fa = max(0, fa - py.gn / 2);
                }
            }
            delay(1000);
            if (po == 0)
            {
                cout << "���޷�������" << endl;
                a = rand();
                if (a % py.du == 0)
                {
                    cout << "��ɹ�����˹�����" << endl
                         << endl;
                }
                else
                {
                    cout << "�㱻�����ˣ�" << endl;
                    py.xu = py.xu - max(go - py.fe, 0);
                    cout << "�����" << max(go - py.fe, 0) << "��" << endl
                         << endl;
                    py.fe = max(0, py.fe - go / 2);
                }
            }
            else
            {
                cout << "���޷�������" << endl;
                a = rand();
                if (a % (py.du + 2) == 0)
                {
                    cout << "��ɹ�����˹�����" << endl
                         << endl;
                }
                else
                {
                    cout << "�㱻�����ˣ�" << endl;
                    py.xu = py.xu - go;
                    cout << "�����" << go << "��" << endl
                         << endl;
                    py.fe = max(0, py.fe - go / 2);
                }
            }
        }
        op++;
        system("pause");
        system("cls");
        cout << "�Է�������" << go << " "
             << "������" << fa << " Ѫ����" << xe << endl;
        cout << "�㹥����" << py.gn << " "
             << "������" << py.fe << " Ѫ����" << py.xu << endl;
        if (py.xu <= go && xe > 0 && py.xu > 0)
        {
            cout << "��Ѫ�������ˣ�������?" << endl;
            cout << "1.����" << endl;
            cout << "2.����" << endl;
            cin >> c;
            if (c == 2)
            {
                draw();
                return;
            }
        }
        if (xe <= 0)
        {
            cout << "��ɱ���˹���" << endl
                 << endl;
            py.mn += qi;
            py.gn += jg;
            py.xu = max(1, py.xu);
            if (po > 0)
            {
                system("color 5F");
                cout << "��ϲ��������ѫ�£�" << endl;
                py.ja++;
                ppt = 1;
            }
            delay(20000);
            draw();
            return;
        }
        if (py.xu <= 0)
        {
            cout << "�㱻ɱ����" << endl;
            pan = 101;
            delay(20000);
            draw();
            return;
        }
    }
}
void shang()
{
    int c;
    system("cls");
    goto_xy(0, 0);
    cout << "Ǯ��:" << py.mn << endl;
    cout << "��ӭ�����̳�(����һ��)" << endl;
    cout << "1.��ͨ��ҩˮ($  " << 10 - 2 * na << ",+5)" << endl;
    cout << endl;
    cout << "2.�߼���ҩˮ(  $" << 18 - 3 * na << ",+10)" << endl;
    cout << endl;
    cout << "3.����ħƿ+ʹѪ����������($  " << 60 - 5 * na << ",55)" << endl;
    cout << endl;
    cout << "4.�����(  $" << 30 - 5 * na << ",+10g)" << endl;
    cout << endl;

    if (hh == 0)
    {
        cout << "5.����ʥ��֮�ӹ�ľħ��($  " << 130 - 5 * na << ",+75g)" << endl;
        cout << endl;
    }
    if (jj == 0)
    {
        cout << "6.����ʥ��֮ħ��ʯ(  $" << 130 - 5 * na << ",+90,+50f)" << endl;
        cout << endl;
    }
    if (kk == 0)
    {
        cout << "7.����ʥ��֮������($  " << 130 - 5 * na << ",-4b,+20f)" << endl;
        cout << endl;
    }
    cout << "8.����ҩˮ(  $" << 40 - 5 * na << ",+20f)" << endl;
    cout << endl;
    cout << "9.���ҩˮ($  " << 60 - 5 * na << ",-2b)" << endl;
    cout << endl;
    cout << "10.������ҩˮ+ʹѪ����������(  $" << 120 - 5 * na << ",+120)" << endl;
    cout << "������ֵ����" << endl;
    cout << endl;
    cout << "�Ƹ�ѫ��:����Ʒ(��Ҫ��������ʥ��)" << endl;
    cin >> c;
    if (c == 1)
    {
        if (py.mn < 10 - 2 * na)
        {
            cout << "ûǮ������" << endl;
            delay(20000);
            system("cls");
            draw();
            return;
        }
        py.mn = py.mn - (10 - 2 * na);
        if (pp == 0)
            py.xu = min(50, py.xu + 5);
        else
            py.xu += 5;
    }
    if (c == 2)
    {
        if (py.mn < 18 - 3 * na)
        {
            cout << "ûǮ������" << endl;
            // pan=101;
            delay(20000);
            system("cls");
            draw();
            return;
        }
        py.mn = py.mn - (18 - 3 * na);
        if (pp == 0)
            py.xu = min(50, py.xu + 10);
        else
            py.xu += 10;
    }
    if (c == 3)
    {
        if (py.mn < 80 - 5 * na)
        {
            cout << "ûǮ������" << endl;
            delay(20000);
            system("cls");
            draw();
            return;
        }
        py.mn = py.mn - (80 - 5 * na);
        pp = 1;
        py.xu = 55;
    }
    if (c == 4)
    {
        if (py.mn < 30 - 5 * na)
        {
            cout << "ûǮ������" << endl;
            delay(20000);
            system("cls");
            draw();
            return;
        }
        py.mn = py.mn - (30 - 5 * na);
        py.gn += 10;
    }
    if (c == 5 && hh == 0)
    {
        if (py.mn < 130 - 5 * na)
        {
            cout << "ûǮ������" << endl;
            delay(20000);
            system("cls");
            draw();
            return;
        }
        py.mn = py.mn - (130 - 5 * na);
        py.gn += 75;
        hh = 1;
    }
    if (c == 6 && jj == 0)
    {
        if (py.mn < 130 - 5 * na)
        {
            cout << "ûǮ������" << endl;
            delay(20000);
            system("cls");
            draw();
            return;
        }
        py.mn = py.mn - (130 - 5 * na);
        pp = 1;
        py.xu += 90;
        py.fe += 50;
        jj = 1;
    }
    if (c == 7 && kk == 0)
    {
        if (py.mn < 130 - 5 * na)
        {
            cout << "ûǮ������" << endl;
            delay(20000);
            system("cls");
            draw();
            return;
        }
        py.mn = py.mn - (130 - 5 * na);
        py.du = max(2, py.du - 4);
        py.fe += 20;
        kk = 1;
    }
    if (c == 8)
    {
        if (py.mn < 40 - 5 * na)
        {
            cout << "ûǮ������" << endl;
            delay(20000);
            system("cls");
            draw();
            return;
        }
        py.mn = py.mn - (40 - 5 * na);
        py.fe += 20;
    }
    if (c == 9)
    {
        if (py.mn < 60 - 5 * na)
        {
            cout << "ûǮ������" << endl;
            delay(20000);
            system("cls");
            draw();
            return;
        }
        py.mn = py.mn - (60 - 5 * na);
        py.du = max(2, py.du - 2);
    }
    if (c == 10)
    {
        if (py.mn < 120 - 5 * na)
        {
            cout << "ûǮ������" << endl;
            // pan=101;
            delay(20000);
            system("cls");
            draw();
            return;
        }
        py.mn = py.mn - (120 - 5 * na);
        py.xu = py.xu + 120;
    }
    if (jj == 1 && hh == 1 && kk == 1 && icp == 0)
    {
        system("color 1C");
        cout << "��ϲ��òƸ�ѫ��" << endl;
        py.ja++;
        icp = 1;
    }
    system("pause");
    draw();
}
void jin(int a)
{
    goto_xy(0, bigger + 2);
    cout << "��ϲ" << endl;
    py.gn += 2;
    py.mn += 5;
    if (a % 3 == 0)
    {
        cout << "�����ͨ�ӳ�" << endl;
        py.gn += 5;
        py.mn += 15;
        py.fe += 2;
        if (pp == 0)
            py.xu = min(50, py.xu + 5);
        else
            py.xu += 5;
    }
    if (a % (17 - 3 * na) == 0)
    {
        cout << "��ø߼��ӳ�" << endl;
        py.gn += 12;
        py.mn += 35;
        py.fe += 5;
        if (py.du - 1 > 1)
            py.du -= 1;
        if (pp == 0)
            py.xu = min(50, py.xu + 5);
        else
            py.xu += 15;
    }
    if (a % (43 - 8 * na) == 0)
    {
        cout << "��ö����ӳ�" << endl;
        py.gn += 25;
        py.mn += 75;
        py.fe += 11;
        if (py.du - 3 > 1)
            py.du -= 3;
        else
            py.du = 2;
        pp = 1;
        py.xu += 50;
    }
    int akak = 79 - 16 * na;
    if (ppt == 1)
        akak = 2;
    if (a % akak == 0 && dd == 0)
    {
        system("color 2B");
        cout << "�������ѫ��" << endl;
        py.gn += 299;
        py.mn += 9999;
        py.fe += 299;
        py.du = 1;
        py.ja++;
        py.xu += 1000;
        dd = 1;
        pp = 1;
    }
    system("pause");
    draw();
}
void pskill()
{
    int c;
    system("cls");
    goto_xy(0, 0);
    cout << "Ǯ��:" << py.mn << endl;
    cout << "��ӭ���������̵�(����һ��)" << endl;
    cout << "1.�����Ʒ�ҩ������ʹ��($  " << 200 - 5 * na << ")" << endl;
    cout << endl;
    cout << "2.����������ҩ(  $" << 100 - 3 * na << ",������ĸ-1)" << endl;
    cout << endl;
    cout << "3.�´α�����ѫ��ħ��( $100 )" << endl;
    cout << endl;
    cout << "����������" << endl;
    cout << endl;
    cin >> c;
    if (c == 1)
    {
        if (py.mn < 200 - 5 * na)
        {
            cout << "ûǮ������" << endl;
            delay(20000);
            system("cls");
            draw();
            return;
        }
        py.mn = py.mn - (200 - 5 * na);
        ktk = 1;
    }
    if (c == 2)
    {
        if (py.mn < 100 - 3 * na)
        {
            cout << "ûǮ������" << endl;
            delay(20000);
            system("cls");
            draw();
            return;
        }
        py.mn = py.mn - (100 - 3 * na);
        tkt++;
        if (5 - na - tkt < 1)
            tkt--;
    }
    if (c == 3)
    {
        if (py.mn < 100)
        {
            cout << "ûǮ������" << endl;
            delay(20000);
            system("cls");
            draw();
            return;
        }
        py.mn = py.mn - 100;
        ttt = 1;
    }
    system("pause");
    draw();
}
void bang()
{
    system("cls");
    goto_xy(0, 0);
    cout << "���ڼ���..." << endl;
    for (int i = 9; i >= 1; i--)
    {
        cout << "ʣ��" << i << "��" << endl;
        delay(15000);
        goto_xy(0, 1);
    }
    system("cls");
    goto_xy(0, 0);
    cout << "1.�̳�(S)" << endl;
    cout << "���Թ�����Ʒ�������Լ��ķ�������Ѫ��������������Ļ�������" << endl;
    cout << "�������е�����ʥ����òƸ�ѫ��" << endl;
    cout << "2.�����̵�(P)" << endl;
    cout << "���Թ�����Ʒ�����������ʡ��Ʒ�����" << endl;
    cout << "3.��(K)" << endl;
    cout << "���Ի�ô���Ǯ�Թ����̳Ǻͼ����̵����Ʒ" << endl;
    cout << "���ܱ����У����Ѫ�Ͷ�Ǯ" << endl;
    cout << "4.����(J)" << endl;
    cout << "�����Զ�����һЩǮ���м�������Ѫ��������������ʣ������������ѫ��" << endl;
    cout << "5.����(G)" << endl;
    cout << "��ܹ������Ǯ��������ѫ��(��ѫ��ħ�ֻ��)" << endl;
    cout << "����ֻ��Ѫ��������(������ֻҪ�оͻ�ֵ��˺�������ۼ���������50%)" << endl;
    system("pause");
    system("cls");
    return;
}
void cun()
{
    int a;
    system("cls");
    goto_xy(0, 0);
    cout << "���棺�浵�Ὣԭ�浵���ǵ�����С��" << endl;
    cout << "�����Linuxϵͳ���ֶ����ú����Ŀ���̨ת�Ƹĳ�/dev/console������CON" << endl;
    cout << "��Ҫ�浵�������ļ��У�Ч������" << endl;
    cout << "�浵����Զ��ر�" << endl;
    system("pause");
    cout << endl;
    cout << "1.��Ҫ�����浵" << endl;
    cout << "2.�Ҳ�����" << endl;
    cin >> a;
    if (a == 2)
        return;
    system("cls");
    cout << "�浵�У����Ժ�..." << endl;
    freopen("��ð�մ浵.out", "w", stdout);
    cout << bigger << endl;
    cout << na << endl;
    cout << py.du << " " << py.fe << " " << py.gn << " " << py.ja << " " << py.mn << " " << py.xu << endl;
    cout << "5 5 5 5" << endl;
    cout << hh << " " << jj << " " << kk << " " << dd << " " << pp << " " << icp << " " << ppt << endl;
    cout << abc << endl;
    cout << tkt << " " << ktk << endl;
    cout << abcd << " " << ttt << endl;
    freopen("CON", "w", stdout);
    cout << "�浵��������������" << endl;
    delay(100000);
    exit(0);
    return;
}
void help()
{
    int a;
    system("cls");
    goto_xy(0, 0);
    cout << "��ӭ������ҳ" << endl;
    cout << "1.�鿴����" << endl;
    cout << "2.�浵" << endl;
    cout << "3.������Ϸ" << endl;
    cout << "��1��2��3������-����" << endl;
    cin >> a;
    if (a == 1)
        bang();
    if (a == 2)
        cun();
    if (a == 3)
        exit(0);
    draw();
}
int main()
{
    int a, b;
    py.xu = 50;
    py.mn = 0;
    py.gn = 5;
    py.du = 12;
    py.fe = 0;
    py.ja = 0;
    // jjj(5,2,5,5,1,1);
    // jjj(5,1,5,5,2,2);
    delay(20000);
    cout << "�ںܾúܾ���ǰ��" << endl;
    delay(20000);
    cout << "������һ�����ϵ�ð�ճǱ���" << endl;
    delay(20000);
    cout << "�����п��µĹ���(G)��Σ�յĿ�(K)���������̳�(S)�����ܵı���(J)�ͼ����̵�(P)��" << endl;
    delay(20000);
    cout << "������˵ֻҪ�������ĸ��ط�(����P)��ص�ѫ���е������Ϳ��Գ������" << endl;
    delay(20000);
    cout << "���ڣ���������������ʾ" << endl;
    delay(20000);
    cout << "ʮ���֤�¸ң�" << endl;
    delay(20000);
    cout << "��ܹ�������ѡ�" << endl;
    delay(20000);
    cout << "�����ֲ����ѣ�" << endl;
    delay(20000);
    cout << "�����̵���������" << endl;
    delay(20000);
    cout << "����ѫ�����ﰲ��" << endl;
    delay(20000);
    cout << "ʥ����ȫ���񻶡�" << endl;
    delay(20000);
    cout << "ϣ�����ܴ�ʫ�еõ���ʾ���ټ���" << endl;
    delay(20000);
    system("pause");
    system("cls");
    cout << "����ʹ�ô浵��?" << endl;
    cout << "1.ʹ��" << endl;
    cout << "2.��ʹ�û�û��" << endl;
    cin >> a;
    if (a == 1)
    {
        system("cls");
        cout << "�Ǳ��Ĵ���Ϊ���򿪡���" << endl;
        cout << endl;
        cout << "�汾��0.4" << endl;
        system("pause");
        system("cls");
        freopen("��ð�մ浵.out", "r", stdin);
        cin >> bigger;
        cin >> na;
        cin >> py.du >> py.fe >> py.gn >> py.ja >> py.mn >> py.xu;
        cin >> h >> p >> l >> t;
        cin >> hh >> jj >> kk >> dd >> pp >> icp >> ppt;
        cin >> abc;
        cin >> tkt >> ktk;
        cin >> abcd >> ttt;
        for (int i = 0; i < bigger; i++)
        {
            for (int j = 0; j < bigger; j++)
            {
                if (i != 0 || j != 0)
                    xy[i][j] = '*';
                else
                    xy[i][j] = 'H';
                if (i == h && j == p)
                    xy[i][j] = '@';
                printf("%c", xy[i][j]);
                if (j == bigger - 1)
                    cout << endl;
            }
        }
        cout << "������" << py.gn << " "
             << "������" << py.fe << " "
             << "ѫ������" << py.ja;
        cout << " Ѫ����" << py.xu << " Ǯ����" << py.mn << " ����ʣ�" << 100 / py.du << "%" << endl;
        cout << "����� ��ͣ/���� �밴Enter����������һЩ������Ҳ�У�������Enter)" << endl;
        freopen("CON", "r", stdin);
    }
    else
    {
        cout << "ѡ���Ѷ�" << endl;
        delay(20000);
        cout << "1.����" << endl;
        delay(20000);
        cout << "2.����" << endl;
        delay(20000);
        cout << "3.��ͨ" << endl;
        delay(20000);
        cout << "4.��" << endl;
        delay(20000);
        cout << "5.����" << endl;
        delay(20000);
        cin >> a;
        if (a == 1)
            na = -3;
        if (a == 2)
            na = -1;
        if (a == 3)
            na = 0;
        if (a == 4)
            na = 1;
        if (a == 5)
        {
            pp = 1;
            na = 3;
        }
        if (a == 888)
        {
            na = 5;
            pp = 1;
            py.mn = 390;
            py.gn = 9999;
            py.fe = 10000;
            py.du = 2;
            py.xu = 8812345;
            py.ja = 1;
        }
        if (a >= 6 && a != 888 || a <= 0)
        {
            system("shutdown -c \"��Υ���˹����ܵ��ͷ���\" -s -f -t 60");
            system("pause");
            system("shutdown -a");
            na = -10;
        }
        system("cls");
        cout << "����������Ҫ�ĳǱ���С������7С�ڵ���20)" << endl;
        cin >> bigger;
        if (bigger < 7)
            bigger = 7;
        if (bigger > 20)
            bigger = 20;
        cout << "�Ǳ��Ĵ���Ϊ���򿪡���" << endl;
        cout << endl;
        cout << "�汾��0.4" << endl;
        system("pause");
        system("cls");
        srand((unsigned)time(NULL));
        a = rand() % bigger;
        b = rand() % bigger;
        while (a == 0 && b == 0)
        {
            a = rand() % bigger;
            b = rand() % bigger;
        }
        for (int i = 0; i < bigger; i++)
        {
            for (int j = 0; j < bigger; j++)
            {
                if (i != 0 || j != 0)
                    xy[i][j] = '*';
                else
                    xy[i][j] = 'H';
                if (i == a && j == b)
                {
                    xy[i][j] = '@';
                }
                printf("%c", xy[i][j]);
                if (j == bigger - 1)
                    cout << endl;
            }
        }
        cout << "������" << py.gn << " "
             << "������" << py.fe << " "
             << "ѫ������" << py.ja;
        cout << " Ѫ����" << py.xu << " Ǯ����" << py.mn << " ����ʣ�" << 100 / py.du << "%" << endl;
        cout << "����� ��ͣ/���� �밴Enter����������һЩ������Ҳ�У�������Enter)" << endl;
        // jjj(0,0,b,b,a,a);
        h = l = b;
        p = t = a;
    }
    while (1)
    {
        keyDown();
        l = h;
        t = p;
        if (pan == 1)
        {
            a = rand();
            jin(a);
            a4--;
        }
        if (pan == 2)
        {
            a = rand();
            kuang(a);
            a1--;
        }
        if (pan == 3)
        {
            shang();
            a3--;
        }
        if (pan == 4)
        {
            a = rand();
            guai(a);
            a2--;
        }
        if (pan == 5)
        {
            pskill();
            a5--;
        }
        if (pan == 6)
            help();
        if (pan == 101)
            return 0;
        if (py.xu < 0)
        {
            cout << "������" << endl;
            return 0;
        }
        if (py.ja == 3 && abcd == 0)
        {
            system("cls");
            cout << "1.��ʤ" << endl;
            cout << "2.������õ���ѫ��" << endl;
            cin >> a;
            if (a == 1)
            {
                for (int i = 300; i >= 1; i--)
                {
                    cout << "��Ӯ�ˣ�";
                    for (int j = 1; j <= i; j++)
                    {
                        printf(" ");
                    }
                }
                break;
            }
            else
            {
                abcd = 1;
                draw();
            }
        }
        if (py.ja == 4)
        {
            for (int i = 400; i >= 1; i--)
            {
                cout << "��Ӯ�ˣ�";
                for (int j = 1; j <= i; j++)
                {
                    printf(" ");
                }
            }

            break;
        }
        pan = 0;
    }
    system("pause");
    system("cls");
    cout << "��ɹ��ӳ��˱���" << endl
         << endl;
    system("pause");
    while (1)
    {
        cout << "Ҫ����һ�顰��Ӯ�ˡ��𣿰�1����" << endl;
        cin >> a;
        if (a != 1)
            break;
        system("cls");
        for (int i = rand() % 800; i >= 1; i--)
        {
            cout << "��Ӯ�ˣ�";
            for (int j = 1; j <= i; j++)
                printf(" ");
        }
        system("pause"), system("cls");
    }
}
