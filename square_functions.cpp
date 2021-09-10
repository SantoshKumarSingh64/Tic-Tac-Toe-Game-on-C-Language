void square3()
{
 char num1[2],num2[2];
 char ch,ch2[2];
 int count=0,ch1,ind=0;
 int array1[9]={0,0,0,0,0,0,0,0,0};
 int array2[9]={0,0,0,0,0,0,0,0,0};
 cleardevice();
 setbkcolor(GREEN);
 setcolor(RED);
 rectangle(5,5,632,470);
 rectangle(8,8,629,467);
 rectangle(20,70,620,72);
 rectangle(320,10,322,130);
 settextstyle(8,0,4);
 outtextxy(120,20,player1);
 outtextxy(420,20,player2);
 outtextxy(250,20,"(X)");
 outtextxy(550,20,"(O)");
 itoa(score1,num1,10);
 outtextxy(170,70,num1);
 itoa(score2,num2,10);
 outtextxy(470,70,num2);
 rectangle(50,270,600,272);
 rectangle(50,372,600,374);
 rectangle(230,180,232,464);
 rectangle(412,180,414,464);
 gotoxy(0,0);
 while(count<9)
 {
  again:
  ind=0;
  strcpy(ch2,"NULL");
  ch=getch();
  while(ch!=13)
  {
   ch2[ind++]=ch;
   ch=getch();
  }
  ch1=atoi(ch2);
 /*  printf("%d",ch1);
  for(i=0;i<=8;i++)
  {
   printf("%d",array1[i]);
  }
   printf("\n");
   for(i=0;i<=8;i++)
  {
   printf("%d",array2[i]);
  }*/
  if(chance==1)
  {
   if(array2[ch1-1]==1||array1[ch1-1]==1)
     goto again;
   settextstyle(8,0,7);
   switch(ch1)
   {
     case 1:
	     outtextxy(130,180,"X");
	     array1[ch1-1]=1;
	     break;
     case 2:
	     outtextxy(310,180,"X");
	     array1[ch1-1]=1;
	    break;
     case 3:
	    outtextxy(490,180,"X");
	    array1[ch1-1]=1;
	    break;
     case 4:
	    outtextxy(130,280,"X");
	    array1[ch1-1]=1;
	    break;
     case 5:
	   outtextxy(310,280,"X");
	   array1[ch1-1]=1;
	    break;
     case 6:
	   outtextxy(490,280,"X");
	   array1[ch1-1]=1;
	    break;
     case 7:
	    outtextxy(130,380,"X");
	    array1[ch1-1]=1;
	    break;
     case 8:
	    outtextxy(310,380,"X");
	    array1[ch1-1]=1;
	    break;
     case 9:
	   outtextxy(490,380,"X");
	   array1[ch1-1]=1;
	    break;
     default:
	    goto again;
   }
   if(array1[0]==1&&array1[1]==1&&array1[2]==1)
   {
     delay(1000);
     strcpy(str,player1);
     score1++;
     goto out;
   }
   else if(array1[3]==1&&array1[4]==1&&array1[5]==1)
   {
    delay(1000);
     strcpy(str,player1);
     score1++;
     goto out;
   }
   else if(array1[6]==1&&array1[7]==1&&array1[8]==1)
   {
    delay(1000);
     strcpy(str,player1);
     score1++;
     goto out;
   }
   else if(array1[0]==1&&array1[3]==1&&array1[6]==1)
   {
    delay(1000);
     strcpy(str,player1);
     score1++;
     goto out;
   }
  else if(array1[1]==1&&array1[4]==1&&array1[7]==1)
   {
     delay(1000);
     strcpy(str,player1);
     score1++;
     goto out;
   }
  else if(array1[2]==1&&array1[5]==1&&array1[8]==1)
   {
     delay(1000);
     strcpy(str,player1);
     score1++;
     goto out;
   }
  else if(array1[0]==1&&array1[4]==1&&array1[8]==1)
   {
     delay(1000);
     strcpy(str,player1);
     score1++;
     goto out;
   }
   else if(array1[2]==1&&array1[4]==1&&array1[6]==1)
   {
     delay(1000);
     strcpy(str,player1);
     score1++;
     goto out;
   }
  }
  else
  {
    if(array1[ch1-1]==1||array2[ch1-1]==1)
      goto again;
   settextstyle(8,0,7);
   switch(ch1)
   {
     case 1:
	     outtextxy(130,180,"O");
	     array2[ch1-1]=1;
	     break;
     case 2:
	     outtextxy(310,180,"O");
	     array2[ch1-1]=1;
	    break;
     case 3:
	    outtextxy(490,180,"O");
	    array2[ch1-1]=1;
	    break;
     case 4:
	    outtextxy(130,280,"O");
	    array2[ch1-1]=1;
	    break;
     case 5:
	   outtextxy(310,280,"O");
	   array2[ch1-1]=1;
	    break;
     case 6:
	   outtextxy(490,280,"O");
	   array2[ch1-1]=1;
	   break;
     case 7:
	    outtextxy(130,380,"O");
	    array2[ch1-1]=1;
	    break;
     case 8:
	    outtextxy(310,380,"O");
	    array2[ch1-1]=1;
	    break;
     case 9:
	   outtextxy(490,380,"O");
	   array2[ch1-1]=1;
	    break;
     default:
	    goto again;
   }
   if(array2[1]==1&&array2[2]==1&&array2[0]==1)
   {
     delay(1000);
     strcpy(str,player2);
     score2++;
     goto out;
   }
   else if(array2[4]==1&&array2[5]==1&&array2[3]==1)
   {
     delay(1000);
     strcpy(str,player2);
     score2++;
     goto out;
   }
   else if(array2[7]==1&&array2[8]==1&&array2[6]==1)
   {
     delay(1000);
     strcpy(str,player2);
     score2++;
     goto out;
   }
   else if(array2[0]==1&&array2[3]==1&&array2[6]==1)
   {
     delay(1000);
     strcpy(str,player2);
     score2++;
     goto out;
   }
  else if(array2[1]==1&&array2[4]==1&&array2[7]==1)
   {
     delay(1000);
     strcpy(str,player2);
     score2++;
     goto out;
   }
  else if(array2[2]==1&&array2[5]==1&&array2[8]==1)
   {
     delay(1000);
     strcpy(str,player2);
     score2++;
     goto out;
   }
  else if(array2[0]==1&&array2[4]==1&&array2[8]==1)
   {
     delay(1000);
     strcpy(str,player2);
     score2++;
     goto out;
   }
   else if(array2[2]==1&&array2[4]==1&&array2[6]==1)
   {
     delay(1000);
     strcpy(str,player2);
     score2++;
     goto out;
   }
  }
  if(chance==1)
    chance=2;
  else
    chance=1;
  count++;
 }
 out:
/* if(flag==1)
{
 if(chance==1)
  printf("Player1 Won this Round");
 else
   printf("Player2 won this round");
}*/
}
void square4()
{
 char num1[2],num2[2];
 char ch,ch2[2];
 int count=0,ch1,ind=0;
 int array1[16]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
 int array2[16]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
 cleardevice();
 setbkcolor(GREEN);
 setcolor(RED);
 rectangle(5,5,632,470);
 rectangle(8,8,629,467);
 rectangle(20,70,620,72);
 rectangle(320,10,322,130);
 settextstyle(8,0,4);
 outtextxy(120,20,player1);
 outtextxy(420,20,player2);
 outtextxy(250,20,"(X)");
 outtextxy(550,20,"(O)");
 itoa(score1,num1,10);
 outtextxy(170,70,num1);
 itoa(score2,num2,10);
 outtextxy(470,70,num2);
 rectangle(50,220,600,222);
 rectangle(50,302,600,304);
 rectangle(50,384,600,386);
 rectangle(190,150,192,456);
 rectangle(332,150,334,456);
 rectangle(464,150,466,456);
 while(count<16)
 {
  again:
  ind=0;
  strcpy(ch2,"NULL");
  ch=getch();
  while(ch!=13)
  {
   ch2[ind]=ch;
   ind++;
   ch=getch();
  }
  ch1=atoi(ch2);
/*  printf("%d\n",ch1);
  for(i=0;i<16;i++)
    printf("%d",array1[i]);
  printf("\n ");
  for(i=0;i<16;i++)
     printf("%d",array2[i]);    */
  if(chance==1)
  {
   if(array2[ch1-1]==1||array1[ch1-1]==1)
     goto again;
   settextstyle(8,0,7);
   switch(ch1)
   {
     case 1:
	    outtextxy(100,140,"X");
	    array1[ch1-1]=1;
	    break;
     case 2:
	    outtextxy(240,140,"X");
	    array1[ch1-1]=1;
	    break;
     case 3:
	    outtextxy(380,140,"X");
	    array1[ch1-1]=1;
	    break;
     case 4:
	    outtextxy(510,140,"X");
	    array1[ch1-1]=1;
	    break;
     case 5:
	    outtextxy(100,220,"X");
	    array1[ch1-1]=1;
	    break;
     case 6:
	    outtextxy(240,220,"X");
	    array1[ch1-1]=1;
	   break;
     case 7:
	     outtextxy(380,220,"X");
	    array1[ch1-1]=1;
	    break;
     case 8:
	      outtextxy(510,220,"X");
	    array1[ch1-1]=1;
	     break;
     case 9:
	     outtextxy(100,300,"X");
	    array1[ch1-1]=1;
	     break;
     case 10:
	      outtextxy(240,300,"X");
	      array1[ch1-1]=1;
	      break;
     case 11:
	      outtextxy(380,300,"X");
	      array1[ch1-1]=1;
	      break;
     case 12:
	      outtextxy(510,300,"X");
	      array1[ch1-1]=1;
	      break;
     case 13:
	      outtextxy(100,380,"X");
	      array1[ch1-1]=1;
	      break;
     case 14:
	      outtextxy(240,380,"X");
	    array1[ch1-1]=1;
	     break;
     case 15:
	      outtextxy(380,380,"X");
	    array1[ch1-1]=1;
	     break;
     case 16:
	      outtextxy(510,380,"X");
	    array1[ch1-1]=1;
	     break;
      default:
	     goto again;
   }
   if(array1[0]==1&&array1[1]==1&&array1[2]==1&&array1[3]==1)
   {
     delay(1000);
     strcpy(str,player1);
     score1++;
     goto out;
   }
   else if(array1[5]==1&&array1[6]==1&&array1[7]==1&&array1[4]==1)
   {
     delay(1000);
     strcpy(str,player1);
     score1++;
     goto out;
   }
   else if(array1[9]==1&&array1[10]==1&&array1[11]==1&&array1[8]==1)
   {
     delay(1000);
     strcpy(str,player1);
     score1++;
     goto out;
   }
   else if(array1[13]==1&&array1[14]==1&&array1[15]==1&&array1[12]==1)
   {
     delay(1000);
     strcpy(str,player1);
     score1++;
     goto out;
   }
   else if(array1[1]==1&&array1[5]==1&&array1[9]==1&&array1[13]==1)
   {
     delay(1000);
     strcpy(str,player1);
     score1++;
     goto out;
   }
  else if(array1[2]==1&&array1[6]==1&&array1[10]==1&&array1[14]==1)
   {
     delay(1000);
     strcpy(str,player1);
     score1++;
     goto out;
   }
  else if(array1[3]==1&&array1[7]==1&&array1[11]==1&&array1[15]==1)
   {
     delay(1000);
     strcpy(str,player1);
     score1++;
     goto out;
   }
  else if(array1[4]==1&&array1[8]==1&&array1[12]==1&&array1[0]==1)
   {
     delay(1000);
     strcpy(str,player1);
     score1++;
     goto out;
   }
   else if(array1[0]==1&&array1[5]==1&&array1[10]==1&&array1[15]==1)
   {
     delay(1000);
     strcpy(str,player1);
     score1++;
     goto out;
   }
  else if(array1[3]==1&&array1[6]==1&&array1[9]==1&&array1[12]==1)
   {
     delay(1000);
     strcpy(str,player1);
     score1++;
     goto out;
   }
  }
  else
  {
  if(array2[ch1-1]==1||array1[ch1-1]==1)
     goto again;
   settextstyle(8,0,7);
   switch(ch1)
   {
     case 1:
	    outtextxy(100,140,"O");
	    array2[ch1-1]=1;
	    break;
     case 2:
	    outtextxy(240,140,"O");
	    array2[ch1-1]=1;
	    break;
     case 3:
	    outtextxy(380,140,"O");
	    array2[ch1-1]=1;
	    break;
     case 4:
	    outtextxy(510,140,"O");
	    array2[ch1-1]=1;
	    break;
     case 5:
	    outtextxy(100,220,"O");
	    array2[ch1-1]=1;
	    break;
     case 6:
	    outtextxy(240,220,"O");
	    array2[ch1-1]=1;
	   break;
     case 7:
	     outtextxy(380,220,"O");
	    array2[ch1-1]=1;
	    break;
     case 8:
	      outtextxy(510,220,"O");
	    array2[ch1-1]=1;
	     break;
     case 9:
	     outtextxy(100,300,"O");
	    array2[ch1-1]=1;
	     break;
     case 10:
	      outtextxy(240,300,"O");
	    array2[ch1-1]=1;
	     break;
     case 11:
	      outtextxy(380,300,"O");
	    array2[ch1-1]=1;
	     break;
     case 12:
	      outtextxy(510,300,"O");
	    array2[ch1-1]=1;
	     break;
     case 13:
	      outtextxy(100,380,"O");
	    array2[ch1-1]=1;
	     break;
     case 14:
	      outtextxy(240,380,"O");
	    array2[ch1-1]=1;
	     break;
     case 15:
	      outtextxy(380,380,"O");
	    array2[ch1-1]=1;
	     break;
     case 16:
	      outtextxy(510,380,"O");
	    array2[ch1-1]=1;
	     break;
    default:
	     goto again;
  }
   if(array2[1]==1&&array2[2]==1&&array2[3]==1&&array2[0]==1)
   {
     delay(1000);
     strcpy(str,player2);
     score2++;
     goto out;
   }
   else if(array2[5]==1&&array2[6]==1&&array2[7]==1&&array2[4]==1)
   {
     delay(1000);
     strcpy(str,player2);
     score2++;
     goto out;
   }
   else if(array2[9]==1&&array2[10]==1&&array2[11]==1&&array2[8]==1)
   {
     delay(1000);
     strcpy(str,player2);
     score2++;
     goto out;
   }
   else if(array2[13]==1&&array2[14]==1&&array2[15]==1&&array2[12]==1)
   {
     delay(1000);
     strcpy(str,player2);
     score2++;
     goto out;
   }
   else if(array2[1]==1&&array2[5]==1&&array2[9]==1&&array2[13]==1)
   {
     delay(1000);
     strcpy(str,player2);
     score2++;
     goto out;
   }
  else if(array2[2]==1&&array2[6]==1&&array2[10]==1&&array2[14]==1)
   {
     delay(1000);
     strcpy(str,player2);
     score2++;
     goto out;
   }
  else if(array2[3]==1&&array2[7]==1&&array2[11]==1&&array2[15]==1)
   {
     delay(1000);
     strcpy(str,player2);
     score2++;
     goto out;
   }
  else if(array2[4]==1&&array2[8]==1&&array2[12]==1&&array2[0]==1)
   {
      delay(1000);
     strcpy(str,player2);
     score2++;
     goto out;
   }
   else if(array2[0]==1&&array2[5]==1&&array2[10]==1&&array2[15]==1)
   {
     delay(1000);
     strcpy(str,player2);
     score2++;
     goto out;
   }
  else if(array2[3]==1&&array2[6]==1&&array2[9]==1&&array2[12]==1)
   {
     delay(1000);
     strcpy(str,player2);
     score2++;
     goto out;
   }
  }
  if(chance==1)
    chance=2;
  else
    chance=1;
  count++;
 }
 out:
/* if(flag==1)
 {
  if(chance==1)
    printf("Player1 won this round");
  else
    printf("Player2 won this round");
 } */
}
void square5()
{
 char num1[2],num2[2];
 char ch2[2],ch;
 int count=0,ch1,ind=0;
 int array1[25]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
 int array2[25]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
 cleardevice();
 setbkcolor(GREEN);
 setcolor(RED);
 rectangle(5,5,632,470);
 rectangle(8,8,629,467);
 rectangle(20,70,620,72);
 rectangle(320,10,322,130);
 settextstyle(8,0,4);
 outtextxy(120,20,player1);
 outtextxy(420,20,player2);
 outtextxy(250,20,"(X)");
 outtextxy(550,20,"(O)");
 itoa(score1,num1,10);
 outtextxy(170,70,num1);
 itoa(score2,num2,10);
 outtextxy(470,70,num2);
 rectangle(50,200,600,202);
 rectangle(50,270,600,272);
 rectangle(50,340,600,342);
 rectangle(50,410,600,412);
 rectangle(160,150,162,460);
 rectangle(270,150,272,460);
 rectangle(380,150,382,460);
 rectangle(490,150,492,460);
 while(count<25)
 {
  again:
  ind=0;
  strcpy(ch2,"NULL");
  ch=getch();
  while(ch!=13)
  {
   ch2[ind++]=ch;
   ch=getch();
  }
  ch1=atoi(ch2);
//  printf("%d",ch1);
  if(chance==1)
  {
   if(array2[ch1-1]==1||array1[ch1-1]==1)
     goto again;
   settextstyle(8,0,5);
   switch(ch1)
   {
    case 1:
	   outtextxy(105,145,"X");
	   array1[ch1-1]=1;
	   break;
    case 2:
	   outtextxy(205,145,"X");
	   array1[ch1-1]=1;
	   break;
    case 3:
	   outtextxy(315,145,"X");
	   array1[ch1-1]=1;
	   break;
    case 4:
	   outtextxy(420,145,"X");
	   array1[ch1-1]=1;
	   break;
    case 5:
	  outtextxy(525,145,"X");
	  array1[ch1-1]=1;
	   break;
    case 6:
	   outtextxy(105,215,"X");
	   array1[ch1-1]=1;
	   break;
    case 7:
	   outtextxy(205,215,"X");
	   array1[ch1-1]=1;
	   break;
    case 8:
	   outtextxy(315,215,"X");
	   array1[ch1-1]=1;
	   break;
    case 9:
	    outtextxy(420,215,"X");
	   array1[ch1-1]=1;
	   break;
    case 10:
	    outtextxy(525,215,"X");
	   array1[ch1-1]=1;
	   break;
    case 11:
	     outtextxy(105,285,"X");
	     array1[ch1-1]=1;
	   break;
    case 12:
	    outtextxy(205,285,"X");
	     array1[ch1-1]=1;
	   break;
    case 13:
	     outtextxy(315,285,"X");
	     array1[ch1-1]=1;
	   break;
    case 14:
	     outtextxy(420,285,"X");
	     array1[ch1-1]=1;
	   break;
    case 15:
	     outtextxy(525,285,"X");
	     array1[ch1-1]=1;
	   break;
    case 16:
	    outtextxy(105,355,"X");
	    array1[ch1-1]=1;
	   break;
   case 17:
	    outtextxy(205,355,"X");
	    array1[ch1-1]=1;
	   break;
    case 18:
	     outtextxy(315,355,"X");
	    array1[ch1-1]=1;
	   break;
    case 19:
	    outtextxy(420,355,"X");
	    array1[ch1-1]=1;
	   break;
    case 20:
	     outtextxy(525,355,"X");
	    array1[ch1-1]=1;
	   break;
    case 21:
	   outtextxy(105,410,"X");
	   array1[ch1-1]=1;
	   break;
   case 22:
	    outtextxy(205,410,"X");
	   array1[ch1-1]=1;
	   break;
   case 23:
	   outtextxy(315,410,"X");
	   array1[ch1-1]=1;
	   break;
   case 24:
	   outtextxy(420,410,"X");
	   array1[ch1-1]=1;
	   break;
   case 25:
	    outtextxy(525,410,"X");
	   array1[ch1-1]=1;
	   break;
    default:
	    goto again;
   }
   if(array1[1]==1&&array1[2]==1&&array1[3]==1&&array1[4]==1&&array1[0]==1)
   {
     delay(1000);
     strcpy(str,player1);
     score1++;
     goto out;
   }
   else if(array1[9]==1&&array1[6]==1&&array1[7]==1&&array1[8]==1&&array1[5]==1)
   {
     delay(1000);
     strcpy(str,player1);
     score1++;
     goto out;
   }
   else if(array1[13]==1&&array1[14]==1&&array1[11]==1&&array1[12]==1&&array1[10]==1)
   {
     delay(1000);
     strcpy(str,player1);
     score1++;
     goto out;
   }
   else if(array1[16]==1&&array1[17]==1&&array1[18]==1&&array1[19]==1&&array1[15]==1)
   {
     delay(1000);
     strcpy(str,player1);
     score1++;
     goto out;
   }
   else if(array1[21]==1&&array1[22]==1&&array1[23]==1&&array1[24]==1&&array1[20]==1)
   {
     delay(1000);
     strcpy(str,player1);
     score1++;
     goto out;
   }
   else if(array1[1]==1&&array1[6]==1&&array1[11]==1&&array1[16]==1&&array1[21]==1)
   {
     delay(1000);
     strcpy(str,player1);
     score1++;
     goto out;
   }
  else if(array1[2]==1&&array1[7]==1&&array1[12]==1&&array1[17]==1&&array1[22]==1)
   {
     delay(1000);
     strcpy(str,player1);
     score1++;
     goto out;
   }
  else if(array1[3]==1&&array1[8]==1&&array1[13]==1&&array1[18]==1&&array1[23]==1)
   {
     delay(1000);
     strcpy(str,player1);
     score1++;
     goto out;
   }
  else if(array1[4]==1&&array1[9]==1&&array1[14]==1&&array1[19]==1&&array1[24]==1)
   {
      delay(1000);
     strcpy(str,player1);
     score1++;
     goto out;
   }
  else if(array1[5]==1&&array1[10]==1&&array1[15]==1&&array1[20]==1&&array1[0]==1)
   {
     delay(1000);
     strcpy(str,player1);
     score1++;
     goto out;
   }
   else if(array1[0]==1&&array1[6]==1&&array1[12]==1&&array1[18]==1&&array1[24]==1)
   {
     delay(1000);
     strcpy(str,player1);
     score1++;
     goto out;
   }
  else if(array1[4]==1&&array1[8]==1&&array1[12]==1&&array1[16]==1&&array1[20]==1)
   {
     delay(1000);
     strcpy(str,player1);
     score1++;
     goto out;
   }
  }
  else
  {
   if(array2[ch1-1]==1||array1[ch1-1]==1)
     goto again;
   settextstyle(8,0,5);
   switch(ch1)
   {
    case 1:
	   outtextxy(105,145,"O");
	   array2[ch1-1]=1;
	   break;
    case 2:
	   outtextxy(205,145,"O");
	   array2[ch1-1]=1;
	   break;
    case 3:
	   outtextxy(315,145,"O");
	   array2[ch1-1]=1;
	   break;
    case 4:
	   outtextxy(420,145,"O");
	   array2[ch1-1]=1;
	   break;
    case 5:
	  outtextxy(525,145,"O");
	  array2[ch1-1]=1;
	   break;
    case 6:
	   outtextxy(105,215,"O");
	   array2[ch1-1]=1;
	   break;
    case 7:
	   outtextxy(205,215,"O");
	   array2[ch1-1]=1;
	   break;
    case 8:
	   outtextxy(315,215,"O");
	   array2[ch1-1]=1;
	   break;
    case 9:
	    outtextxy(420,215,"O");
	   array2[ch1-1]=1;
	   break;
    case 10:
	    outtextxy(525,215,"O");
	   array2[ch1-1]=1;
	   break;
    case 11:
	     outtextxy(105,285,"O");
	     array2[ch1-1]=1;
	   break;
    case 12:
	    outtextxy(205,285,"O");
	     array2[ch1-1]=1;
	   break;
    case 13:
	     outtextxy(315,285,"O");
	     array2[ch1-1]=1;
	   break;
    case 14:
	     outtextxy(420,285,"O");
	     array2[ch1-1]=1;
	   break;
    case 15:
	     outtextxy(525,285,"O");
	     array2[ch1-1]=1;
	   break;
    case 16:
	    outtextxy(105,355,"O");
	    array2[ch1-1]=1;
	   break;
   case 17:
	    outtextxy(205,355,"O");
	    array2[ch1-1]=1;
	   break;
    case 18:
	     outtextxy(315,355,"O");
	    array2[ch1-1]=1;
	   break;
    case 19:
	    outtextxy(420,355,"O");
	    array2[ch1-1]=1;
	   break;
    case 20:
	     outtextxy(525,355,"O");
	    array2[ch1-1]=1;
	   break;
    case 21:
	   outtextxy(105,410,"O");
	   array2[ch1-1]=1;
	   break;
   case 22:
	    outtextxy(205,410,"O");
	   array2[ch1-1]=1;
	   break;
   case 23:
	   outtextxy(315,410,"O");
	   array2[ch1-1]=1;
	   break;
   case 24:
	   outtextxy(420,410,"O");
	   array2[ch1-1]=1;
	   break;
   case 25:
	    outtextxy(525,410,"O");
	   array2[ch1-1]=1;
	   break;
    default:
	    goto again;
   }
   if(array2[1]==1&&array2[2]==1&&array2[3]==1&&array2[4]==1&&array2[0]==1)
   {
     delay(1000);
     strcpy(str,player2);
     score2++;
     goto out;
   }
   else if(array2[9]==1&&array2[6]==1&&array2[7]==1&&array2[8]==1&&array2[5]==1)
   {
     delay(1000);
     strcpy(str,player2);
     score2++;
     goto out;
   }
   else if(array2[13]==1&&array2[14]==1&&array2[11]==1&&array2[12]==1&&array2[10]==1)
   {
     delay(1000);
     strcpy(str,player2);
     score2++;
     goto out;
   }
   else if(array2[16]==1&&array2[17]==1&&array2[18]==1&&array2[19]==1&&array2[15]==1)
   {
     delay(1000);
     strcpy(str,player2);
     score2++;
     goto out;
   }
   else if(array2[21]==1&&array2[22]==1&&array2[23]==1&&array2[24]==1&&array2[20]==1)
   {
     delay(1000);
      strcpy(str,player2);
     score2++;
     goto out;
   }
   else if(array2[0]==1&&array2[5]==1&&array2[10]==1&&array2[15]==1&&array2[20]==1)
   {
     delay(1000);
     strcpy(str,player2);
     score2++;
     goto out;
   }
  else if(array2[1]==1&&array2[6]==1&&array2[11]==1&&array2[16]==1&&array2[21]==1)
   {
      delay(1000);
     strcpy(str,player2);
     score2++;
     goto out;
   }
  else if(array2[2]==1&&array2[7]==1&&array2[12]==1&&array2[17]==1&&array2[22]==1)
   {
     delay(1000);
    strcpy(str,player2);
     score2++;
     goto out;
   }
  else if(array2[3]==1&&array2[8]==1&&array2[13]==1&&array2[18]==1&&array2[23]==1)
   {
     delay(1000);
    strcpy(str,player2);
     score2++;
     goto out;
   }
  else if(array2[4]==1&&array2[9]==1&&array2[14]==1&&array2[19]==1&&array2[24]==1)
   {
     delay(1000);
    strcpy(str,player2);
     score2++;
     goto out;
   }
   else if(array2[0]==1&&array2[6]==1&&array2[12]==1&&array2[18]==1&&array2[24]==1)
   {
     delay(1000);
     strcpy(str,player2);
     score2++;
     goto out;
   }
  else if(array2[4]==1&&array2[8]==1&&array2[12]==1&&array2[16]==1&&array2[20]==1)
   {
     delay(1000);
     strcpy(str,player2);
     score2++;
     goto out;
   }
  }
  count++;
  if(chance==1)
   chance=2;
  else
    chance=1;
 }
 out :
/* if(flag==1)
 {
  if(chance==1)
    printf("Player1 won this round");
  else
    printf("Player2 won this round");
 } */
}
