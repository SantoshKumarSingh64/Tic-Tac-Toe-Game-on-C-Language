void thirdpage()
{
 int ch;
 char ch1;
 cleardevice();
 setbkcolor(GREEN);
 setcolor(RED);
 rectangle(5,5,632,470);
 rectangle(8,8,629,467);
 settextstyle(10,0,2);
 outtextxy(50,90,"HOW MANY ROUNDS BOTH OF YOU");
 outtextxy(150,130,"WANT TO PLAY ?");
 rectangle(70,250,160,350);
 rectangle(260,250,350,350);
 rectangle(450,250,540,350);
 settextstyle(5,0,9);
 outtextxy(90,220,"1");
 outtextxy(280,220,"3");
 outtextxy(480,220,"5");
 ch=getch();
 if(ch=='1')
 {
  square3();
 }
 else if(ch=='3')
 {
  square3();
  win();
  square3();
  win();
  square4();
 }
 else if(ch=='5')
 {
  square3();
  win();
  square3();
  win();
  square4();
  win();
  square4();
  win();
  square5();
 }
}
