#include <iostream>
#include <cmath>
#include <iomanip>
#include <windows.h>

using namespace std;
double ticketTypeI(int& Kid, int& Adult, int& Citizen);
double ticketTypeN(int& Kid, int& Adult, int& Citizen);
void movieName(int& movieA,int& movieB, int & movieC, string title, char& type);
double food();
void call(double& subprice,double &totalfee ,string &merch,double &tax,double &taxamount, double &disc);
void receipt(string& name, string &Pnum, int &Kid,int& Adult, int &Citizen, string &cine, double &Ttotal,  double &subtotal,double& subprice,double &disc, double &tax,double &taxamount,double &totalfee, string& merch);
void minNmax(int movieA, int movieB, int movieC, int&max, int &min);
void movieM(int movieA, int movieB, int movieC, string &mostchosenmovie, string &minchosenmovie,int min, int max);
	void table();
						

int main()
{
		HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
		string name=" ",Pnum=" ",cine=" ", merch=" ", title=" ", mostchosenmovie=" ",minchosenmovie=" ",maxMovie=" ",pass1=" ",pass=" ";
		char movie=' ',type=' ';
		double feecust[100],Ttotal=0.00,price=0.00,subtotal=0.00,subprice=0.00,tax=0.06,total1=0.00,total2=0.00,taxamount=0.00, disc=0.00,sum=0.00;
		int tpeople=0,amount=0, people=1,countA=0,countB=0,Kid=0,Citizen=0,Adult=0, movieA=0, movieB=0, movieC=0, max=-999,min=999, i = 0,all=0,totalpup1=0,totalpup2=0,mulu=0,mulu2=0;
		char choice=' ',repeat=' ',hall=' ';
		double totalfee=0.00,avg=0.00;//dlmdisc
		cout<<fixed<<setprecision(2)<<showpoint;
	do{
		double sum=0.0;
	do{

		int Kid=0,Adult=0,Citizen=0;
				HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h,15);

		cout<<"\t\t\t        __________________________________________________________________________________________________________________________________________"<<endl;
cout<<"\t\t\t      ||                                                                                                                                         ||"<<endl;
cout<<"\t\t\t      ||                                                                  INDOMINUS CINEMA                                                       ||                      "<<endl;
cout<<"\t\t\t      ||_________________________________________________________________________________________________________________________________________||"<<endl;

cout<<"\n\n\t\t\t\t\t\t\t\t\t\t NAME :";
	getline(cin,name);
	cout<<"\n\t\t\t\t\t\t\t\t   ENTER PHONE NUMBER :";
	cin>>Pnum;

				SetConsoleTextAttribute(h,15);

	cout<<"\n\n\t\t\t       ________________________________________________________________ CINEMA SELECTION____________________________________________________________"<<endl;
						SetConsoleTextAttribute(h,3);

	cout<<"\n\t\t\t\t\t\t\t              ----------------------------------------------------------------";
	cout<<"\n\t\t\t\t\t\t\t              |           [I] IMAX         |            [N] NORMAL           | ";
	cout<<"\n\t\t\t\t\t\t\t              ----------------------------------------------------------------";
						SetConsoleTextAttribute(h,15);

	cout<<"\n\n\t\t\t\t\t\t\t\t             CINEMA:";
	cin>>type;
	
	
	if (type=='I'||type=='i')
	{
		cine="IMAX";
			Ttotal = ticketTypeI( Kid,  Adult,  Citizen);//////////////////////////////////ticket price   &   number of person
			
			
			 movieName( movieA, movieB,  movieC,  title, type);////////////////////////////selction of movie

			totalpup1=Kid+Adult+Citizen;/////////////////////////////////////////calculate total of people for i cinema
			
			SetConsoleTextAttribute(h,11);
						
						
	 	cout<<"\n\t\t\t\t\t\t\t\t\t\t----------------------------------------";
		 cout<<"\n\t\t\t\t\t\t\t\t\t\t           TICKET PRICE : RM"<<Ttotal<<endl	;//ticket price
		 cout<<"\t\t\t\t\t\t\t\t\t\t----------------------------------------";
		 
		 subtotal=food();//harga makanan
		 
	  	 subprice=Ttotal+subtotal;//////////makanan campur ticket
	  	 
	  	 
	  	 
	  	 		SetConsoleTextAttribute(h,11);
	  	 cout<<"\n\n\t\t\t\t\t\t\t\t\t\t----------------------------------";
	 	 cout<<"\n\t\t\t\t\t\t\t\t\t\t subprice :RM"<<subprice;		// subprice
	 	 cout<<"\n\t\t\t\t\t\t\t\t\t\t----------------------------------";

		 call(subprice,totalfee , merch, tax, taxamount,disc);//TOTAL	
		 countA++;
		 system("CLS");
		 		

		  receipt( name,  Pnum,  Kid, Adult,Citizen, cine, Ttotal,   subtotal,subprice, disc, tax,taxamount,totalfee, merch);

		 
	}
	
	else if	(type=='N'||type=='n')
	{
		cine="NORMAL";
		Ttotal = ticketTypeN( Kid, Adult,  Citizen);///////////////////////////////////////////////////////////////Ttotal=ticket fee
		
		
		 movieName( movieA, movieB,  movieC,  title, type);

			totalpup2=Kid+Adult+Citizen;///////////////////number of customer for cinema n
					
			SetConsoleTextAttribute(h,11);
		cout<<"\n\t\t\t\t\t\t\t\t\t\t----------------------------------------";
		 cout<<"\n\t\t\t\t\t\t\t\t\t\t           TICKET PRICE : RM"<<Ttotal<<endl	;//ticket price
		 cout<<"\t\t\t\t\t\t\t\t\t\t----------------------------------------";	
		 							SetConsoleTextAttribute(h,15);

		subtotal=food();/////////////////////////////////////////////////////////////////////////////////////////////subtotal harga makanan
		
		
		subprice=Ttotal+subtotal;////////////////////////ticekt+food
		
			SetConsoleTextAttribute(h,11);
		cout<<"\n\t\t\t\t\t\t\t\t\t\t----------------------------------";
		cout<<"\n\t\t\t\t\t\t\t\t\t\t subprice :RM"<<subprice;
		cout<<"\n\t\t\t\t\t\t\t\t\t\t----------------------------------";

		 call(subprice,totalfee , merch, tax, taxamount,disc);
		 countB++;	 
		 			system("CLS");
		 					

		 		  receipt( name,  Pnum,  Kid, Adult,Citizen, cine, Ttotal,  subtotal,subprice, disc, tax,taxamount,totalfee, merch);
		 		  


	}
	else 
	{
		cout<<"\n\t\t\t\t\t\t\t\t\t   INVALID CINEMA";
	}
	           			

				 feecust[i]=totalfee;///summation////// i=each ticket generate
				 
				 
			i++;////////////////ticket generate

	mulu+=totalpup1;
	mulu2+=totalpup2;
	all=mulu+mulu2;		
				SetConsoleTextAttribute(h,15);
	 
	cout<<"\n\n\n\t\t\t\t\t\t\t\t\tWELCOME TO INDOMINUS CINEMA DO YOU WANT TO START BOOKING? [y]|[n] =";
	 cin>> choice;	
	}while(choice=='Y'||choice=='y');
	
	
	//SUMMATION AND ARRAY
	for(int counter=0; counter<i; counter++)
	{
		sum+=feecust[counter];
	}
					 avg=sum/i;/////AVG ARRAY

				 
	minNmax( movieA,  movieB, movieC,  max,  min);		//////////////////////////max/min	
	movieM( movieA,  movieB,  movieC,  mostchosenmovie,  minchosenmovie, min, max);
	
	cout<<"\n\n\t\t\t\t\t\t\t\t\tENTER STAFF PASSWORD: ";
	cin>>pass1;
	string pass[3]={"2022492622"/*mc*/,"2022874998","2022453956"} ;
	
	
	
	while(pass1 !=pass[0] && pass1!=pass[1] && pass1!=pass[2])
	{
		cout<<"\n\n\t\t\t\t\t\t\t\t\tINVALID STAFF PASSWORD :"<<endl;
		cout<<"\n\n\t\t\t\t\t\t\t\t\tENTER STAFF PASSWORD: ";
	    cin>>pass1;
	}	
	if(pass1 ==pass[0] || pass1==pass[1] || pass1==pass[2])	
	{
		system("CLS");
			
			SetConsoleTextAttribute(h,11);

cout<<" \t\t\t\t\t\t\t\t\t __________________________________________________________________"<<endl;
cout<<"\t\t\t\t\t\t\t\t\t||                                                                  ||"<<endl;                    
cout<<"\t\t\t\t========================================||                        INCOME STATEMENT                          ||================================================  "<<endl;
cout<<"\t\t\t\t\t\t\t\t\t||__________________________________________________________________||";
cout<<"\n\n\n\t\t\t\t\t\t\t\t\t        MOST WHATCHES MOVIE          :[ "<<mostchosenmovie<< " ] "<<endl;
cout<<"\t\t\t\t\t\t\t\t\t TOTAL CUSTOMER CHOOSING THIS FILM   :[ "<<max<< " ] "<<endl;

cout<<"\n\t\t\t\t\t\t\t\t\t         LEAST WATCHED MOVIE         :[ "<<minchosenmovie<< " ] "<<endl;
cout<<"\t\t\t\t\t\t\t\t\t TOTAL CUSTOMER CHOOSING THIS FILM   :[ "<<min<< " ] "<<endl;
cout<<" \t\t\t\t\t\t\t\t\t __________________________________________________________________"<<endl;
cout<<" \t\t\t\t\t\t\t\t\t __________________________________________________________________"<<endl;

	cout<<"\n\t\t\t\t\t\t\t\t\t IMAX CINEMA TOTAL CUSTOMER       : "<<mulu<<endl;
	cout<<"\n\t\t\t\t\t\t\t\t\t NORMAL CINEMA TOTAL CUTOMER      : "<<mulu2<<endl;
	cout<<"\n\t\t\t\t\t\t\t\t\t TOTAL CINEMA CUSTOMER            : "<<all<<endl;
	cout<<" \t\t\t\t\t\t\t\t\t __________________________________________________________________"<<endl;
cout<<" \t\t\t\t\t\t\t\t\t __________________________________________________________________"<<endl;

		cout<<"\n\n\t\t\t\t\t\t\t\t\t TOTAL RECEIPT GENERATE           : "<<i<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t TOTAL SALE                       : RM"<<sum<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t TOTAL AVERAGE SALE               : RM"<<avg<<endl;			//setiap 1 receipt	
	cout<<" \t\t\t\t\t\t\t\t\t                                                                   "<<endl;

	
cout<<" \t\t\t\t\t\t\t\t\t __________________________________________________________________"<<endl;
cout<<" \t\t\t\t\t\t\t\t\t __________________________________________________________________"<<endl;

	
	
	
	
	cout<<"\n\n\t\t\t\t\t\t\t\t\tPRESS Y TO RETURN MAINPAGE [Y]"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\tPRESS N TO EXIT PROGRAM    [N]  "<<endl;
	cout<<"\n\t\t\t\t\t\t\t\t\tENTER ANSWER :";

	cin>>repeat;
	
	 }	 
				 		
				 

			

	}while(repeat=='y'||repeat=='Y');
	
	
return 0;
}
//==========================================================================================================================================================================================================




double ticketTypeI(int& Kid, int& Adult, int& Citizen)// parameter ade return value
{
	double Ttotal=0.00,price=0.00;
	int tpeople=0,people=1,age=0;
	
				 cout<<"\n\t\t\t\t\t\t\t\t QUANTITY OF PEOPLE :";
				  cin>>tpeople;
					while(tpeople>=people)
					{
					
						cout<<"\n\t\t\t\t\t\t\t\t ENTER AGE OF CUSTOMER : CUSTOMER "<<people<<" :";
						cin>>age;
						
						if(age>=1&&age<=6)
							{
							price=20;
							Kid++;
							}		
						else if(age>6&&age<59)
							{
							price=40;
							Adult++;
							}
						else if(age>=60)
							{
								price=35;
								Citizen++;
							}
							
						Ttotal+=price;
						
							people++;
						}		
					return Ttotal;				
}
//===================================================================================================================================================================================================================






double ticketTypeN(int& Kid, int& Adult, int& Citizen )// parameter //ade return value
{
	double Ttotal=0.00,price=0.00;
	int tpeople=0,people=1,age=0;
	
			 cout<<"\n\t\t\t\t\t\t\t\t QUANTITY OF PEOPLE :";
				  cin>>tpeople;
					while(tpeople>=people)
					{
						
						cout<<"\n\t\t\t\t\t\t\t\t ENTER AGE OF CUSTOMER : CUSTOMER "<<people<<" :";
						cin>>age;
						
						if(age>=1&&age<=6)
							{
							price=10;
							Kid++;
							
							}		
						else if(age>6&&age<59)
							{
							price=20;
							Adult++;
							}
						else if(age>=60)
							{
								price=15;
								Citizen++;
							}
						Ttotal+=price;
							people++;
							
						}		
						return Ttotal;					
			
}


//================================================================================================================================================================================================================




void movieName(int& movieA,int& movieB, int & movieC, string title, char& type)//no retrun value // parameter
{
				HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	char  hall=' ',movie=' ';						SetConsoleTextAttribute(h,15);

		cout<<"\n\n\t\t\t        ________________________________________________________________ MOVIE SELECTION_____________________________________________________________"<<endl;
								SetConsoleTextAttribute(h,12);

	cout<<"\n\t\t\t\t\t\t\t\t --------------------------------------------------------------------------";
	cout<<"\n\t\t\t\t\t\t\t\t|    [A] INSIDIOUS      |     [B] CONJURING       |     [C] DODOCO TALES   |"; 
	cout<<"\n\t\t\t\t\t\t\t\t --------------------------------------------------------------------------";
	SetConsoleTextAttribute(h,15);
			
	do{
       
       cout<<"\n\n\t\t\t\t\t\t\t\t\t\t         MOVIE CODE  :";
		cin>>movie;
       
		if(movie=='A'||movie=='a')
		{
			if(type=='i'||type=='I')
			{
				hall='A';
			}
			else if(type=='n'||type=='N')
			{
				hall='D';	
			}
			title="INSIDIOUS ";
		
			movieA++;
		}
		else if(movie=='B'||movie=='b')
			{
				if(type=='i'||type=='I')
			{
				hall='B';
			}
			else if(type=='n'||type=='N')
			{
				hall='E';	
			}
			
			title="CONJURING ";
			movieB++;	
			}	
		else if(movie=='C'||movie=='c')
			{
				if(type=='i'||type=='I')
			{
				hall='C';
			}
			else if(type=='n'||type=='N')
			{
				hall='F';	
			}
			title="DODO TALES ";
			
			movieC++;	
			}	
		else if(movie!='A'&& movie!='a'&&movie!='B'&& movie!='b'&&movie!='C'&& movie!='c')
		 {
			cout<<"\n\t\t\t\t\t\t\t\t\t\t  PLEASE INPUT CODE AGAIN";
			
	 	}
 
            
	}while(movie!='A'&&movie!='B'&&movie!='C');


	
	cout<<"\n\t\t\t\t\t\t\t\t\t\tMOVIE SELECTION      :"<<title<<endl;
	cout<<"\n\t\t\t\t\t\t\t\t\t\tHALL                 : "<<hall<<endl;
}


//============================================================================================================================================================================================================


//function food///table
double food()//no paramter// return value
{			HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	char ticket=' ',food=' ',typepack=' ',a=' ',choice=' ',choice1=' ',combo=' ',choice2=' ',makanan=' ';

		double total1=0.00,total2=0.00,subtotal=0.00;
		int qtty=0,qtt=0;
							SetConsoleTextAttribute(h,15);

	cout<<"\n\n\t\t\t\t\t\t\t\t DO YOU WANT TO ADD ON FOOD PACKAGE?:  ||  YES [Y]  ||   ||   NO [N]  ||";
		cout<<"\n\t\t\t\t\t\t\t\t ENTER CODE                         :";
		cin>>food;
				
	if(food=='y'||food=='Y')
	{
					SetConsoleTextAttribute(h,11);

    				table();//JADUAL
		do{

					SetConsoleTextAttribute(h,15);
				cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  [C-COMBO || A-ALACARTE]     :";
				cin>>makanan;
					
				if (makanan=='c'||makanan=='C')
					{
					do
					{

				cout<<"\n\t\t\t\t\t\t\t\t\t\t  ENTER COMBO PACKAGE [A] [B] :";
					cin>>combo;
						switch(combo)
							{
								case 'a':
								case 'A':
										 cout<<"\n \t\t\t\t\t\t\t\t\t\t  ENTER QUANTITY       :";
										 cin>>qtty;
										 qtty=qtty*7.50;
										 break;
										 
								case 'b':
								case 'B': cout<<"\n \t\t\t\t\t\t\t\t\t\t  ENTER QUANTITY       :";
										 cin>>qtty;
										 qtty=qtty*6.00;
										break;
							}
							total1+=qtty;
							
						cout<<" \n\n \t\t\t\t\t\t\t\t\t\t  DO YOU WANT TO ADD MORE COMBO PACKAGE? -> || YES [Y] ||   || NO [N] || ";
						cout<<"\n \t\t\t\t\t\t\t\t\t\t  CONFIRMATION         :";
						cin>>choice1;
						}while(choice1=='Y'||choice1=='y');
							SetConsoleTextAttribute(h,10);
							cout<<"\n\n\t\t\t\t\t\t\t\t\t\t----------------------------------";
							cout<<"\n\t\t\t\t\t\t\t\t\t\t  COMBO AMOUNT         :RM"<<total1;
							cout<<"\n\t\t\t\t\t\t\t\t\t\t------------------------------------";
					}
					
				else if (makanan=='a'||makanan=='A')
					{
					do	
					{

						SetConsoleTextAttribute(h,15);
							cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  ENTER ALACARTE CODE  :";	 
							cin>>a;
							switch(a)
							{
						    	case 'p':	
								case 'P':cout<<"\t\t\t\t\t\t\t\t\t\t\t               :[popcorn]";
								 		cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  ENTER QUANTITY       :";
								 		cin>>qtt;
								 		qtt=qtt*5;
								 		break;
							    case 'w':  
								case 'W':cout<<"\t\t\t\t\t\t\t\t\t\t\t               :[water]";
								 		cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  ENTER QUANTITY       :";
								 		cin>>qtt;
								 		qtt=qtt*3;
								 		break;
							    case 'h':
								case 'H':cout<<"\t\t\t\t\t\t\t\t\t\t\t               :[hotdog]";
								 		cout<<"\n\n\t\t\t\t\t\t\t\t\t\t  ENTER QUANTITY       :";
								 		cin>>qtt;
								 		qtt=qtt*5; 
								 		break;
								}
							total2+=qtt;
				
						cout<<" \n\n \t\t\t\t\t\t\t\t\t\t  DO YOU WANT TO ADD MORE ALACARTE PACKAGE? -> || YES [Y] ||   || NO [N] || ";
						cout<<"\n \t\t\t\t\t\t\t\t\t\t  CONFIRMATION         :";
						cin>>choice;
					}while(choice=='y'||choice=='Y');
					SetConsoleTextAttribute(h,10);
				cout<<"\n\n\t\t\t\t\t\t\t\t\t\t------------------------------------";
				cout<<"\n\t\t\t\t\t\t\t\t\t\t  ALACARTE AMOUNT      :RM "<<total2;
				cout<<"\n\t\t\t\t\t\t\t\t\t\t-------------------------------------";
				}
				subtotal=total1+total2;//hhmnkjuiugyuftdr
				SetConsoleTextAttribute(h,15);
				cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\t  REPEAT FOOD SELECTION?  || yes [Y] ||  || no [N] ||";
				cout<<"\n \t\t\t\t\t\t\t\t\t\t  CONFIRMATION         :";                     
				cin>>choice2;
			}while(choice2=='y'||choice2=='Y' );
				SetConsoleTextAttribute(h,10);
				cout<<"\n\n\t\t\t\t\t\t\t\t\t\t------------------------------------";
                cout<<"\n\t\t\t\t\t\t\t\t\t\t TOTAL FOOD AMOUT      : RM "<<subtotal;
				cout<<"\n\t\t\t\t\t\t\t\t\t\t--------------------------------------";
		}
		else
		{
			subtotal=0;
		}
		return subtotal;
}



//============================================================================================================================================================================================================
//tax amount & totalfee




void call(double &subprice,double &totalfee ,string &merch,double &tax,double &taxamount,double &disc)//no return //parameter
{
	
	
			if(subprice<100)
				{
					merch="soda";
					disc=subprice*0;
				}
			else if(subprice>=100&&subprice<150)	
				{
					disc=subprice*0.15;
					merch="toys";
				}
			else if(subprice>=150&&subprice<=250)
				{
					disc=subprice*0.20;
					merch="thumbler";
				}
			else 
				{
					disc=subprice*0.30;
					merch="t-shirt";
				}
//calculate

			taxamount=subprice*tax;
			totalfee=(subprice-disc)+taxamount;

}





//============================================================================================================================================================================================================

//no return value
void receipt(string& name, string &Pnum, int &Kid,int& Adult, int &Citizen, string &cine, double &Ttotal,  double &subtotal,double &subprice,double &disc, double &tax,double &taxamount,double &totalfee, string &merch)

{
		cout<<"\n\n                                                                "<<endl;
	
cout<<" \t\t\t\t\t\t\t\t\t __________________________________________________________________"<<endl;
cout<<"\t\t\t\t\t\t\t\t\t||                                                                  ||"<<endl;
cout<<"\t\t\t\t========================================||                        OFFICIAL RECEIPT                          ||================================================  "<<endl;
cout<<"\t\t\t\t\t\t\t\t\t||__________________________________________________________________||";
	cout<<"\n\n\t\t\t\t\t\t\t\t\t   DATE : "<<__DATE__<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t ____________________________________________________________________";
cout<<"\n\t\t\t\t\t\t\t\t\t                                                                      ";
cout<<"\n\t\t\t\t\t\t\t\t\t       NAME           :"<<name<<"                                      ";                                    
cout<<"\n\t\t\t\t\t\t\t\t\t                                                                      ";
cout<<"\n\t\t\t\t\t\t\t\t\t    PHONE NUMBER      :"<<Pnum<<"                                      "; 
cout<<"\n\t\t\t\t\t\t\t\t\t ____________________________________________________________________";          
cout<<"\n\t\t\t\t\t\t\t\t\t ____________________________________________________________________";  
cout<<"\n\t\t\t\t\t\t\t\t\t                                                                    ";
cout<<"\n\t\t\t\t\t\t\t\t\t    CHILDREN AMOUNT     : "<<Kid<<"                                ";
cout<<"\n\t\t\t\t\t\t\t\t\t    ADULT AMOUNT        : "<<Adult<<"                                     ";
cout<<"\n\t\t\t\t\t\t\t\t\t    CITIZEN  AMOUNT     : "<<Citizen<<"                                            ";
cout<<"\n\t\t\t\t\t\t\t\t\t ____________________________________________________________________";
cout<<"\n\t\t\t\t\t\t\t\t\t ____________________________________________________________________";   
cout<<"\n\t\t\t\t\t\t\t\t\t                                                                    ";                     
cout<<"\n\t\t\t\t\t\t\t\t\t       CINEMAS         : "<<cine<<"                                      ";                                    
cout<<"\n\t\t\t\t\t\t\t\t\t ____________________________________________________________________";
cout<<"\n\t\t\t\t\t\t\t\t\t ____________________________________________________________________";
cout<<"\n\t\t\t\t\t\t\t\t\t                                                                    ";   
cout<<"\n\t\t\t\t\t\t\t\t\t      TICKET FEE        : RM "<<Ttotal<<"                                            ";                                          
cout<<"\n\t\t\t\t\t\t\t\t\t      FOOD FEE          : RM "<<subtotal<<"                                          ";
cout<<"\n\t\t\t\t\t\t\t\t\t      SUBTOTAL          : RM "<<subprice<<"                                          ";
cout<<"\n\t\t\t\t\t\t\t\t\t ____________________________________________________________________";
cout<<"\n\t\t\t\t\t\t\t\t\t ____________________________________________________________________";
cout<<"\n\t\t\t\t\t\t\t\t\t                                                                    ";
cout<<"\n\t\t\t\t\t\t\t\t\t     TOTAL DISCOUNT     : RM "<<disc<<"                                           ";
cout<<"\n\t\t\t\t\t\t\t\t\t         TAX            : RM "<<tax<<"                                              ";
cout<<"\n\t\t\t\t\t\t\t\t\t      TAX AMOUNT        : RM "<<taxamount<<"                                 ";
cout<<"\n\t\t\t\t\t\t\t\t\t ____________________________________________________________________";
cout<<"\n\t\t\t\t\t\t\t\t\t ____________________________________________________________________";
cout<<"\n\t\t\t\t\t\t\t\t\t                                                                    ";                                             
cout<<"\n\t\t\t\t\t\t\t\t\t     TOTAL FEE IS       : RM "<<totalfee<<"                                  ";  
cout<<"\n\t\t\t\t\t\t\t\t\t ____________________________________________________________________";                                     
cout<<"\n\t\t\t\t\t\t\t\t\t ____________________________________________________________________";
cout<<"\n\t\t\t\t\t\t\t\t\t                                                                    ";  
cout<<"\n\t\t\t\t\t\t\t\t\t     MERCHANDISE       : "<<merch<<"                                                ";                                       
cout<<"\n\t\t\t\t\t\t\t\t\t ____________________________________________________________________";
}




//============================================================================================================================================================================================================


void	minNmax(int movieA, int movieB, int movieC, int &max, int &min)	// no return value 					//array
{

	int moviequantity[3];
	moviequantity[0]=movieA;
	moviequantity[1]=movieB;
	moviequantity[2]=movieC;
	
     for(int i=0; i<3; i++)
     {
     	if (moviequantity[i]>max)
     	{
     		max=moviequantity[i];	
		}
	 }
	
	
	 for(int i=0; i<3; i++)
     {
     	if (moviequantity[i]<min)
     	{
     		min=moviequantity[i];
     		
		}
		
	 }
	
	
	
}							
	
	
	
	//============================================================================================================================================================================================================


						
void movieM(int movieA, int movieB,  int movieC, string &mostchosenmovie, string &minchosenmovie, int min, int max)				
{

	if(movieA==max)
	{
		max=movieA;
		mostchosenmovie="INSIDIOUS";
	}
	if(movieB==max)
	{
		mostchosenmovie="CONJURING";
	}
	if(movieC==max)
	{
		mostchosenmovie="DODO TALES";
	}

	if(movieA==min)
	{
		minchosenmovie="INSIDIOUS";
	}
	
	if(movieB==min)
	{
		minchosenmovie="CONJURING";
	}
	if(movieC==min)
	{
		minchosenmovie="DODOTALES";
	}
}
//======================================================================================================================================================================================================					
	void table()
	{
	
													
						cout<<"\n\n\t\t\t\t\t\t\t\t_______________________________FOOD PACKAGE SELECTION_____________________________"<<endl;
				cout<<"\t\t\t\t\t\t\t\t___________________________________________________________________________________"<<endl;
				cout<<"\t\t\t\t\t\t\t\t||                   |       |                                       ||           ||"<<endl;
				cout<<"\t\t\t\t\t\t\t\t||                   |       |                                       ||           ||"<<endl;
				cout<<"\t\t\t\t\t\t\t\t||    		     |  [A]  |        POPCORN AND WATER              || RM 7.50   ||"<<endl;
				cout<<"\t\t\t\t\t\t\t\t||  ---------------  |       |                                       ||           ||"<<endl;
				cout<<"\t\t\t\t\t\t\t\t|| | COMBO PACKAGE | |-------|---------------------------------------||-----------||"<<endl;
				cout<<"\t\t\t\t\t\t\t\t||  ---------------  |-------|---------------------------------------||-----------||"<<endl;
				cout<<"\t\t\t\t\t\t\t\t||                   |       |                                       ||           ||"<<endl;
				cout<<"\t\t\t\t\t\t\t\t||         [C]       |  [B]  |       HOT DOG AND WATER               || RM 6.00   ||"<<endl;
				cout<<"\t\t\t\t\t\t\t\t||                   |       |                                       ||           ||"<<endl;
				cout<<"\t\t\t\t\t\t\t\t||___________________|_______|_______________________________________||___________||"<<endl;
				cout<<"\t\t\t\t\t\t\t\t||                   |       |                                       ||           ||"<<endl;
				cout<<"\t\t\t\t\t\t\t\t||                   |       |                                       ||           ||"<<endl;
				cout<<"\t\t\t\t\t\t\t\t||   		     |  [P]  |             POPCORN                   || RM 5.00   ||"<<endl;
				cout<<"\t\t\t\t\t\t\t\t||                   |       |                                       ||           ||"<<endl;
				cout<<"\t\t\t\t\t\t\t\t||                   |-------|---------------------------------------||-----------||"<<endl;
				cout<<"\t\t\t\t\t\t\t\t||                   |-------|---------------------------------------||-----------||"<<endl;
				cout<<"\t\t\t\t\t\t\t\t||    ------------   |       |                                       ||           ||"<<endl;
				cout<<"\t\t\t\t\t\t\t\t||   | ALA CARTE |   |  [W]  |              WATER                    || RM 3.00   ||"<<endl;
				cout<<"\t\t\t\t\t\t\t\t||    ------------   |       |                                       ||           ||"<<endl;
				cout<<"\t\t\t\t\t\t\t\t||                   |-------|---------------------------------------||-----------||"<<endl;
				cout<<"\t\t\t\t\t\t\t\t||        [A]        |-------|---------------------------------------||-----------||"<<endl;
				cout<<"\t\t\t\t\t\t\t\t||                   |       |                                       ||           ||"<<endl;
				cout<<"\t\t\t\t\t\t\t\t||                   |  [H]  |             HOT DOG                   || RM 5.00   ||"<<endl;
				cout<<"\t\t\t\t\t\t\t\t||                   |       |                                       ||           ||"<<endl;
				cout<<"\t\t\t\t\t\t\t\t||                   |-------|---------------------------------------||-----------||"<<endl;
				cout<<"\t\t\t\t\t\t\t\t||___________________|_______|_______________________________________||___________||"<<endl;					
							
}
							
							
							
							
							
							
							
							
							
							
							
							
							
							
							
							
							
							
