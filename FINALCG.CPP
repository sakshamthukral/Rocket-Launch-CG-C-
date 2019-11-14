#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<time.h>
void rocket();
void text();
int gd=DETECT,gm,i,j,k;
void main()
{
text();
//getch();
cleardevice();
rocket();
getch();
}

void text()
{
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
settextstyle(0,EMPTY_FILL,1);
setcolor(YELLOW);
  //current time
  time_t tt;
  struct tm * ti;
  time (&tt);
  ti=localtime(&tt);
  //text
outtextxy(50,50,"I");
outtextxy(50,60,"S");
outtextxy(50,70,"R");
outtextxy(50,80,"O");
settextstyle(0,EMPTY_FILL,2);
setcolor(BLUE);
outtextxy(100,50,"Indian Space");
outtextxy(100,70,"Research Organization");
settextstyle(0,EMPTY_FILL,1);
setcolor(WHITE);
outtextxy(50,120,"WELCOME TO INDIAN SPACE RESEARCH ORGANIZATION.");
delay(150);
outtextxy(50,150,"TODAY i.e.");
settextstyle(1,HORIZ_DIR,1);
outtextxy(132,140,asctime(ti));   //current time date.
settextstyle(0,EMPTY_FILL,1);
outtextxy(390,150,"CHANDRAYAN 3 IS GOING TO LAUNCH");
delay(150);
outtextxy(50,180,"IT's MAIN AIM IS TO LAND ON THE UNEXPLORED SIDE OF THE MOON.");
delay(150);
outtextxy(50,210,"SYNCHRONOUS ORBIT.");
delay(150);
setcolor(RED);
outtextxy(50,240,"LAUNCH MASS => 320,000 KG");
delay(150);
outtextxy(50,270,"PAYLOAD MASS => 1,440 KG");
delay(150);
outtextxy(50,300,"LAUNCH SITE => SATISH DHAWAN SPACE CENTER SRIHARIKOTA,INDIA");
delay(150);
outtextxy(50,330,"DISTANCE TRAVEL => 238,855 Miles");
delay(150);
outtextxy(50,360,"PAYLOAD => 3 ORBITAL SATTELITES,1 CBNT-1");
delay(150);
outtextxy(50,390,"& 1 D-O (TD NANO SATELLITE)");
delay(150);
outtextxy(50,420,"SO...COUNTDOWN IS GOING TO  BEGIN");
delay(3000);

settextstyle(7,HORIZ_DIR,2);
int countdown = 10;
char string_var[50];
for(int i=countdown ; i>0 ; i--)
{
   sprintf(string_var,"Rocket Launches In :  %d  seconds",i);
   outtextxy(50,450,string_var);
   delay(1000);
   cleardevice();
  // outtextxy(50,450,"Here the Rocket Goes");
}
settextstyle(0,EMPTY_FILL,1);
//outtextxy(50,450,"ENTER TO CONTINUE");
//delay(150);
}

void rocket()
{
//setcolor(BLUE);
     //background color

//earth
    for(i=30;i<=400;i++)
    {//  setbkcolor(9);//sky
//       setcolor(2);
  //     bar(10,420+i,630,470+i);


	//arcs
	settextstyle(0,EMPTY_FILL,1);
	setcolor(BLUE);
	arc(500-i,200+i,0,120,200);
	arc(500-i,200+i,0,120,300);
	arc(500-i,200+i,0,120,400);
	arc(500-i,200+i,0,120,500);
	setcolor(GREEN);
	outtextxy(318,330-i,"I");
	outtextxy(318,340-i,"S");
	outtextxy(318,350-i,"R");
	outtextxy(318,360-i,"O");
//	outtextxy(318,385-i,"C28");


	//rocket
       //flag on rocket
	 setfillstyle(1,LIGHTRED);
	 bar(318,383-i,338,386-i);
	 setfillstyle(1,WHITE);
	 bar(318,386-i,338,389-i);
	 setfillstyle(1,GREEN);
	 bar(318,389-i,338,392-i);
     //ashoka
     setfillstyle(1,BLUE);
     fillellipse(328,387-i,3,2);

	setcolor(WHITE);
	outtextxy(10,400+i,"EARTH");
	for(j=0;j<=7;j++)
	{
	   setcolor(RED);
	   circle(320,300-i,0+j);
	}
	for(k=0;k<=15;k++)
	{
	  setcolor(YELLOW);
	  circle(300,410-i,0+k);
	  circle(340,410-i,0+k);
	  circle(320,410-i,0+k);
	  circle(280,410-i,0+k);
	  circle(360,410-i,0+k);
	}
	setcolor(WHITE);
	line(0,420+i,620,420+i);
	line(340,400-i,340,320-i);
	line(300,400-i,300,320-i);
	line(330,370-i,330,330-i);
	line(310,370-i,310,330-i);
	line(310,330-i,330,330-i);
	line(310,370-i,330,370-i);
	line(300,380-i,340,380-i);
	line(270,400-i,370,400-i);
	line(270,400-i,300,380-i);
	line(340,380-i,370,400-i);
	line(300,320-i,340,320-i);
	line(300,320-i,320,300-i);
	line(340,320-i,320,300-i);
       //	setfillstyle(SOLID_FILL,11);
       //	floodfill(301,321-i,13);

	//ROCKET LAUNCH STAND
	line(380,420+i,380,280+i);
	line(410,420+i,410,280+i);
	line(380,280+i,410,280+i);
	line(380,420+i,410,420+i);
	setfillstyle(SOLID_FILL,RED);
	floodfill(381,281+i,WHITE);
	//connected rods
	line(340,340+i,380,340+i);
	line(340,360+i,380,360+i);
	//-------------------------------------------
	//Building 1
	line(430,420+i,430,300+i);
	line(430,300+i,450,300+i);
	line(450,300+i,450,260+i);
	line(450,260+i,525,260+i);
	line(525,260+i,525,420+i);
	line(430,420+i,525,420+i);
	//window 1
	line(435,310+i,455,310+i);//1
	line(435,330+i,455,330+i);//2
	line(435,310+i,435,330+i);//3
	line(455,310+i,455,330+i);//4
	//window 2
	line(470,310+i,515,310+i);//1
	line(470,330+i,515,330+i);//2
	line(470,310+i,470,330+i);//3
	line(515,310+i,515,330+i);//4
	//window 3
	line(435,340+i,455,340+i);//1
	line(435,360+i,455,360+i);//2
	line(435,340+i,435,360+i);//3
	line(455,340+i,455,360+i);//4
	//window 4
	line(470,340+i,515,340+i);//1
	line(470,360+i,515,360+i);//2
	line(470,340+i,470,360+i);//3
	line(515,340+i,515,360+i);//4
	//window 5
	line(435,375+i,455,375+i);//1
	line(435,400+i,455,400+i);//2
	line(435,375+i,435,400+i);//3
	line(455,375+i,455,400+i);//4
	//window 6
	line(470,375+i,515,375+i);//1
	line(470,400+i,515,400+i);//2
	line(470,375+i,470,400+i);//3
	line(515,375+i,515,400+i);//4
	//color building 1
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(431,301+i,WHITE);
	//-------------------------------------------------------
	//Building 2
	line(530,280+i,620,280+i);
	line(530,420+i,620,420+i);
	line(530,280+i,530,420+i);
	line(620,280+i,620,420+i);
	//window 1
	line(540,290+i,570,290+i);
	line(540,310+i,570,310+i);
	line(540,290+i,540,310+i);
	line(570,290+i,570,310+i);
	//window 2
	line(580,290+i,610,290+i);
	line(580,310+i,610,310+i);
	line(580,290+i,580,310+i);
	line(610,290+i,610,310+i);
	//window 3
	line(540,320+i,570,320+i);
	line(540,340+i,570,340+i);
	line(540,320+i,540,340+i);
	line(570,320+i,570,340+i);
	//window 4
	line(580,320+i,610,320+i);
	line(580,340+i,610,340+i);
	line(580,320+i,580,340+i);
	line(610,320+i,610,340+i);
	//window 5
	line(540,350+i,570,350+i);
	line(540,370+i,570,370+i);
	line(540,350+i,540,370+i);
	line(570,350+i,570,370+i);
	//window 6
	line(580,350+i,610,350+i);
	line(580,370+i,610,370+i);
	line(580,350+i,580,370+i);
	line(610,350+i,610,370+i);
	//window 7
	line(540,380+i,570,380+i);
	line(540,410+i,570,410+i);
	line(540,380+i,540,410+i);
	line(570,380+i,570,410+i);
	//window 8
	line(580,380+i,610,380+i);
	line(580,410+i,610,410+i);
	line(580,380+i,580,410+i);
	line(610,380+i,610,410+i);
	//color building 2
	setfillstyle(SOLID_FILL,RED);
	floodfill(531,290+i,WHITE);
	  //tree

   setfillstyle(1,6);
    line(50,400+i,65,400+i);
    line(50,420+i,50,400+i);
    line(65,420+i,65,400+i);
   floodfill(51,415+i,WHITE);  //  floodfill(x,100,15)
   setfillstyle(1,2);
    ellipse(53,400+i,75,250,13,12);
    ellipse(44,380+i,85,250,10,14);
    ellipse(68,401+i,250,400,10,12);
    ellipse(78,382+i,270,70,12,15);
    ellipse(48,370+i,20,180,10,14);
    ellipse(58,360+i,0,160,12,15);
    ellipse(73,360+i,290,120,12,10);
   floodfill(76,360+i,WHITE);

   //flag on building
setfillstyle(1,12);
bar(465,290+i,505,295+i);
setfillstyle(1,WHITE);
bar(465,295+i,505,300+i);
//setfillstyle(1,GREEN);
//bar(465,300+i,505,305+i);
 //ashoka
setfillstyle(1,BLUE);
fillellipse(485,297+i,3,2);
setfillstyle(1,GREEN);
bar(465,300+i,505,305+i);


setcolor(2);
       bar(10,420+i,630,470+i);

	//ISRO SIGN In Building 1
	settextstyle(0,EMPTY_FILL,2);
	setcolor(GREEN);
	outtextxy(455,270+i,"ISRO");

       //INDIA SIGN IN ROCKET STAND
       settextstyle(0,EMPTY_FILL,1);
       setcolor(GREEN);
       outtextxy(380,290+i,"ISRO");
       settextstyle(0,EMPTY_FILL,2);
       setcolor(YELLOW);
       outtextxy(390,300+i,"I");
       outtextxy(390,320+i,"N");
       outtextxy(390,340+i,"D");
       outtextxy(390,360+i,"I");
       outtextxy(390,380+i,"A");




	//because the speed of the rocket will increase uniformly
	if(i<60){
	  delay(200);
	}
	else if(i>=60 && i<=100){
	  delay(70);
	}
	else if(i>100 && i<=150){
	  delay(40);
	}
	else{
	delay(20);
	}
	cleardevice();
	}
setbkcolor(0);
setcolor(GREEN);
settextstyle(0,EMPTY_FILL,3);
outtextxy(50,100,"CONGRATULATIONS MISSION ");
outtextxy(220,150,"SUCCESSFUL");
setcolor(YELLOW);
settextstyle(3,EMPTY_FILL,2);
outtextxy(50,220,"Project Submitted By:-");
outtextxy(50,350,"Submitted To:-");
settextstyle(7,EMPTY_FILL,1);
outtextxy(100,270,"SAHIL SHARMA, SAKSHAM THUKRAL");
outtextxy(100,300," SAHIL MOUDGILL, SAMEER, SAKSHI ATTRI");
outtextxy(100,400,"GURPREET MAM");

getch();
}
