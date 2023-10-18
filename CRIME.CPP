//***************************************************************************
//*               Project Made By Ashish Gadpayle				         	*
//*               Project on POLICE FIR & CRIME MANAGEMENT SYSTEM           *
//*               College -                									*
//*               Email   - 												*                							       *
//***************************************************************************

#include<iostream.h>
#include <conio.h>
#include   <dos.h>
#include <stdio.h>
#include <iomanip.h>
#include<string.h>
#include<stdlib.h>
#include  <math.h>
#include<graphics.h>
static int p = 0;
class CRIME
{
  int j,i,ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,n,c,a;
  char  dob[10], add[5], par[5], doj[10], dept[10];
  char post[20], ename[10] ,id[5];
  char number[5];
  char nps[10], addr[20], paddr[20], name[10], dob1[10];
  char occ[20], fname[10],dates[10],nat[10],idp[20], idno[20];
  char firno[5],det[10],act[20],dis[20];

	  public:
	       void addnew();      void update();
	       void show();        void delet();
	       void addnew1();     void show1();	
	       void welcome();     void login();
	       void info();        void menu();
	       void Drawcircle();  void PED();
	       void FIR();         void vline(char);
}
b[10],d[10];

//draw vertical line

void CRIME::vline(char ch)
{
	for (i=40;i>0;i--)
	{
	cout<<ch;
	delay(10);
	}
}

//Accept FIR details

void CRIME::FIR()
{
	cout<<"\n";
	vline('-');
	cout<<"\nDate		: ";
	cin>>d[p].dates;
	cout<<"FIR No.	: ";
	cin>>d[p].firno;
	cout<<"A) Information Receive at";
	cout<<"\n  (Name of Police station) : ";
	cin>>d[p].nps;
	cout<<"B) Place of Occurance :";
	cout<<"\n i) Distance from Police Station: ";
	cin>>d[p].dis;
	cout<<" ii) Address	     : ";
	cin>>d[p].paddr;
	cout<<"C) Complaint / Informant   :";
	cout<<"\n i) Name(Name of Informant):";
	cin>>d[p].name;
	cout<<" ii) Father Name/Husband Name:";
	cin>>d[p].fname;
	cout<<" iii) Date Of Birth   : ";
	cin>>d[p].dob1;
	cout<<" iv) Nationality	     : ";
	cin>>d[p].nat;
	cout<<" v) ID Proof	     	 : ";
	cin>>d[p].idp;
	cout<<" vi) ID Number	     :";
	cin>>d[p].idno;
	cout<<" vii) Occupation	     :";
	cin>>d[p].occ;
	cout<<" viii) Address	     :";
	cin>>d[p].addr;
	cout<<"D) Details of known/suspended/unknown\n accussed with full particulars	:";
	cin>>d[p].det;
	cout<<"E) ACTs and SECTIONs  :";
	cin>>d[p].act;
	p++;
}


//Accept Employee details

void CRIME::addnew()
{
	cout<<"\nPolice_Emp_ID		: ";
	cin>>b[p].id;
	cout<<"Police_Emp_Name		: ";
	cin>>b[p].ename;
	cout<<"Police_Emp_DOB		: ";
	cin>>b[p].dob;
	cout<<"Police_Emp_Cr_Address: ";
	cin>>b[p].add;
	cout<<"Permanent_Address	: ";
	cin>>b[p].par;
	cout<<"Date_of_Joining		: ";
	cin>>b[p].doj;
	cout<<"Department_Name		: ";
	cin>>b[p].dept;
	cout<<"Type of Post			: ";
	cin>>b[p].post;
	p++;
}


//Show Employee details

void CRIME::show()
{

	cout<<"\nEnter Emp_ID: ";
	cin>>number;
	for(n=0;n<=p;n++)
	{
		if(strcmp(b[n].id, number)==0)
		break;
	}
	if(n>p)
		cout<<"Enter correct id: ";
	else
	{
	vline('*');
	cout<<"\nID			:  "<<b[n].id<<"\nName				:  "<<b[n].ename;
	cout<<"\nDOB		:  "<<b[n].dob<<"\nC_Address		:  "<<b[n].add;
	cout<<"\nP_Address	:  "<<b[n].par<<"\nDate of Joining	:  "<<b[n].doj;
	cout<<"\nDept_Name	:  "<<b[n].dept<<"\nType of Post	:  "<<b[n].post<<"\n";
	vline('*');
	}
}

//update employee details

void CRIME::update()
{
	cout<<"\n\n";
	cout<<"\nEnter Emp_ID : ";
	cin>>number;
	for(n=0;n<=p;n++)
	{
		if(strcmp(b[n].id, number)==0);
		break;
	}
	if(n>p)
		cout<<"Enter correct id: ";
	else
	{

	do{
	cout<<"\n1. ID				: "<<b[n].id<<"\n2. Name				: "<<b[n].ename;
	cout<<"\n3. DOB				: "<<b[n].dob<<"\n4. C_Address			: "<<b[n].add;
	cout<<"\n5. P_Address		: "<<b[n].par<<"\n6. Date of Joining	: "<<b[n].doj;
	cout<<"\n7. Dept_Name		: "<<b[n].dept<<"\n8. Type of Post		: "<<b[n].post<<"\n";
	cin>>c;

	switch(c)
	{
	 case 1:
		cout<<"\n Old ID		: "<<b[n].id;
		cout<<"\n Enter New ID	: ";
		cin>>b[n].id;
		break;
	 case 2:
		cout<<"\n Old Name			: "<<b[n].ename;
		cout<<"\n Enter New Name	: ";
		cin>>b[n].ename;
		break;
	 case 3:
		cout<<"\n Old DOB		: "<<b[n].dob;
		cout<<"\n Enter New DOB	: ";
		cin>>b[n].dob;
		break;
	 case 4:
		cout<<"\n Old C_Address			: "<<b[n].add;
		cout<<"\n Enter New C_Address	: ";
		cin>>b[n].add;
		break;
	 case 5:
		cout<<"\n Old P_Address			: "<<b[n].par;
		cout<<"\n Enter New C_Address	: ";
		cin>>b[n].par;
		break;
	 case 6:
		cout<<"\n Old Date of Joining		: "<<b[n].doj;
		cout<<"\n Enter New Date of Joining	: ";
		cin>>b[n].doj;
		break;
	 case 7:
		cout<<"\n Old Dept_Name			: "<<b[n].dept;
		cout<<"\n Enter New Dept_Name	: ";
		cin>>b[n].dept;
		break;
	 case 8:
		cout<<"\n Old Type of Post		: "<<b[n].post;
		cout<<"\n Enter New Type of Post: ";
		cin>>b[n].post;
		break;
	 default:
		cout<<"Please Select correct option";
		break;
	}
	}while(c!=1&&c!=2&&c!=3&&c!=4&&c!=5&&c!=6&&c!=7&&c!=8);
	cout<<"\nRecord is Updated....";
	}

}


//Delete employee details
  
void CRIME::delet()
{
	cout<<"\n\n";
	cout<<"\nEnter Emp_ID: ";
	cin>>number;
	for(n=0;n<=p;n++)
	{
		if(strcmp(b[n].id, number)==0)
		break;
	}

	if(n>p)

		cout<<"Enter correct id... ";
	else
	{
	a=n;
	while(a<p)
	{
	b[a]=b[a+1];
	a++;
	}
	p--;
	cout<<"\nRecord is Deleted....";
	}
}

//Show FIR Details
void CRIME::show1()
{
	cout<<"\nEnter FIR_ID: ";
	cin>>number;
	for(n=0;n<=p;n++)
	{
		if(strcmp(d[n].firno, number)==0)
		break;
	}
	if(n>p)
		cout<<"Enter correct FIR_ID ";
	else
	{
	cout<<"\n";
	vline('~');
	cout<<"\n\nDate		: "<<d[n].dates;
	cout<<"\t\tFIR No.	: "<<d[n].firno;
	cout<<"\n";
	vline('~');
	cout<<"\nA) Information Receive at";
	cout<<"\n  (Name of Police station)    	: "<<d[n].nps;
	cout<<"\nB) Place of Occurance	      	:";
	cout<<"\n i) Distance from Police Station: "<<d[n].dis;
	cout<<"\n ii) Address		       		: "<<d[n].paddr;
	cout<<"\nC) Complaint / Informant      	:";
	cout<<"\n i) Name(Name of Informant)   	: "<<d[n].name;
	cout<<"\n ii) Father Name/Husband Name 	: "<<d[n].fname;
	cout<<"\n iii) Date Of Birth	       	: "<<d[n].dob1;
	cout<<"\n iv) Nationality	      		: "<<d[n].nat;
	cout<<"\n v) ID Proof 		      		: "<<d[n].idp;
	cout<<"\n vi) ID Number 				: "<<d[n].idno;
	cout<<"\n vii) Occupation	       		: "<<d[n].occ;
	cout<<"\n viii) Address		       		: "<<d[n].addr;
	cout<<"\nD) Details of known/suspended/unknown\n accussed with full particulars	: "<<d[n].det;
	cout<<"\nE) ACTs and SECTIONs	       	: "<<d[n].act;cout<<"\n";
	vline('~');
	}
}

//Rotating the circle

void CRIME::Drawcircle()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"..\\bgi");
 for(i=0;i<=100;i++)
 {
  delay(1);
  setcolor(i);
   for(j=1;j<=5;j++)
   {
   circle(100+158,240,100);
   circle(100+158,240,99);
   circle(100+158,240,98);
   circle(130+158,220,44);
   circle(60+158,220,44);
   circle(100+158,280,44);
   circle(5+150,240,44);
   circle(101+150,240,44);
   circle(197+150,240,44);
   cout<<"\n";
   }
  }
getch();
 }

// Menus for Selection best choice

void CRIME::menu()
{
   cleardevice();
   clrscr();
   textmode(C40);
   textcolor(LIGHTGREEN);	// to set the color of the text
   gotoxy(8, 8);
   do
   {
   s1:
   cprintf("Select Any One ");
   gotoxy(9, 13);
   textcolor(WHITE);
   cprintf("1. Police Employment Details");
   gotoxy(9, 15);
   cprintf("2. FIR System ");
   gotoxy(9, 17);
   cprintf("3. EXIT ");
   cin>>ch1;
   closegraph();
		      switch(ch1)
		      {
		      //cleardevice();
		      //textcolor(WHITE);
		      case 1:
			do
			{
			s:
			cout<<"\n\n\n\t\t1.ADD NEW\t3.VIEW";
			cout<<"\n\n\n\t\t2.UPDATE \t4.DELETE";
			cout<<"\n\n\n\t\t5.GO BACK\t";
			cin>>ch2;
			//textcolor(YELLOW);
			switch(ch2)
			{
			//textcolor(YELLOW);
			case 1:
				clrscr();
				cout<<"\n\n\t\t\t* ADD NEW *";
				addnew();
				getch();
				goto s;

			case 2:
				clrscr();
				cout<<"\n\n\t\t\t* UPDATE *";
				update();
				//cout<<"\nRecord is Updated....";
				getch();
				clrscr();
				goto s;
			case 3:
				clrscr();
				cout<<"\n\n\t\t\t* SHOW *";

				show();
				getch();
				clrscr();
				goto s;

			case 4: clrscr();
				cout<<"\n\n\t\t\t* DELETE *";
				delet();
				//cout<<"\nRecord is Deleted....";
				getch();
				clrscr();
				goto s;
			case 5:
				//cleardevice();
				clrscr();
				goto s1;

			default:
				cout<<"\nSorry your selection is wrong \nplease select correct option\n";
			break;
			}
			}while(ch2!=1 && ch2!=2 && ch2!=3 && ch2!=4 && ch2!=5);

			getch();
			clrscr();
			
			 break;
		      case 2:
			      do{
				s2:
				clrscr();
			      cout<<"\n\n\n\t\t1. ADD_REPORT\n\n\n\t\t2. VIEW_REPORT";
			      cout<<"\n\n\n\t\t3. GO BACK\t";

			      cin>>ch3;
			textcolor(WHITE);
			switch(ch3)
			{
			//textcolor(YELLOW);
			case 1:
				clrscr();
				cout<<"\n\n\t\t* ADD REPORT *";
				FIR();
				getch();
				clrscr();
				goto s2;

			case 2:
				clrscr();
				cout<<"\n\n\t\t* VIEW REPORT *";
				show1();
				getch();
				clrscr();
				goto s2;
			case 3:
				clrscr();
				goto s1;

			default:
			       cout<<"\nSorry your selection is wrong \nplease select correct option\n";
			break;
			}
			}while(ch3!=1 && ch3!=2 && ch3!=3 );
			      getch();
			     
			 break;

		      case 3:
			       textmode(C40);
				textcolor(LIGHTGREEN);	// to set the color of the text
				gotoxy(10, 8);
				cprintf("Thanks...... ");
				gotoxy(12, 13);
				textcolor(LIGHTCYAN);
				cprintf(" PROJECT MADE BY ");
				gotoxy(17, 18);
				textcolor(LIGHTMAGENTA+BLINK);
				cprintf(" \' Ashish \' ");

			    break;
		      default:
			clrscr();
			cout<<"\nSorry your selection is wrong please select correct option\n";
			break;
			}
			}while(ch1!=1 && ch1!=2 && ch1!=3);
			getch();
}

//Information of project maker
void CRIME::info()
{
   textmode(C40);
   textcolor(LIGHTGREEN+BLINK);	// to set the color of the text
   gotoxy(10, 8);
   cprintf("This project is Made by ");
   gotoxy(12, 13);
   textcolor(LIGHTCYAN);
   cprintf("\' Ashish Gadpayle \'");
   gotoxy(15, 15);
   cprintf(" MCA ");
   gotoxy(9, 17);
   cprintf("help4code eLearning, Nagpur ");
   getch();
}

//login form

void CRIME::login()
{
clrscr();
textmode(C80);
	g:
       int i=0,k=0,y=35;
	char a,b[7],c[7]="ashish";
	clrscr();
	textbackground(BLACK);
	gotoxy(25,10);
	printf("         Enter password:           ");
	textbackground(BLACK);
	textbackground(YELLOW);
	textcolor(CYAN);
	gotoxy(32,14);
	cprintf("             ");
	gotoxy(32,15);
	cprintf("             ");
	gotoxy(32,16);
	cprintf("             ");
	gotoxy(35,15);
	fflush(stdin);
	while ((a=getch())!='\r')
	{
	if(a==8&&y>35)
	{
	y--;
	i--;
	b[i]=NULL;
	gotoxy(y,15);
	printf(" ");
	}
	else
	{
		b[i]=a;
	gotoxy(y,15);
		printf("*");
		i++;
		y++;
	}
	}
	getch();
	b[i]='\0';
	fflush(stdin);
	if(strcmp(b,c)==0)
	{
	Drawcircle();
	menu();
	getch();
	}
	else
	{
			k++;
			gotoxy(31,18);
			textcolor(RED+BLINK);
			textbackground(10);
			cprintf("                         ");
			gotoxy(31,19);
			cprintf("  Sorry Wrong Password!  ");
			gotoxy(31,20);
			cprintf("                         ");
			textcolor(15);
			textbackground(BLACK);
			getch();
			cleardevice();
			goto g;
	}
}

// Welcome window

void CRIME::welcome()
{
clrscr();
int i;
   textmode(C40);
   textcolor(LIGHTMAGENTA);	// to set the color of the text
   gotoxy(10, 8);
   cprintf("WELCOME TO MY PROJECT ");
   textmode(C40);
   gotoxy(15, 13);
   textcolor(YELLOW+BLINK);
   cprintf("POLICE FIR ");
   gotoxy(19, 15);
   cprintf("& ");
   gotoxy(9, 17);
   cprintf("CRIME MANAGEMENT SYSTEM ");
   fflush(stdin);
   getch();
}

void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"..\\bgi");
gotoxy(0,500);
CRIME c;
c.welcome();
c.info();
c.login();
getch();
}