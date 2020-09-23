#include<fstream.h>
#include<graphics.h>
#include<string.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<iomanip.h>
#include<process.h>


void dev()
{
 clrscr();
  for(int x=50;x>=20;x--)
     {
       textcolor(WHITE+LIGHTGRAY);
       delay(160);
       gotoxy(x,12);
       cputs("  P R O J E C T   ");
       gotoxy(x,14);
       cputs("  D E V E L O P E D  B Y  :  ");
       gotoxy(x,16);
       cputs("N A B E E L");
      }
 gotoxy(x,24);
 cputs("PRESS ANY KEY TO CONTINUE");
 getch();
}

void main()
 {
    clrscr();
    dev();
    int gdriver=DETECT,gmode,errorcode;
    initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
    errorcode=graphresult();
    if(errorcode!=grOk)
      {
          cout<<grapherrormsg(errorcode)<<"\n";
          getch();
        }
    settextstyle(1,0,7);
    outtextxy(75,1," W E L C O M E  ");
    outtextxy(275,150,"T O     ");
    outtextxy(65,300," P A Y R O L L    M A N A G E M E N T   S O F T W A R E ");
    outtextxy(9,400,"Press any key to continue ");
getch();
}
