#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>

void add(void);
void search(void);
void delet(void);
void list(void);
void modify(long int,long int,long int);

struct{
char name[20];
char amt[20];
char code[20];
}user;
long int fsize;
long int asize;
long int csize;
FILE *fp;
void main()
{

int gd = DETECT, gm;
initgraph(&gd, &gm, "c:\\turboc3\\bgi");
setbkcolor(BLUE);
setfillstyle(SOLID_FILL, RED);
bar(60,55,580,150);
setfillstyle(SOLID_FILL,RED);
bar(60,60,580,160);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
outtextxy(80, 60, "DATABASE PROJECT");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
outtextxy(110, 120, "Bank Accounts Management System");
setfillstyle(SOLID_FILL, DARKGRAY);
bar(170, 230, 450, 250);
settextstyle(2, 0, 6);
outtextxy(180, 230, "Muhammad Sufyan (CT-055)");
bar(170,280,450, 300);
outtextxy(180, 280, "Hamzah Ahmad (CT-056)");
bar(170, 330, 450, 350);
outtextxy(180, 330, "Muhammad Arsalan (CT-069)");


settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
setfillstyle(SOLID_FILL, WHITE);
bar(0,400,640,480);
settextstyle(SMALL_FONT,HORIZ_DIR,6);
setcolor(BLUE);
outtextxy(390,450, "Press any key to continue");
getch();

cleardevice();
setbkcolor(WHITE);
setcolor(BLUE);
settextstyle(3,HORIZ_DIR,6);
outtextxy(200,150,"LOADING");
delay(150);
setcolor(RED);
setfillstyle(SOLID_FILL,RED);
arc(300,200,0,90,150);
delay(300);
setfillstyle(SOLID_FILL,RED);
arc(300,200,90,180,150);
delay(300);
setfillstyle(SOLID_FILL,RED);
arc(300,200,180,270,150);
delay(300);
setfillstyle(SOLID_FILL,RED);
arc(300,200,270,360,150);
delay(300);
arc(300,200,0,90,150);
delay(300);
setcolor(WHITE);
setfillstyle(SOLID_FILL,RED);
arc(300,200,90,180,150);
delay(300);
setfillstyle(SOLID_FILL,RED);
arc(300,200,180,270,150);
delay(300);
setfillstyle(SOLID_FILL,RED);
arc(300,200,270,360,150);
delay(300);
cleardevice();
setcolor(RED);
settextstyle(3,HORIZ_DIR,6);
outtextxy(200,150,"LOADING");
setcolor(BLUE);
setfillstyle(SOLID_FILL,RED);
arc(300,200,0,90,150);
delay(300);
setfillstyle(SOLID_FILL,RED);
arc(300,200,90,180,150);
delay(300);
setfillstyle(SOLID_FILL,RED);
arc(300,200,180,270,150);
delay(300);
setfillstyle(SOLID_FILL,RED);
arc(300,200,270,360,150);
delay(250);

U:
char ch,test;
static char ch1,ch2,ch3,ch4,ch5,ch6;
gd = DETECT, gm;
initgraph(&gd, &gm, "c:\\turboc3\\bgi");

int p1,p2,p3;
int count=0,z=0,bahir=0;
cleardevice();
setbkcolor(1);

setfillstyle(SOLID_FILL, 7);
bar(150, 145,400, 190);
settextstyle(2,0,8);
outtextxy(150,101,"USERNAME");
bar(150, 240,400, 280);
outtextxy(150,201,"PASSWORD");
setfillstyle(SOLID_FILL, WHITE);
bar(0, 400, 640, 480);
if(bahir>0)
count=0;
while(count<6)
{
if(count==0)
{
settextstyle(1,0,4);
ch1=getch();
if(ch1=='n')
outtextxy(150,150,"n");
}

if(count==1)
{
ch2=getch();
if(ch2=='e')
outtextxy(170,150,"e");
}
if(count==2)
{
ch3=getch();
if(ch3=='d')
outtextxy(190,150,"d");
}
if(count==3)
{
ch4=getch();
if(ch4=='u')
outtextxy(210,150,"u");
}
if(count==4)
{
ch5=getch();
if(ch5=='e')
outtextxy(230,150,"e");
}
if(count==5)
{
ch6=getch();
if(ch6=='t')
outtextxy(250,150,"t");
}
if(ch1!='n'&&ch2!='e'&&ch3!='d'&&ch4!='u'&&ch5!='e'&&ch6!='t')
{outtextxy(152+z,150,"!");
z=z+20;
}
count++;
}
fflush(stdin);

p1=getch();
outtextxy(150,250,"*");
p2=getch();
outtextxy(160,250,"*");
p3=getch();
outtextxy(170,250,"*");
textcolor(BLACK);
if(ch1=='n'&&ch2=='e'&&ch3=='d'&&ch4=='u'&&ch5=='e'&&ch6=='t'&&p1=='1'&&p2=='2'&&p3=='3')
{
 setcolor(BLACK);
 settextstyle(3,0,4);
 outtextxy(180,400,"Login Successful!");
 settextstyle(3,0,2);
 outtextxy(350,430,"Press any key to continue");
 getch();
}

else
{settextstyle(3,0,3);
setcolor(BLACK);
 outtextxy(100,400,"Invalid Username or password");
 outtextxy(80,430," Would you like to try again? (y/n)");
 test = getch();
 if(test=='y')
 goto U;
 else
 exit(1);

}
M:
cleardevice();
settextstyle(1,0,2);
setfillstyle(SOLID_FILL, 15);
bar(50,0,70,480);
bar(0,30,1000,50);
setbkcolor(BLUE);
setcolor(LIGHTRED);
outtextxy(100,100,"BANK MAIN MENU:");
outtextxy(100,130,"1.ADD ACCOUNT");
outtextxy(100,160,"2.SEARCH");
outtextxy(100,190,"3.DELETE");
outtextxy(100,220,"4.LIST");
outtextxy(100,250,"5.MODIFY");
outtextxy(100,280,"6.Exit");
fsize=sizeof(user);
asize=sizeof(user.amt);
csize=sizeof(user.code);
ch=getch();
textcolor(WHITE);
switch(ch)
{
case '1':
	cleardevice();
	A:
	clrscr();
	add();
	printf("\n\n\nRecord has been added successfully");
	printf("\n\n\n>1.Enter another record");
	printf("\n\n\n>2.Back to main menu");
	printf("\n\n\n>3.exit");
	fflush(stdin);
	ch=getch();
	if(ch=='1')
	goto A;
	if(ch=='2')
	goto M;
	if(ch=='3')
	exit(1);
	break;

case '2':
	S:
	clrscr();
	cleardevice();
	search();
	printf("\n\n\n>1.want to search another account?");
	printf("\n\n\n>2.back to main menu");
	printf("\n\n\n3.exit");
	fflush(stdin);
	ch=getch();
	if(ch=='1')
	goto S;
	if(ch=='2')
	goto M;
	if(ch=='3')
	exit(1);
	break;
case '3':
	D:
	clrscr();
	cleardevice();
	delet();
	printf("\n\n\n>1.want to delete another account");
	printf("\n\n\n>2.go back to main menu");
	printf("\n\n\n>3.exit");
	fflush(stdin);
	ch=getch();
	if(ch=='1')
	goto D;
	if(ch=='2')
	goto M;
	if(ch=='3')
	exit(1);
	break;


case '4':
	clrscr();
	list();
	printf("\n\n\n>1.exit");
	printf("\n\n\n>2.go back to main menu");
	fflush(stdin);
	ch=getch();
	if(ch=='1')
	exit(1);
	if(ch=='2')
	goto M;
	break;
case '5':
	MD:
	clrscr();
	modify(fsize,asize,csize);
	printf("\n\n\nAccount has been modified successfully...");
	printf("\n\n\n>1.want to modify another account");
	printf("\n\n\n>2.go back to main menu");
	printf("\n\n\n>3.exit");
	ch=getch();
	if(ch=='1')
	goto MD;
	if(ch=='2')
	goto M;
	if(ch=='3')
	exit(1);

case '6':
	exit(1);

default:
	setcolor(WHITE);
	outtextxy(100,320,"Invalid choice");
	outtextxy(100,350,"Try again y/n");
	fflush(stdin	);
	ch=getch();
	if(ch=='y')
	goto M;
	if(ch=='n')
	exit(1);

}
getch();
closegraph();
}

void add(void)
{
	cleardevice();
	printf("\n\n\nADDING ACCOUNT");
	printf("\n\n\nEnter Name:");
	gets(user.name);
	printf("\n\n\nEnter Amount:");
	gets(user.amt);
	printf("\n\n\nEnter Code:");
	gets(user.code);
	fp=fopen("ham.txt","a+");
	fwrite(&user,sizeof(user),1,fp);
	fclose(fp);

}

void search(void)
{
char ch;
int count;
char cc[20];
S1:
cleardevice();
printf("Enter Code to search:");
gets(cc);
printf("\n\n\nPlease wait while searching");
delay(1000);
if((fp=fopen("ham.txt","r"))==NULL)
printf("\n\n\nError no file found");
while((fread(&user,sizeof(user),1,fp))==1)
{
if(strcmp(cc,user.code)==0)
{
count=1;
printf("\n\n\nRecord Found!!\n\n");
printf("Name:");
puts(user.name);
printf("Amount:");
puts(user.amt);
printf("Code:");
puts(user.code);
break;
}
}
if(count!=1)
{
printf("\n\n\nError in finding Code");
printf("\n\n\nTry again y/n");
fflush(stdin);
ch=getch();
if(ch=='y')
{
clrscr();
goto S1;
}
if(ch!='y')
exit(1);
}
}






void delet(void)
{
char ch;
int count;
FILE *ft;
char cc[20];
D1:
cleardevice();
printf("\n\n\nDELETE ACCOUNT\n\n");
printf("\nEnter Code to delete Data:");
gets(cc);
delay(1000);
fp=fopen("ham.txt","r");
ft=fopen("new.txt","w");
rewind(fp);
while(fread(&user,sizeof(user),1,fp)==1)
{
if(strcmp(cc,user.code)==0)
{printf("\n\n\nDeleting Record ...");
 delay(1000);
 count=1;
}
if((strcmp(cc,user.code))!=0)
fwrite(&user,sizeof(user),1,ft);
}
fclose(fp);
fclose(ft);

remove("ham.txt");
rename("new.txt","ham.txt");
if(count==1)
printf("\n\n\nRecord Deleted Successfully");
else
{
printf("\n\n\nError in finding Code");
printf("\n\n\nTry again y/n");
fflush(stdin);
ch=getch();
if(ch=='y')
{
clrscr();
goto D1;
}
if(ch!='y')
exit(1);
}
}



void list(void)
{
cleardevice();
printf("\n\n\nList of Accounts\n\n\n");
if((fp=fopen("ham.txt","r"))==NULL)
printf("\n\n\nFILE not found");
while(fread(&user,sizeof(user),1,fp)==1)
{
printf("\n\n\n");
printf("Name:%s",user.name);
printf("\nAmount:%s",user.amt);
printf("\nCode:%s",user.code);
delay(1000);
}
fclose(fp);
printf("\n\n\n\n\n\n\n\n\n\n****************************End of Accounts*****************************");
}






void modify(long int fsize,long int asize,long int csize)
{
int count;
char ch;
char cc[20];
char newn[20];
P:
cleardevice();
printf("\n\n\nEnter Code to modify Account:");
gets(cc);
delay(1000);
if((fp=fopen("ham.txt","rb+"))==NULL)
printf("\n\n\nError in opening file");
while(!feof(fp))
{
fread(&user,sizeof(user),1,fp);
if(strcmp(cc,user.code)==0)
{
count=1;
puts(user.name);
puts(user.amt);
puts(user.code);
printf("\n\n\nwant to modify");
printf("\n\n\n>1.Specific Data\n\n\n>2.Whole Account");
fflush(stdin);
ch=getch();
if(ch=='2')
{
printf("\n\n\nEnter new name:");
gets(user.name);
printf("\n\n\nEnter new amount:");
gets(user.amt);
printf("\n\n\nEnter new code:");
gets(user.code);
fseek(fp,-fsize,SEEK_CUR);
fwrite(&user,sizeof(user),1,fp);
printf("\n\n\nAccount has been modified");
break;
}
if(ch=='1')
{
printf("\n\n\nyou want to modify?");
printf("\n\n\n>1.name\n\n\n>2.Amount\n\n\n>3.Code");
fflush(stdin);
ch=getch();
fseek(fp,-fsize,SEEK_CUR);
if(ch=='1')
{
printf("\n\n\nEnter new name:");
gets(user.name);
fwrite(&user.name,sizeof(user.name),1,fp);
}
if(ch=='2')
{
fseek(fp,asize,SEEK_CUR);
printf("\n\n\nEnter new Amount:");
gets(user.amt);
fwrite(&user.amt,sizeof(user.amt),1,fp);
}
if(ch=='3')
{
fseek(fp,csize+asize,SEEK_CUR);
printf("\n\n\nEnter new code:");
gets(user.code);
fwrite(&user.code,sizeof(user.code),1,fp);
}
clrscr();
printf("\n\n\nAccount has been modified successfully");
break;
}
}
}
if(count!=1)
{
printf("\n\n\nError in finding code");
printf("\n\n\nTry again y/n");
fflush(stdin);
ch=getch();
if(ch=='y')
{
clrscr();
goto P;
}
if(ch!='y')
exit(1);
}
cleardevice();
fclose(fp);
}




