void main()
{
  int gd=DETECT,gm,i,X;
  initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
  X=196;
  for(i=0;i<5;i++)
  {
   paint();
   setfillstyle(SOLID_FILL,BLUE);
   setcolor(YELLOW);
   rectangle(120,300,X,320);
   floodfill(125,310,YELLOW);
   delay(3000);
   X=X+76;
  }
  secondpage();
  thirdpage();
  final();
}
