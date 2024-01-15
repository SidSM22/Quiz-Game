#include<stdio.h>
#include<dos.h>
#include<process.h>
#include<conio.h>
#include<graphics.h>
int score=0;
void purple()
	{
	printf("\033[0;35m");
	//scanf("\033[0;35m");
	}
void red()
	{
	printf("\033[0;31m");
	}
void green()
	{
	printf("\033[0;32m");
	}
void white()
	{
	printf("\033[0;37m");
	}
void yellow()
	{
	printf("\033[0;33m");
	}
void correct_ans()
	{
	green();
	printf("\t\t\t Right Answer!!");
	setbkcolor(GREEN);
	delay(300);
	setbkcolor(BLACK);
	delay(100);
	setbkcolor(GREEN);
	delay(300);
	setbkcolor(BLACK);
	score=score+5;
	}
void wrong_ans()
	{
	red();
	printf("\t\t\t Wrong Answer!!");
	setbkcolor(RED);
	delay(300);
	setbkcolor(BLACK);
	delay(100);
	setbkcolor(RED);
	delay(300);
	setbkcolor(BLACK);
	score=score-1;
	}

void bye()
	{
	clearviewport();
	char str4[200]="Final Score";
	char scr[10];
	sprintf(scr,"%d",score);
	for(int c=1;c<=700;c++)
		{
		settextstyle(8,0,5);
		clearviewport();
		delay(10);
		setcolor(c);
		outtextxy(200,180,str4);
		settextstyle(7,0,4);
		setcolor(YELLOW);
		outtextxy(305,260,scr);
		delay(300);
		if(kbhit())
			{
			clearviewport();
			setcolor(YELLOW);
			settextstyle(8,0,4);
			outtextxy(160,200,"Thanks For Playing");
			delay(4000);
			exit(0);
			}
		}
	}

void main()
{
clrscr();

char str[20]="QUIZ GAME";
char str2[20]="Press ENTER";
int a,b,d;
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
clearviewport();
for(b=1;b<=100;b=b+1)
	{
	settextstyle(3,0,6);
	clearviewport();
	delay(10);
	setcolor(b);
	outtextxy(200,180,str);
	settextstyle(7,0,3);
	setcolor(1);
	outtextxy(40*b,270,str2);
	delay(300);
	if(kbhit())
		{
		break;
		}

	}
clearviewport();
green();
int x;
float fav;
char name[50];
printf("\nHi Buddy....\n Can you tell me your favorite number?");
printf("\nYour choice");
scanf("%f",&fav);
printf("\n OK so your favorite number is %.2f fine!",fav);
red();
printf("\n\n\t Enter Your First Name :");
scanf("%s",&name);
printf("\n\t Enter your Age :");
scanf("%d",&x);
if(x>=18)
	{
	clearviewport();
	 char str3[200]="Bhai Ye Game chote Baccho ke liye he.. aap jake PUBG khelo!";
	 settextstyle(8,0,1);
	 setcolor(YELLOW);
	 outtextxy(0,220,str3);
	 delay(4000);
	 exit(0);
	}
START:
clearviewport();
yellow();
printf("\nChoose Quiz Type");
printf("\n1)Cricket Quiz. \n2)Science Quiz. \n3)Computer Quiz. \n4)EXIT");
int y;
printf("\nYour Choice :");
scanf("%d",&y);
score=0;
clearviewport();
setbkcolor(BLACK);
//setcolor(BLACK);
yellow();
printf("\t\t\t\t     QUIZ GAME");
white();
printf("\n\n\t\t  To EXIT press 0\t\t To Restart press 6");
green();
printf("\n\n\t\t Right Answer : +5");
red();
printf("\t\t Wrong Answer : -1");
purple();
if(y==1)
{
printf("\n\n\t\t\t 1) Who is Sir Don Bradman?\n\t\t\t 1.Cricketer\n\t\t\t 2.Footballer\n\t\t\t 3.Tennis player\n\t\t\t 4.none of above");
printf("\n\t\t\t Your Answer :");
scanf("%d",&a);
setcolor(BLACK);
if(a==1)
	{
	correct_ans();
	}
else if(a==0)
	{
	bye();
	}
else if(a==6)
	{
	goto START;
	}
else
	{
	wrong_ans();
	}
purple();
printf("\n\n\t\t\t 2)Who is the Bowler with most wickets in Cricket?\n\t\t\t 1.Shane Warne\n\t\t\t 2.Muttiah Muralitharan\n\t\t\t 3.Anil Kumble\n\t\t\t 4.James Anderson");
printf("\n\t\t\t Your Answer :");
scanf("%d",&a);
if(a==2)
	{
	correct_ans();
	}
else if(a==0)
	{
	bye();
	}
else if(a==6)
	{
	goto START;
	}

else
	{
	wrong_ans();
	}
purple();
printf("\n\n\t\t\t 3)How Many times did Australia lifted World cup?\n\t\t\t 1.1\n\t\t\t 2.3\n\t\t\t 3.5\n\t\t\t 4.none of the above. ");
printf("\n\t\t\t Your Answer :");
scanf("%d",&a);
setcolor(BLACK);
if(a==3)
	{
	correct_ans();
	}
else if(a==0)
	{
	bye();
	}
else if(a==6)
	{
	goto START;
	}

else
	{
	wrong_ans();
	}
purple();
printf("\n\n\t\t\t 4) When did India First time ever lifted an ODI World\n\t\t\t Cup?\n\t\t\t 1.1975\n\t\t\t 2.1984\n\t\t\t 3.2011\n\t\t\t 4.none of the above");
printf("\n\t\t\t Your Answer :");
scanf("%d",&a);
setcolor(BLACK);
if(a==4)
	{
	correct_ans();
	}
else if(a==0)
	{
	bye();
	}
else if(a==6)
	{
	goto START;
	}

else
	{
	wrong_ans();
	}
purple();
printf("\n\n\t\t\t 5) What is the Birth Place of Cricket?\n\t\t\t 1.Australia\n\t\t\t 2.England\n\t\t\t 3.India\n\t\t\t 4.Sri Lanka.");
printf("\n\t\t\t Your Answer :");
scanf("%d",&a);
setcolor(BLACK);
if(a==2)
	{
	correct_ans();
	}
else if(a==0)
	{
	bye();
	}
else if(a==6)
	{
	goto START;
	}

else
	{
	wrong_ans();
	}
purple();
printf("\n\n\t\t\t 6) What is the governing body of International Cricket?\n\t\t\t 1.ICC\n\t\t\t 2.BCCI\n\t\t\t 3.MCA\n\t\t\t 4.ECB");
printf("\n\t\t\t Your Answer :");
scanf("%d",&a);
setcolor(BLACK);
if(a==1)
	{
	correct_ans();
	}
else if(a==0)
	{
	bye();
	}
else if(a==6)
	{
	goto START;
	}

else
	{
	wrong_ans();
	}

bye();
}
else if(y==2)
{
purple();
printf("\n\n\t\t\t 1) What is the unit of Force?\n\t\t\t 1.Joule\n\t\t\t 2.Watt\n\t\t\t 3.Newton\n\t\t\t 4.Tesla");
printf("\n\t\t\t Your Answer :");
scanf("%d",&a);
setcolor(BLACK);
if(a==3)
	{
	correct_ans();
	}
else if(a==0)
	{
	bye();
	}
else if(a==6)
	{
	goto START;
	}
else
	{
	wrong_ans();
	}
purple();
printf("\n\n\t\t\t 2) Who discovered the cell wall?\n\t\t\t 1.Robert Hooke\n\t\t\t 2.Boveri\n\t\t\t 3.J Rhodin\n\t\t\t 4.Van Beneden");
printf("\n\t\t\t Your Answer :");
scanf("%d",&a);
setcolor(BLACK);
if(a==1)
	{
	correct_ans();
	}
else if(a==0)
	{
	bye();
	}
else if(a==6)
	{
	goto START;
	}
else
	{
	wrong_ans();
	}
purple();
printf("\n\n\t\t\t 3) Bleaching powder is a compound of?\n\t\t\t 1.Sodium\n\t\t\t 2.Magnesium\n\t\t\t 3.Sulphur\n\t\t\t 4.Calcium");
printf("\n\t\t\t Your Answer :");
scanf("%d",&a);
setcolor(BLACK);
if(a==4)
	{
	correct_ans();
	}
else if(a==0)
	{
	bye();
	}
else if(a==6)
	{
	goto START;
	}
else
	{
	wrong_ans();
	}
purple();
printf("\n\n\t\t\t 4) What happens in Oxidation Reaction?\n\t\t\t 1.Electrons are Gained\n\t\t\t 2.Protons are Gained\n\t\t\t 3.Electrons are lost\n\t\t\t 4.Protons are lost");
printf("\n\t\t\t Your Answer :");
scanf("%d",&a);
setcolor(BLACK);
if(a==3)
	{
	correct_ans();
	}
else if(a==0)
	{
	bye();
	}
else if(a==6)
	{
	goto START;
	}
else
	{
	wrong_ans();
	}
purple();
printf("\n\n\t\t\t 5) What does Light Year Measure?\n\t\t\t 1.Time\n\t\t\t 2.Speed\n\t\t\t 3.Intensity of Light\n\t\t\t 4.Distance");
printf("\n\t\t\t Your Answer :");
scanf("%d",&a);
setcolor(BLACK);
if(a==4)
	{
	correct_ans();
	}
else if(a==0)
	{
	bye();
	}
else if(a==6)
	{
	goto START;
	}
else
	{
	wrong_ans();
	}
purple();
printf("\n\n\t\t\t 6) Which organ is affected by Typhoid?\n\t\t\t 1.Liver\n\t\t\t 2.Spleen\n\t\t\t 3.Muscles\n\t\t\t 4.All of the Above");
printf("\n\t\t\t Your Answer :");
scanf("%d",&a);
setcolor(BLACK);
if(a==4)
	{
	correct_ans();
	}
else if(a==0)
	{
	bye();
	}
else if(a==6)
	{
	goto START;
	}
else
	{
	wrong_ans();
	}
bye();
}
else if(y==3)
{
purple();
printf("\n\n\t\t\t 1)In which form is the data expressed in computer ?\n\t\t\t 1.Tertiary\n\t\t\t 2.Binary\n\t\t\t 3.Primary\n\t\t\t 4.Secondary");
printf("\n\t\t\t Your Answer :");
scanf("%d",&a);
setcolor(BLACK);
if(a==2)
	{
	correct_ans();
	}
else if(a==0)
	{
	bye();
	}
else if(a==6)
	{
	goto START;
	}
else
	{
	wrong_ans();
	}
purple();
printf("\n\n\t\t\t 2) Which word processor is included in MS Office?\n\t\t\t 1.MS Word\n\t\t\t 2.MS Powerpoint\n\t\t\t 3.MS Excel\n\t\t\t 4.MS Paint");
printf("\n\t\t\t Your Answer :");
scanf("%d",&a);
setcolor(BLACK);
if(a==1)
	{
	correct_ans();
	}
else if(a==0)
	{
	bye();
	}
else if(a==6)
	{
	goto START;
	}
else
	{
	wrong_ans();
	}
purple();
printf("\n\n\t\t\t 3) What do you call a function inside a function?\n\t\t\t 1.Double Function\n\t\t\t 2.Switch Function\n\t\t\t 3.Recursive Function\n\t\t\t 4.Nested Function");
printf("\n\t\t\t Your Answer :");
scanf("%d",&a);
setcolor(BLACK);
if(a==4)
	{
	correct_ans();
	}
else if(a==0)
	{
	bye();
	}
else if(a==6)
	{
	goto START;
	}
else
	{
	wrong_ans();
	}
purple();
printf("\n\n\t\t\t 4) When was C developed?\n\t\t\t 1.1973\n\t\t\t 2.1969\n\t\t\t 3.1972\n\t\t\t 4.1970");
printf("\n\t\t\t Your Answer :");
scanf("%d",&a);
setcolor(BLACK);
if(a==3)
	{
	correct_ans();
	}
else if(a==0)
	{
	bye();
	}
else if(a==6)
	{
	goto START;
	}
else
	{
	wrong_ans();
	}
purple();
printf("\n\n\t\t\t 5) What is not a type Secondary Memory?\n\t\t\t 1.SSD\n\t\t\t 2.HDD\n\t\t\t 3.USB Pen Drive\n\t\t\t 4.RAM");
printf("\n\t\t\t Your Answer :");
scanf("%d",&a);
setcolor(BLACK);
if(a==4)
	{
	correct_ans();
	}
else if(a==0)
	{
	bye();
	}
else if(a==6)
	{
	goto START;
	}
else
	{
	wrong_ans();
	}
purple();
printf("\n\n\t\t\t 6) Who is known as Father of Computing?\n\t\t\t 1.Tim Berners Lee\n\t\t\t 2.Charles Babbage\n\t\t\t 3.Philip Don Estridge\n\t\t\t 4.James Gosling");
printf("\n\t\t\t Your Answer :");
scanf("%d",&a);
setcolor(BLACK);
if(a==2)
	{
	correct_ans();
	}
else if(a==0)
	{
	bye();
	}
else if(a==6)
	{
	goto START;
	}
else
	{
	wrong_ans();
	}
bye();
}
else
	{
	bye();
	}
getch();
closegraph();
}

