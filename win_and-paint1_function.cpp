void win()
{
  int X=196,i;
  for(i=0;i<5;i++)
 {
   paint1(str);
   setfillstyle(SOLID_FILL,BLUE);
   setcolor(YELLOW);
   rectangle(120,300,X,320);
   floodfill(125,310,YELLOW);
   delay(1000);
   X=X+76;
 }
}
void paint1()
{
 cleardevice();
 setbkcolor(GREEN);
 setcolor(RED);
 rectangle(5,5,632,470);
 rectangle(8,8,629,467);
 setcolor(YELLOW);
  if(strcmp(str,player1)==0)
 {
   settextstyle(8,0,9);
   outtextxy(150,50,player1);
   settextstyle(8,0,4);
   outtextxy(140,200,"YOU WON THIS ROUND");
 }
 else if(strcmp(str,player2)==0)
 {
  settextstyle(8,0,9);
  outtextxy(150,50,player2);
  settextstyle(8,0,4);
  outtextxy(140,200,"YOU WON THIS ROUND");
 }
 else
 {
   settextstyle(8,0,6);
   outtextxy(20,130,"THIS ROUND IS DRAWN");
 }
 rectangle(120,300,500,320);
 settextstyle(6,0,3);
 outtextxy(180,330,"NEXT ROUND LOADING...");
}
