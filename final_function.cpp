void final()
{
 char ch;
 cleardevice();
 setbkcolor(GREEN);
 setcolor(RED);
 rectangle(5,5,632,470);
 rectangle(8,8,629,467);
 setcolor(YELLOW);
 if(score1>score2)
 {
   settextstyle(8,0,9);
   outtextxy(150,50,player1);
   settextstyle(8,0,4);
   outtextxy(140,200,"YOU WON THIS GAME");
 }
 else if(score2>score1)
 {
  settextstyle(8,0,9);
  outtextxy(150,50,player2);
  settextstyle(8,0,4);
  outtextxy(140,200,"YOU WON THIS GAME");
 }
 else
 {
   settextstyle(8,0,6);
   outtextxy(20,130,"THIS GAME IS DRAWN");
 }
 settextstyle(8,0,4);
 outtextxy(120,350,"PRESS R FOR REPLAY");
 outtextxy(80,400,"PRESS ANY KEY FOR EXIT");
 ch=getch();
 if(ch=='r'||ch=='R')
 {
     score1=0;
     score2=0;
     thirdpage();
     final();
  }
}
