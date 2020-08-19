/*****************************************************************************************************************************/
/*Project Name:Codefever*/
/*Software Used:Turbo C++ 4.0*/ 
/*Developed By:Janhavi Choudhari*/
/****************************************************************************************************************************/
#include<iostream.h>
#include<math.h>
#include<constrea.h>
#include<conio.h>
const double pi=3.14159;
int main() {
	clrscr();
	textcolor(13);
	gotoxy(30,1);
	cprintf("System of Forces");
	textcolor(6);
	cout<<"\n";
	constream cout;
	cout<<setclr(500);
	cprintf("This program will help you to find the resultant of system of forces.");
	cout<<"\n\n";

	char digit,direction;
	int num;
	int magnitude;
	textcolor(14);
	cprintf("Press 1 if the forces are collinear.");
	cout<<"\n";
	textcolor(11);
	cprintf("Press 2 if the forces are concurrent.");
	cout<<"\n";
	textcolor(10);
	cprintf("Press 3 if the forces are non-concurrent.");
	cout<<"\n";
	textcolor(12);
	cprintf("Press 4 if the forces are parallel.");
	cin>>digit;
	cout<<"\n";
	switch(digit)
	{
		case '1':
			{
			textcolor(14);
			cprintf("The given forces are collinear.");
			cout<<"\n";
			cprintf("Enter the number of forces: ");
			cin>>num;
			cout<<"\n";
			static double FX=0;
			double angle;
			cprintf("\nEnter the magnitudes of forces in Newton(N).");
			cout<<"\n";
			cprintf("Enter angle as '0' degrees for positive X-axis direction and '180' degrees for negative X-axis direction");
			cout<<"\n";
			textcolor(3);
			cprintf("Calculations: ");
			cout<<"\n";
			for(int i=0;i<num;i++)
			{
			    textcolor(3);
			    cprintf("F=");
			    cin>>magnitude;
			    cprintf("Theta=");
			    cin>>angle;
			    double radians=angle*pi/180;
			    double fx=magnitude*cos(radians);
			    cprintf("Value of fx is: ");
			    cout<<fx<<endl;
			    FX=FX+fx;
			}
			cout<<"\n";
			textcolor(14);
			cprintf("The resultant of the collinear system of forces is:");
			cout<<FX<<"\n";
			constream cout;
			cout<<setclr(500);
			cout<<"Congratulations!! You have saved 55 seconds!!";
			}
			break;
	       case '2':
			textcolor(11);
			cprintf("The given forces are concurrent.");
			cout<<"\n";
			char alphabet;
			textcolor(6);
			cprintf("Press a if the angle of inclinations are known.");
			cout<<"\n";
			textcolor(15);
			cprintf("Press b if the co-ordinates of the forces are known.");
			cout<<"\n";
			textcolor(2);
			cprintf("Press c if there are only 2 forces acting on the system.");
			cin>>alphabet;
			switch(alphabet)
			{
				case 'a':{
					 cout<<"\n";
					 textcolor(6);
					 cprintf("Consider all the forces to be pull type of forces.");
					 cout<<"\n";
					 cprintf("Enter the number of forces: ");
					 cin>>num;
					 float fx,fy,resultant;
					 static double FX=0,FY=0;
					 for(int i=0;i<num;i++)
					 {
						double magnitude;
						textcolor(11);
						cprintf("Enter magnitude is: ");
						cin>>magnitude;
						double radians,degrees;
						cprintf("Angle with respect to positive X-axis is: ");
						cin>>degrees;
						radians=degrees*pi/180;
						fx=magnitude*cos(radians);
						fy=magnitude*sin(radians);
						FX=FX+fx;
						FY=FY+fy;
					}
					textcolor(11);
					cprintf("FX is:");
					cout<<FX<<"N"<<endl;
					cprintf("FY is:");
					cout<<FY<<"N"<<endl;
					float r=(FX)*(FX)+(FY)*(FY);
					resultant=sqrt(r);
					cout<<"\n";
					textcolor(6);
					cprintf("Resultant of the concurrent system of forces is: ");
					cout<<resultant<<"N";
					cout<<"\n";
					cprintf("The angle of the resultant force wrt positive X-axis is: ");
					double theta,thetaR,thetaD;
					thetaR=atan(abs(FY/FX));
					theta=thetaR*180/pi;
					cprintf("theta=");
					cout<<theta<<endl;
					if(FX>0 && FY>0)
					cprintf("The resultant lies in the first quadrant");
					else if(FX<0 && FY>0)
					{
						cprintf("The resultant lies in the second quadrant");
						cout<<"\n";
					}
					else if(FX<0 && FY<0)
					{
						cprintf("The resultant lies in the third quadrant");
						cout<<"\n";
					}
					else if(FX>0 && FY<0)
					{
						cprintf("The resultant lies in the fourth quadrant");
						cout<<"\n";
					}
					cout<<endl;
					constream cout;
					cout<<setclr(500);
					cout<<"Congratulations!! You have saved 4 minutes 30 seconds!!";
					getch();
				}
				break;
				case 'b':{
					   textcolor(15);
					   double fx1=0,fy1=0,FX1=0,FY1=0,r1,resultant1;
					   cout<<"\n";
					   cprintf("Consider all type of forces to be pull type of forces.");
					   int num;
					   cout<<"\n";
					   cprintf("Enter the number of forces: ");
					   cin>>num;
					   for(int i=0;i<num;i++)
					   {
						textcolor(15);
						int x1,x2,y1,y2;
						textcolor(11);
						cprintf("Calculations:");
						cout<<"\n";
						cprintf("Please enter the first X: ");
						cin>>x1;
						cprintf("Please enter the first Y: ");
						cin>>y1;
						cout<<"Co-ordinates are: ("<<x1<<","<<y1<<")";
						cout<<"\n";
						cprintf("Please enter the second X: ");
						cin>>x2;
						cprintf("Please enter the second Y: ");
						cin>>y2;
						cout<<"Co-ordinates are: ("<<x2<<","<<y2<<")";
						double theta,thetam,m1,m2;
						m1=abs(y2-y1);
						m2=abs(x2-x1);
						if(x2>=0&&y2>=0)
						{
						if(m2==0)
						thetam=pi/2;
						else
						thetam=atan(m1/m2);
						}
						if(x2<0&&y2>=0)
						thetam=pi-(atan(m1/m2));
						if(x2<=0&&y2<=0)
						{
						if(m2==0)
						thetam=pi+(pi/2);
						else
						thetam=pi+atan(m1/m2);
						}
						if(x2>0&&y2<=0)
						thetam=(2*pi)-(atan(m1/m2));
						theta=thetam*180/pi;
						int magnitude;
						double radians;
						cout<<"\n";
						cprintf("Magnitude is: ");
						cin>>magnitude;
						cout<<"\n";
						cprintf("Angle of inclination is: ");
						cout<<theta;
						fx1=magnitude*cos(thetam);
						fy1=magnitude*sin(thetam);
						cout<<"\n";
						cprintf("fx=");
						cout<<fx1;
						cout<<"\n";
						cprintf("fy=");
						cout<<fy1;
						FX1=FX1+fx1;
						FY1=FY1+fy1;
					}
					cout<<endl;
					textcolor(15);
					cprintf("FX= ");
					cout<<FX1<<"N"<<endl;
					cprintf("FY= ");
					cout<<FY1<<"N"<<endl;
					r1=(FX1)*(FX1)+(FY1)*(FY1);
					resultant1=sqrt(r1);
					cprintf("Resultant of the given system of forces is: ");
					cout<<resultant1<<"N";
					cout<<"\n";
					cprintf("The angle of the resultant force wrt positive X-axis is: ");
					double thetaFIN,thetaR,thetaD;
					thetaR=atan(abs(FY1/FX1));
					thetaFIN=thetaR*180/pi;
					cout<<thetaFIN;
					constream cout;
					cout<<setclr(500);
					cout<< "\nCongratulations!! You have saved 6 minutes 5 seconds!!";
					getch();
				}
				break;
				case 'c':
					{
						textcolor(2);
						cprintf("We use parallelogram law of forces.");
						cout<<"\n\n";
						textcolor(11);
						cprintf("Calculations:");
						cout<<"\n";
						double P,Q,R,theta,Resultant;
						cprintf("The magnitudes are: ");
						cout<<"\n";
						cin>>P>>Q;
						cprintf("The angle between the two forces: ");
						cout<<"\n";
						cin>>theta;
						textcolor(2);
						cprintf("\nThe resultant is: ");
						double radians=theta*pi/180;
						double m=P*P+Q*Q+(2*P*Q*cos(radians));
						Resultant=sqrt(m);
						cout<<Resultant<<"N";
						double alpha,rads;
						alpha=atan((Q*sin(radians))/(P+Q*cos(radians)));
						rads=alpha*180/pi;
						cout<<"\n";
						cprintf("The angle of resultant with respect to positive X-axis in degrees is: ");
						cout<<rads;
						constream cout;
						cout<<setclr(500);
						cout<<"\nCongratulations!! You have saved 3 minutes 35 seconds";
						getch();

				 }
				 break;
			      default: cout<<"Not a valid alphabet";
				       break;
			      }
		case '3':cout<<"The given forces are non-concurrent.\n";

			 break;
		case '4':cout<<"The given forces are parallel.\n";
			 break;
		default :cout<<"Not a valid number.";

	}getch();
	return 0;
}