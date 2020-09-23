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
