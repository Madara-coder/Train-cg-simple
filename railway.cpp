
/*
 By Debrath Sharma 
 Bsc.CSIT
 3rd Sem
 Roll no:- 21
 Submitted to:- Ramesh Kharbuja Sir.
*/

// Making a program to make a train run from left to right side of the screen


#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

int main()
{
	int i,j,k,x,y;
	int gdriver = DETECT, gmode;
	initgraph(&gdriver, &gmode, (char*)"");
	//Changing the background color...
	setbkcolor(15);
	
	
	
	// Running for loop to create the frame by frame graphics of train...
	for(i=0;i<=640;i++)
	{
		cleardevice();
	
	//Setting different color...
		setcolor(0);
		
		
		//For track where the train runs...
		
		line(0,450,640,450);
		line(0,475,640,475);
		line(0,480,640,480);
		
		//For back...
		rectangle(30+i,340,180+i,350);
		rectangle(40+i,350,170+i,425);
		
		//For back wheels ...
		circle(70+i,437,12);
		circle(140+i,437,12);
		
		//For back incircle...
		circle(70+i,437,8);
		circle(140+i,437,8);
		rectangle(70+i,435,140+i,439);
		
		//For windows in the back of the train...
		rectangle(55+i,365,155+i,400);
		line(83+i,365,83+i,400);
		line(122+i,365,122+i,400);
		
		//For joining ...
		rectangle(170+i,390,210+i,400);
		
		//For engine...
		rectangle(200+i,320,260+i,330);
		rectangle(210+i,330,250+i,400);
		rectangle(250+i,340,345+i,425);
		rectangle(250+i,340,330+i,410);
		
		
		//For front wheels...
		circle(225+i, 425,25);
		circle(320+i,437,12);
		circle(280+i,437,12);
		
		
		//Front small incircle...
		circle(320+i,437,8);
		circle(280+i,437,8);
		rectangle(320+i,435,280+i,439);
		
		
		//For front big incircle...
		circle(225+i,425,15);
	
		
		
		//For the front windows...
		rectangle(220+i,335,240+i,365);
		
		
		//For the fire place design...
		rectangle(300+i,300,330+i,340);
		rectangle(290+i,290,340+i,300);
		
		
		//For the tracker...
		line(332+i,425,332+i,450);
		line(345+i,420,355+i,450);
		
		//For the lights...
		rectangle(345+i,360,355+i,380);
		
		
		//For the hills ...
		line(0,200,50,150);
		line(50,150,150,200);
		line(150,200,300,100);
		line(300,100,450,175);
		line(450,175,640,125);
		
		
		//For the sun ...
		circle(475,74,25);
		
		
		//For the board
	
	
  		rectangle(410-i,450,420-i,400);
  		rectangle(370-i,370,460-i,400);
  		outtextxy(383-i,378, "<- KTM ->");
  	

	
		///for delaying...
		delay(25);
		
		}	


	getch();
	closegraph();
}



/*
Function and Syntax:-

0. initgraph :-
	initializes the graphics system by loading a graphics driver from disk
	(or validating a registered driver), and putting the system into graphics mode.
	- initgraph(int *graphdriver, int *graphmode, char *pathtofdriver);

1. cleardevice() :-
	clears the screen in graphics mode and sets the current position to (0,0)
	-  cleardevice();

2. line() :-
	used to draw a line.
	- line(int x1,int y1, int x2,int y2);  [(x1,y1,x2,y2)-> co-ordinates.]
	
3. circle() :-
	used  to make a circle.
	- circle(int x,int y,int radius);  [(x,y)-> center of the circle]
	
4. rectangle() :-
	used to make a rectangle.
	- rectangle(int left, int top, int right, int bottom);

5. delay() :-
	used to put something off or postpone it until later, it is built upon a C
	library function called clock.
	- delay(int a);  [int a -> time in milliseconds]
	
6. setbkcolor() :-
	used to set the colour of the background in c programming.
	-setbkcolor(int a);	[a-> is the integer value from 0 to 15 which is the code
	for the different colours in grahics.h of c programming]
	
7. setcolor() :-
	used to set the colour of the text and object in c programming.
	- setcolor(int a); []a-> is the integer value from 0 to 15 determining the 
	different colours in c programming ]
	
8. outtextxy() :-
	used to set the text in graphics in c programming.
	- outtextxy(int x,int y, "Text_Area"); [x&y -> are the co-ordinates]	
	
*/
