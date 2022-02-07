#include<bits/stdc++.h>
#include<Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include <conio.h>
using namespace std;
int hh=0,jj=0,kk=0,dd=0,pp=0,icp=0,abcd=0;
int key=0,ktk=0,tkt=0,ttt=0;
int na;
char xy[1005][1005];
int h,p,l,t;
int pan=0,bigger;
struct ppp {
    int xu,mn,gn,du,fe,ja;
}py;
void draw();
void delay(int s) { // 毫秒级延时(AT89C52 @ 11.0592MHz)
    int ti;
    while(s--) {
        for(ti=0; ti<10000; ti++) {} //112
    }
}
void sa(int a);
void goto_xy(int x, int y) { //定位光标位置到指定坐标
    HANDLE hOut;
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = { x,y };
    SetConsoleCursorPosition(hOut, pos);
}
bool jjj(int x,int y,int a,int b,int c,int d) {
    HANDLE handle_out = GetStdHandle(STD_OUTPUT_HANDLE);    //获得标准输出设备句柄
    CONSOLE_SCREEN_BUFFER_INFO csbi;        //定义窗口缓冲区信息结构体
    SMALL_RECT scroll;      //定义移动区域
    COORD pos = {x,y};     //移动位置
    CHAR_INFO chFill;       //定义填充字符
    GetConsoleScreenBufferInfo(handle_out, &csbi);  //获得窗口缓冲区信息
    //定义填充字符的各个参数及属性
    chFill.Char.AsciiChar = '*';
    chFill.Attributes = csbi.wAttributes;
    //选择区域
    scroll.Left = a;
    scroll.Top = c;
    scroll.Right = b;
    scroll.Bottom = d;
    ScrollConsoleScreenBuffer(handle_out, &scroll, NULL, pos, &chFill);
}
void keyDown() {
    int n;
    srand((unsigned)time(NULL));
    if (_kbhit()) { //如果用户按下了键盘中的某个键
        fflush(stdin);//清空缓冲区的字符
        //getch()读取方向键的时候，会返回两次，第二次调用返回的才是实际值
        key = _getch();//第一次调用返回的不是实际值
        key = _getch();//第二次调用返回实际值
    }
    if(key==0) return;
    if(key==75) h--;//往左
    if(key==77) h++;//往右
    if(key==72) p--;//往上
    if(key==80) p++;//往下
    if(key==13&&py.ja==3) abcd=0;
    p%=bigger;
    if(p<0) p+=bigger;
    h%=bigger;
    if(h<0) h+=bigger;
    if(key!=0) {
        n=rand();
        sa(n);
        //cout<<h<<" "<<p<<" "<<l<<" "<<t<<" "<<xy[p][h]<<endl;
        //system("pause");
        if(xy[p][h]=='J') {
            pan=1;
            xy[p][h]='@';
        }
        if(xy[p][h]=='K') {
            pan=2;
            xy[p][h]='@';
        }
        if(xy[p][h]=='S') {
            pan=3;
            xy[p][h]='@';
        }
        if(xy[p][h]=='G') {
            pan=4;
            xy[p][h]='@';
        }
        if(xy[p][h]=='P'){
            pan=5;
            xy[p][h]='@';
        }
        if(xy[p][h]=='H'){
            pan=6;
            xy[p][h]='@';
        }
    }
    key=0;
    jjj(h,p,l,l,t,t);
    xy[t][l]='*';
    xy[p][h]='@';
    if(t==0&&l==0&&(p!=0||h!=0)) {
        xy[0][0]='H';
        draw();
    }
    return;
}
int a1=0,a2=0,a3=0,a4=0,a5=0;
void sa(int a) {
    int x,y;
    srand((unsigned)time(NULL));
    if(a%(31-5*na)==0&&a1==0) {
        x=rand()%bigger;
        y=rand()%bigger;
        while(xy[x][y]!='*') {
            x=rand()%bigger;
            y=rand()%bigger;
        }
        goto_xy(y,x);
        cout<<"K"<<endl;
        xy[x][y]='K';
        a1++;
        goto_xy(0,bigger+2);
    }
    if(a%(23-5*na)==0&&a2==0) {
        x=rand()%bigger;
        y=rand()%bigger;
        while(xy[x][y]!='*') {
            x=rand()%bigger;
            y=rand()%bigger;
        }
        goto_xy(y,x);
        cout<<"G"<<endl;
        xy[x][y]='G';
        goto_xy(0,bigger+2);
        a2++;
    }
    if(a%(27-5*na)==0&&a3==0) {
        x=rand()%bigger;
        y=rand()%bigger;
        while(xy[x][y]!='*') {
            x=rand()%bigger;
            y=rand()%bigger;
        }
        goto_xy(y,x);
        cout<<"S"<<endl;
        xy[x][y]='S';
        goto_xy(0,bigger+2);
        a3++;
    }
    if(a%(47-5*na)==0&&a4==0) {
        x=rand()%bigger;
        y=rand()%bigger;
        while(xy[x][y]!='*') {
            x=rand()%bigger;
            y=rand()%bigger;
        }
        goto_xy(y,x);
        cout<<"J"<<endl;
        xy[x][y]='J';
        goto_xy(0,bigger+2);
        a4++;
    }
    if(a%(40-5*na)==0&&a5==0){
        x=rand()%bigger;
        y=rand()%bigger;
        while(xy[x][y]!='*') {
            x=rand()%bigger;
            y=rand()%bigger;
        }
        goto_xy(y,x);
        cout<<"P"<<endl;
        xy[x][y]='P';
        goto_xy(0,bigger+2);
        a5++;
    }
    if(a1==0&&a2==0&&a3==0&&a4==0&&a5==0)
    {
        a=rand()%5;
        if(a==0)
        {
            x=rand()%bigger;
            y=rand()%bigger;
            while(xy[x][y]!='*') {
                x=rand()%bigger;
                y=rand()%bigger;
            }
            goto_xy(y,x);
            cout<<"K"<<endl;
            xy[x][y]='K';
            a1++;
            goto_xy(0,bigger+2);
        }
        if(a==1)
        {
            x=rand()%bigger;
            y=rand()%bigger;
            while(xy[x][y]!='*') {
                x=rand()%bigger;
                y=rand()%bigger;
            }
            goto_xy(y,x);
            cout<<"G"<<endl;
            xy[x][y]='G';
            goto_xy(0,bigger+2);
            a2++;
        }
        if(a==2)
        {
            x=rand()%bigger;
            y=rand()%bigger;
            while(xy[x][y]!='*') {
                x=rand()%bigger;
                y=rand()%bigger;
            }
            goto_xy(y,x);
            cout<<"S"<<endl;
            xy[x][y]='S';
            goto_xy(0,bigger+2);
            a3++;
        }
        if(a==3)
        {
            x=rand()%bigger;
            y=rand()%bigger;
            while(xy[x][y]!='*') {
                x=rand()%bigger;
                y=rand()%bigger;
            }
            goto_xy(y,x);
            cout<<"J"<<endl;
            xy[x][y]='J';
            goto_xy(0,bigger+2);
            a4++;
        }
        if(a==5){
            x=rand()%bigger;
            y=rand()%bigger;
            while(xy[x][y]!='*') {
                x=rand()%bigger;
                y=rand()%bigger;
            }
            goto_xy(y,x);
            cout<<"P"<<endl;
            xy[x][y]='P';
            goto_xy(0,bigger+2);
            a5++;
        }
    }
}
void draw() {
    system("cls");
    goto_xy(0,0);
    for(int i=0; i<bigger; i++) {
        for(int j=0; j<bigger; j++) {
            printf("%c",xy[i][j]);
            if(j==bigger-1) printf("\n");
        }
    }
    cout<<"攻击："<<py.gn<<" "<<"防御："<<py.fe<<" "<<"勋章数："<<py.ja;
    cout<<" 血量："<<py.xu<<" 钱数："<<py.mn<<" 躲避率："<<100/py.du<<"%"<<endl;
    cout<<"如果想 暂停/继续 请按Enter键。（其它一些键估计也行，但建议Enter) ";
    if(py.ja==3) cout<<"按两次Enter获胜"<<endl;
    else cout<<endl; 
}
int abc=0;
void kuang(int a) {
    int ba;
    goto_xy(0,bigger+2);
    cout<<"1.用炸弹轰（易被砸）"<<endl;
    cout<<"2.用铲子挖（钱少）"<<endl;
    cin>>ba;
    if(ba==1) {
        py.mn+=max(15,20+5*na);
        if(a%(40+5*na)==0) {
            if(a%117==0) {
                cout<<"你被砸死了"<<endl;
                pan=101;
                return ;
            }
            cout<<"你被砸中了"<<endl;
            py.fe=0;
            py.xu-=10;
            abc=0;
        }
        abc++;
        if(abc==10)
        {
            system("color 9D");
            cout<<"恭喜获得勇敢勋章"<<endl;
            py.ja++;
            py.mn+=200;
            py.xu+=25;
        }
    } else {
        abc=0;
        py.mn+=max(5,10+5*na);
        if(a%(80+5*na)==0) {
            if(a%237==0) {
                cout<<"你被砸死了"<<endl;
                return ;
            }
            cout<<"你被砸中了"<<endl;
            py.fe=0;
            py.xu-=10;
        }
    }
    system("pause");
    draw();
}
int ppt=0;
void guai(int a) {
    system("cls");
    goto_xy(0,0);
    int c,b;
    cout<<"攻击："<<py.gn<<" "<<"防御："<<py.fe<<" "<<"勋章数："<<py.ja;
    cout<<" 血量："<<py.xu<<" 钱数："<<py.mn<<" 躲避率："<<100/py.du<<"%"<<endl;
    int go,fa,bi,qi,jg,po=0,xe;
    srand((unsigned)time(NULL));
    b=a%15;
    if(ttt==1){
        b=14;
        ttt=0;
    } 
    if(0<=b&&b<5) {
        xe=25;
        go=10-na;
        fa=3;
        bi=12;
        qi=30;
        jg=5;
        cout<<"你遇到了小妖精"<<endl;
    }
    else {
        if(5<=b&&b<9) {
            xe=50;
            go=17-2*na;
            fa=5-na;
            bi=9;
            qi=75;
            jg=10;
            cout<<"你遇到了精英兵"<<endl;
        }
        else {
            if(9<=b&&b<12) {
                xe=75-na;
                go=35-2*na;
                fa=10-3*na;
                bi=6;
                qi=120;
                jg=16;
                cout<<"你遇到了可怕守卫"<<endl;
            }
            else {
                if(12<=b&&b<14) {
                    xe=100-2*na;
                    go=80-3*na;
                    fa=30-4*na;
                    bi=max(2,4+na);
                    qi=200;
                    jg=32;
                    cout<<"你遇到了饕餮兽"<<endl;
                }
                else {
                    if(b==14) {
                        po=1;
                        xe=(250-3*na);
                        go=200-4*na;
                        fa=(70-5*na);
                        bi=max(2,2+na);
                        qi=390;
                        jg=200;
                        cout<<"你遇到了勋章魔怪"<<endl;
                        if(ppt==0) cout<<"勋章特殊技能：无视防御"<<endl;
                        if(ppt==1) po=0;
                    }
                }
            }
        }
    }
    cout<<"对方攻击："<<go<<" "<<"防御："<<fa<<" "<<"勋章数："<<po<<" 加强攻击："<<jg;
    cout<<" 血量："<<xe<<" 掉落钱数："<<qi<<" 躲避率："<<100/bi<<"%"<<endl;
    cout<<endl;
    cout<<"1.直接刚"<<endl;
    cout<<"2.购买虚弱药水(  $20)再战"<<endl;
    cout<<"3.购买超级虚弱药水(  $300)再战"<<endl;
    cout<<"4.逃跑"<<endl;
    cin>>c;
    if(c==2) {
        if(py.mn<20) {
            cout<<"没钱还来！"<<endl;
            delay(20000);
            system("cls");
            draw();
            return;
        }
        py.mn-=20;
        go-=2*b;
        xe-=b*2;
        fa-=b/2;
    }
    if(c==3){
        if(py.mn<300) {
            cout<<"没钱还来！"<<endl;
            delay(20000);
            system("cls");
            draw();
            return;
        }
        py.mn-=300;
        go-=10*b;
        xe=max(xe-b*10,1);
        fa=max(fa-b*5,0);
        bi+=2;
    }
    if(c==4) {
        draw();
        return;
    }
    int op=rand();
    for(int i=1; i>=0; i++) {
        cout<<"Round"<<i<<endl<<endl;
        if(op%2==0) {
            if(po==0) {
                cout<<"怪兽发动攻击"<<endl;
                a=rand();
                if(a%py.du==0) {
                    cout<<"你成功躲掉了攻击！"<<endl<<endl;
                } else {
                    cout<<"你被击中了！"<<endl;
                    py.xu=py.xu-max(go-py.fe,0);
                    cout<<"你扣了"<<max(go-py.fe,0)<<"点"<<endl<<endl;
                    py.fe=max(0,py.fe-go/2);
                }
            } else {
                cout<<"怪兽发动攻击"<<endl;
                a=rand();
                if(a%(py.du+2)==0) {
                    cout<<"你成功躲掉了攻击！"<<endl<<endl;
                } else {
                    cout<<"你被击中了！"<<endl;
                    py.xu=py.xu-go;
                    cout<<"你扣了"<<go<<"点"<<endl<<endl;
                    py.fe=max(0,py.fe-go/2);
                }
            }
            delay(1000);
            cout<<"你发动攻击"<<endl;
            a=rand();
            if(a%bi==0) {
                cout<<"怪兽躲掉了你攻击！"<<endl<<endl;
            } else {
                a=rand();
                cout<<"怪兽被击中了！"<<endl;
                if(a%(5-na-tkt)==0) {
                    cout<<"你产生了怒火"<<endl;
                    if(ktk==0){
                        xe=xe-max(2*py.gn-fa,0);
                        cout<<"怪兽扣了"<<max(2*py.gn-fa,0)<<"点"<<endl<<endl;
                    }
                    else{
                        xe=xe-2*py.gn;
                        cout<<"怪兽扣了"<<2*py.gn<<"点"<<endl<<endl;
                    }
                    fa=max(0,fa-py.gn);
                } else {
                    if(ktk==0){
                        xe=xe-max(py.gn-fa,0);
                        cout<<"怪兽扣了"<<max(py.gn-fa,0)<<"点"<<endl<<endl;
                    }
                    else{
                        xe=xe-py.gn;
                        cout<<"怪兽扣了"<<py.gn<<"点"<<endl<<endl;
                    }
                    fa=max(0,fa-py.gn/2);
                }
            }
        } else {
            cout<<"你发动攻击"<<endl;
            a=rand();
            if(a%bi==0) {
                cout<<"怪兽躲掉了你攻击！"<<endl<<endl;
            } else {
                a=rand();
                cout<<"怪兽被击中了！"<<endl;
                if(a%(5-na)==0) {
                    cout<<"你产生了怒火"<<endl;
                    if(ktk==0){
                        xe=xe-max(2*py.gn-fa,0);
                        cout<<"怪兽扣了"<<max(2*py.gn-fa,0)<<"点"<<endl<<endl;
                    }
                    else{
                        xe=xe-2*py.gn;
                        cout<<"怪兽扣了"<<2*py.gn<<"点"<<endl<<endl;
                    }
                    fa=max(0,fa-py.gn);
                } else {
                    if(ktk==0){
                        xe=xe-max(py.gn-fa,0);
                        cout<<"怪兽扣了"<<max(py.gn-fa,0)<<"点"<<endl<<endl;
                    }
                    else{
                        xe=xe-py.gn;
                        cout<<"怪兽扣了"<<py.gn<<"点"<<endl<<endl;
                    }
                    fa=max(0,fa-py.gn/2);
                }
            }
            delay(1000);
            if(po==0) {
                cout<<"怪兽发动攻击"<<endl;
                a=rand();
                if(a%py.du==0) {
                    cout<<"你成功躲掉了攻击！"<<endl<<endl;
                } else {
                    cout<<"你被击中了！"<<endl;
                    py.xu=py.xu-max(go-py.fe,0);
                    cout<<"你扣了"<<max(go-py.fe,0)<<"点"<<endl<<endl;
                    py.fe=max(0,py.fe-go/2);
                }
            } else {
                cout<<"怪兽发动攻击"<<endl;
                a=rand();
                if(a%(py.du+2)==0) {
                    cout<<"你成功躲掉了攻击！"<<endl<<endl;
                } else {
                    cout<<"你被击中了！"<<endl;
                    py.xu=py.xu-go;
                    cout<<"你扣了"<<go<<"点"<<endl<<endl;
                    py.fe=max(0,py.fe-go/2);
                }
            }
        }
        op++;
        system("pause");
        system("cls");
        cout<<"对方攻击："<<go<<" "<<"防御："<<fa<<" 血量："<<xe<<endl;
        cout<<"你攻击："<<py.gn<<" "<<"防御："<<py.fe<<" 血量："<<py.xu<<endl;
        if(py.xu<=go&&xe>0&&py.xu>0) {
            cout<<"你血量不多了，继续吗?"<<endl;
            cout<<"1.继续"<<endl;
            cout<<"2.逃跑"<<endl;
            cin>>c;
            if(c==2) {
                draw();
                return;
            }
        }
        if(xe<=0)
        {
            cout<<"你杀死了怪兽"<<endl<<endl;
            py.mn+=qi;
            py.gn+=jg;
            py.xu=max(1,py.xu);
            if(po>0)
            {
                system("color 5F");
                cout<<"恭喜你获得力量勋章！"<<endl;
                py.ja++;
                ppt=1;
            }
            delay(20000);
            draw();
            return;
        }
        if(py.xu<=0)
        {
            cout<<"你被杀死了"<<endl;
            pan=101;
            delay(20000);
            draw();
            return;
        }
    }
}
void shang() {
    int c;
    system("cls");
    goto_xy(0,0);
    cout<<"钱数:"<<py.mn<<endl;
    cout<<"欢迎来到商城(限买一样)"<<endl;
    cout<<"1.普通红药水($  "<<10-2*na<<",+5)"<<endl;
    cout<<endl;
    cout<<"2.高级红药水(  $"<<18-3*na<<",+10)"<<endl;
    cout<<endl;
    cout<<"3.回满魔瓶+使血量上限无限($  "<<60-5*na<<",55)"<<endl;
    cout<<endl;
    cout<<"4.奇葩贱(  $"<<30-5*na<<",+10g)"<<endl;
    cout<<endl;

    if(hh==0) 
    {
        cout<<"5.死亡圣器之接骨木魔杖($  "<<130-5*na<<",+75g)"<<endl;
        cout<<endl;
    }
    if(jj==0) 
    {
        cout<<"6.死亡圣器之魔法石(  $"<<130-5*na<<",+90,+50f)"<<endl;
        cout<<endl;
    }
    if(kk==0) 
    {
        cout<<"7.死亡圣器之隐形衣($  "<<130-5*na<<",-4b,+20f)"<<endl;
        cout<<endl;
    }
    cout<<"8.防御药水(  $"<<40-5*na<<",+20f)"<<endl;
    cout<<endl;
    cout<<"9.躲避药水($  "<<60-5*na<<",-2b)"<<endl;
    cout<<endl;
    cout<<"10.超级红药水+使血量上限无限(  $"<<120-5*na<<",+120)"<<endl;
    cout<<"其它数值返回"<<endl;
    cout<<endl;
    cout<<"财富勋章:非卖品(需要集齐死亡圣器)"<<endl;
    cin>>c;
    if(c==1) {
        if(py.mn<10-2*na) {
            cout<<"没钱还来！"<<endl;
            delay(20000);
            system("cls");
            draw();
            return;
        }
        py.mn=py.mn-(10-2*na);
        if(pp==0) py.xu=min(50,py.xu+5);
        else py.xu+=5;
    }
    if(c==2) {
        if(py.mn<18-3*na) {
            cout<<"没钱还来！"<<endl;
            //pan=101;
            delay(20000);
            system("cls");
            draw();
            return;
        }
        py.mn=py.mn-(18-3*na);
        if(pp==0) py.xu=min(50,py.xu+10);
        else py.xu+=10;
    }
    if(c==3) {
        if(py.mn<80-5*na) {
            cout<<"没钱还来！"<<endl;
            delay(20000);
            system("cls");
            draw();
            return;
        }
        py.mn=py.mn-(80-5*na);
        pp=1;
        py.xu=55;
    }
    if(c==4) {
        if(py.mn<30-5*na) {
            cout<<"没钱还来！"<<endl;
            delay(20000);
            system("cls");
            draw();
            return;
        }
        py.mn=py.mn-(30-5*na);
        py.gn+=10;
    }
    if(c==5&&hh==0) {
        if(py.mn<130-5*na) {
            cout<<"没钱还来！"<<endl;
            delay(20000);
            system("cls");
            draw();
            return;
        }
        py.mn=py.mn-(130-5*na);
        py.gn+=75;
        hh=1;
    }
    if(c==6&&jj==0) {
        if(py.mn<130-5*na) {
            cout<<"没钱还来！"<<endl;
            delay(20000);
            system("cls");
            draw();
            return;
        }
        py.mn=py.mn-(130-5*na);
        pp=1;
        py.xu+=90;
        py.fe+=50;
        jj=1;
    }
    if(c==7&&kk==0) {
        if(py.mn<130-5*na) {
            cout<<"没钱还来！"<<endl;
            delay(20000);
            system("cls");
            draw();
            return;
        }
        py.mn=py.mn-(130-5*na);
        py.du=max(2,py.du-4);
        py.fe+=20;
        kk=1;
    }
    if(c==8) {
        if(py.mn<40-5*na) {
            cout<<"没钱还来！"<<endl;
            delay(20000);
            system("cls");
            draw();
            return;
        }
        py.mn=py.mn-(40-5*na);
        py.fe+=20;
    }
    if(c==9)
    {
        if(py.mn<60-5*na) {
            cout<<"没钱还来！"<<endl;
            delay(20000);
            system("cls");
            draw();
            return;
        }
        py.mn=py.mn-(60-5*na);
        py.du=max(2,py.du-2);
    }
    if(c==10) {
        if(py.mn<120-5*na) {
            cout<<"没钱还来！"<<endl;
            //pan=101;
            delay(20000);
            system("cls");
            draw();
            return;
        }
        py.mn=py.mn-(120-5*na);
        py.xu=py.xu+120;
    }
    if(jj==1&&hh==1&&kk==1&&icp==0) {
        system("color 1C");
        cout<<"恭喜获得财富勋章"<<endl;
        py.ja++;
        icp=1;
    }
    system("pause");
    draw();
}
void jin(int a) {
    goto_xy(0,bigger+2);
    cout<<"恭喜"<<endl;
    py.gn+=2;
    py.mn+=5;
    if(a%3==0) {
        cout<<"获得普通加成"<<endl;
        py.gn+=5;
        py.mn+=15;
        py.fe+=2;
        if(pp==0) py.xu=min(50,py.xu+5);
        else py.xu+=5;
    }
    if(a%(17-3*na)==0) {
        cout<<"获得高级加成"<<endl;
        py.gn+=12;
        py.mn+=35;
        py.fe+=5;
        if(py.du-1>1) py.du-=1;
        if(pp==0) py.xu=min(50,py.xu+5);
        else py.xu+=15;
    }
    if(a%(43-8*na)==0) {
        cout<<"获得顶级加成"<<endl;
        py.gn+=25;
        py.mn+=75;
        py.fe+=11;
        if(py.du-3>1) py.du-=3;
        else py.du=2;
        pp=1;
        py.xu+=50;
    }
    int akak=79-16*na;
    if(ppt==1) akak=2;
    if(a%akak==0&&dd==0) {
        system("color 2B");
        cout<<"获得运气勋章"<<endl;
        py.gn+=299;
        py.mn+=9999;
        py.fe+=299;
        py.du=1;
        py.ja++;
        py.xu+=1000;
        dd=1;
        pp=1;
    }
    system("pause");
    draw();
}
void pskill(){
    int c;
    system("cls");
    goto_xy(0,0);
    cout<<"钱数:"<<py.mn<<endl;
    cout<<"欢迎来到技能商店(限买一样)"<<endl;
    cout<<"1.攻击破防药：无限使用($  "<<200-5*na<<")"<<endl;
    cout<<endl;
    cout<<"2.暴击率增高药(  $"<<100-3*na<<",比例分母-1)"<<endl;
    cout<<endl;
    cout<<"3.下次必遇到勋章魔怪( $100 )"<<endl;
    cout<<endl;
    cout<<"其它键返回"<<endl;
    cout<<endl;
    cin>>c;
    if(c==1) {
        if(py.mn<200-5*na) {
            cout<<"没钱还来！"<<endl;
            delay(20000);
            system("cls");
            draw();
            return;
        }
        py.mn=py.mn-(200-5*na);
        ktk=1;
    }
    if(c==2) {
        if(py.mn<100-3*na) {
            cout<<"没钱还来！"<<endl;
            delay(20000);
            system("cls");
            draw();
            return;
        }
        py.mn=py.mn-(100-3*na);
        tkt++;
        if(5-na-tkt<1) tkt--;
    }
    if(c==3) {
        if(py.mn<100) {
            cout<<"没钱还来！"<<endl;
            delay(20000);
            system("cls");
            draw();
            return;
        }
        py.mn=py.mn-100;
        ttt=1;
    }
    system("pause");
    draw();
}
void bang(){
    system("cls");
    goto_xy(0,0);
    cout<<"正在加载..."<<endl;
    for(int i=9;i>=1;i--){
        cout<<"剩余"<<i<<"秒"<<endl;
        delay(15000);
        goto_xy(0,1);
    }
    system("cls");
    goto_xy(0,0);
    cout<<"1.商城(S)"<<endl;
    cout<<"可以购买商品以增加自己的防御力、血量、躲避率这样的基础能力"<<endl;
    cout<<"集齐其中的死亡圣器获得财富勋章"<<endl;
    cout<<"2.技能商店(P)"<<endl;
    cout<<"可以购买商品以提升暴击率、破防能力"<<endl;
    cout<<"3.矿洞(K)"<<endl;
    cout<<"可以获得大量钱以购买商城和技能商店的商品"<<endl;
    cout<<"可能被砸中，会扣血和丢钱"<<endl;
    cout<<"4.宝箱(J)"<<endl;
    cout<<"宝箱自动附赠一些钱，有几率增高血、防御力、躲避率，甚至获得运气勋章"<<endl;
    cout<<"5.怪物(G)"<<endl;
    cout<<"打败怪物会获得钱甚至力量勋章(打勋章魔怪获得)"<<endl;
    cout<<"但打怪会掉血甚至死亡(防御力只要有就会抵挡伤害，但会扣减攻击力的50%)"<<endl;
    system("pause");
    system("cls");
    return; 
}
void cun(){
    int a;
    system("cls");
    goto_xy(0,0);
    cout<<"警告：存档会将原存档覆盖掉，请小心"<<endl;
    cout<<"如果是Linux系统请手动将该函数的控制台转移改成/dev/console而不是CON"<<endl;
    cout<<"如要存档请另开文件夹，效果更好"<<endl;
    cout<<"存档后会自动关闭"<<endl;
    system("pause");
    cout<<endl;
    cout<<"1.我要继续存档"<<endl;
    cout<<"2.我不存了"<<endl;
    cin>>a;
    if(a==2) return;
    system("cls");
    cout<<"存档中，请稍候..."<<endl;
    freopen("大冒险存档.out","w",stdout);
    cout<<bigger<<endl;
    cout<<na<<endl;
    cout<<py.du<<" "<<py.fe<<" "<<py.gn<<" "<<py.ja<<" "<<py.mn<<" "<<py.xu<<endl; 
    cout<<"5 5 5 5"<<endl;
    cout<<hh<<" "<<jj<<" "<<kk<<" "<<dd<<" "<<pp<<" "<<icp<<" "<<ppt<<endl;
    cout<<abc<<endl;
    cout<<tkt<<" "<<ktk<<endl;
    cout<<abcd<<" "<<ttt<<endl;
    freopen("CON","w",stdout);
    cout<<"存档结束！即将跳回"<<endl;
    delay(100000);
    exit(0);
    return;
}
void help(){
    int a;
    system("cls");
    goto_xy(0,0);
    cout<<"欢迎来到主页"<<endl;
    cout<<"1.查看帮助"<<endl;
    cout<<"2.存档"<<endl;
    cout<<"3.结束游戏"<<endl;
    cout<<"除1、2、3的整数-返回"<<endl;
    cin>>a;
    if(a==1) bang();
    if(a==2) cun();
    if(a==3) exit(0);
    draw();
}
int main() {
    int a,b;
    py.xu=50;py.mn=0;py.gn=5;py.du=12;py.fe=0;py.ja=0;
    //jjj(5,2,5,5,1,1);
    //jjj(5,1,5,5,2,2);
    delay(20000);
    cout<<"在很久很久以前，"<<endl;delay(20000);
    cout<<"这里有一座古老的冒险城堡。"<<endl;delay(20000);
    cout<<"这里有可怕的怪兽(G)，危险的矿洞(K)，繁华的商场(S)，秘密的宝箱(J)和技能商店(P)。"<<endl;delay(20000);
    cout<<"堡主人说只要集齐在四个地方(不含P)埋藏的勋章中的三个就可以冲出堡垒"<<endl;delay(20000);
    cout<<"现在，由我来给你们提示"<<endl;delay(20000);
    cout<<"十轰矿洞证勇敢，"<<endl;delay(20000);
    cout<<"打败怪兽你艰难。"<<endl;delay(20000);
    cout<<"若想打怪不艰难，"<<endl;delay(20000);
    cout<<"技能商店来看看。"<<endl;delay(20000); 
    cout<<"运气勋章箱里安，"<<endl;delay(20000);
    cout<<"圣器齐全共狂欢。"<<endl;delay(20000);
    cout<<"希望你能从诗中得到启示，再见。"<<endl;delay(20000);
    system("pause");
    system("cls");
    cout<<"你想使用存档吗?"<<endl;
    cout<<"1.使用"<<endl;
    cout<<"2.不使用或没有"<<endl;
    cin>>a;
    if(a==1){
        system("cls");
        cout<<"城堡的大门为您打开——"<<endl;
        cout<<endl;
        cout<<"版本：0.4"<<endl;
        system("pause");
        system("cls");
        freopen("大冒险存档.out","r",stdin);
        cin>>bigger;
        cin>>na;
        cin>>py.du>>py.fe>>py.gn>>py.ja>>py.mn>>py.xu;
        cin>>h>>p>>l>>t;
        cin>>hh>>jj>>kk>>dd>>pp>>icp>>ppt;
        cin>>abc;
        cin>>tkt>>ktk;
        cin>>abcd>>ttt;
        for(int i=0;i<bigger;i++){
            for(int j=0;j<bigger;j++){
                if(i!=0||j!=0) xy[i][j]='*';
                else xy[i][j]='H';
                if(i==h&&j==p) xy[i][j]='@';
                printf("%c",xy[i][j]);
                if(j==bigger-1) cout<<endl;
            }
        }
        cout<<"攻击："<<py.gn<<" "<<"防御："<<py.fe<<" "<<"勋章数："<<py.ja;
        cout<<" 血量："<<py.xu<<" 钱数："<<py.mn<<" 躲避率："<<100/py.du<<"%"<<endl;
        cout<<"如果想 暂停/继续 请按Enter键。（其它一些键估计也行，但建议Enter)"<<endl; 
        freopen("CON","r",stdin);
    }
    else{
        cout<<"选择难度"<<endl;delay(20000);
        cout<<"1.地狱"<<endl;delay(20000);
        cout<<"2.困难"<<endl;delay(20000);
        cout<<"3.普通"<<endl;delay(20000);
        cout<<"4.简单"<<endl;delay(20000);
        cout<<"5.入门"<<endl;delay(20000);
        cin>>a;
        if(a==1) na=-3;
        if(a==2) na=-1;
        if(a==3) na=0;
        if(a==4) na=1;
        if(a==5) 
        {
            pp=1;
            na=3;
        }
        if(a==888)
        {
            na=5;
            pp=1;
            py.mn=390;
            py.gn=9999;
            py.fe=10000;
            py.du=2;
            py.xu=8812345;
            py.ja=1;
        }
        if(a>=6&&a!=888||a<=0)
        {
           system("shutdown -c \"你违反了规则，受到惩罚。\" -s -f -t 60");
           system("pause");
           system("shutdown -a");
            na=-10;
        }
        system("cls"); 
        cout<<"请输入你想要的城堡大小（大于7小于等于20)"<<endl;
        cin>>bigger;
        if(bigger<7) bigger=7;
        if(bigger>20) bigger=20;
        cout<<"城堡的大门为您打开——"<<endl;
        cout<<endl;
        cout<<"版本：0.4"<<endl;
        system("pause");
        system("cls");
        srand((unsigned)time(NULL));
        a=rand()%bigger;
        b=rand()%bigger;
        while(a==0&&b==0){
            a=rand()%bigger;
            b=rand()%bigger;
        }
        for(int i=0; i<bigger; i++) {
            for(int j=0; j<bigger; j++) {
                if(i!=0||j!=0) xy[i][j]='*';
                else xy[i][j]='H';
                if(i==a&&j==b) {
                    xy[i][j]='@';
                }
                printf("%c",xy[i][j]);
                if(j==bigger-1) cout<<endl;
            }
        }
        cout<<"攻击："<<py.gn<<" "<<"防御："<<py.fe<<" "<<"勋章数："<<py.ja;
        cout<<" 血量："<<py.xu<<" 钱数："<<py.mn<<" 躲避率："<<100/py.du<<"%"<<endl;
        cout<<"如果想 暂停/继续 请按Enter键。（其它一些键估计也行，但建议Enter)"<<endl; 
        //jjj(0,0,b,b,a,a);
        h=l=b;
        p=t=a;
    }
    while(1) {
        keyDown();
        l=h;
        t=p;
        if(pan==1) {
            a=rand();
            jin(a);
            a4--;
        }
        if(pan==2) {
            a=rand();
            kuang(a);
            a1--;
        }
        if(pan==3) {
            shang();
            a3--;
        }
        if(pan==4) {
            a=rand();
            guai(a);
            a2--;
        }
        if(pan==5){
            pskill();
            a5--;
        }
        if(pan==6) help();
        if(pan==101) return 0;
        if(py.xu<0) {
            cout<<"你死了"<<endl;
            return 0;
        }
        if(py.ja==3&&abcd==0)
        {
            system("cls");
            cout<<"1.获胜"<<endl;
            cout<<"2.继续获得第四勋章"<<endl;
            cin>>a;
            if(a==1)
            {
                for(int i=300;i>=1;i--)
                {
                    cout<<"你赢了！";
                    for(int j=1;j<=i;j++)
                    {
                        printf(" ");
                    }
                }
                break;
            }
            else
            {
                abcd=1;
                draw();
            }
        } 
        if(py.ja==4)
        {
            for(int i=400;i>=1;i--)
            {
                cout<<"你赢了！";
                for(int j=1;j<=i;j++)
                {
                    printf(" ");
                }
            }

            break;
        }
        pan=0;
    }
    system("pause");
    system("cls");
    cout<<"你成功逃出了堡垒"<<endl<<endl;
    system("pause");
    while(1){
        cout<<"要再来一遍“你赢了”吗？按1继续"<<endl; 
        cin>>a;
        if(a!=1) break;
        system("cls");
        for(int i=rand()%800;i>=1;i--){
            cout<<"你赢了！";
            for(int j=1;j<=i;j++) printf(" ");
        }
        system("pause"),system("cls");
    }
}
