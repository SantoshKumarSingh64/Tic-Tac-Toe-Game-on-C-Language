void paint()
{
 cleardevice();
 setbkcolor(GREEN);
 setcolor(RED);
 rectangle(5,5,632,470);
 rectangle(8,8,629,467);
 setcolor(YELLOW);
 settextstyle(8,0,3);
 outtextxy(220,130,"WELCOME TO");
 settextstyle(10,0,5);
 outtextxy(90,140,"TIC TAC TOE");
 rectangle(120,300,500,320);
 settextstyle(6,0,3);
 outtextxy(260,330,"LOADING...");
}
