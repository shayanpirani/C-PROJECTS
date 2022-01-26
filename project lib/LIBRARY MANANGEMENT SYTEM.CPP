#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;

void Lib_login()
{
	cout<<"Kindly Login"<<endl;
		string Lemail,Lpassword;
		cout<<"Enter email:"<<endl;
		cin>>Lemail;
		ofstream LibEmail;
		LibEmail.open("LIBRARIANEMAIL.txt");
		if(!LibEmail)
		{
			cout<<"ERROR: File cannot be opened"<<endl;
			}	
			LibEmail<<Lemail<<endl;
			LibEmail.close();	
		cout<<"Enter password:"<<endl;
		cin>>Lpassword;
		ofstream LibPass;
		LibPass.open("LIBRARIANPass.txt");
		if(!LibPass)
		{
			cout<<"ERROR: File cannot be opened"<<endl;
			}	
			LibPass<<Lpassword<<endl;
			LibPass.close();
}

void Lib_details()
{
	system("CLS");
}
void std_login()
{
	cout<<"Kindly Login"<<endl;
		string Semail,Spassword;
		cout<<"Enter email:"<<endl;
		cin>>Semail;
		ofstream StdEmail;
		StdEmail.open("STUDENTEMAIL.txt");
		if(!StdEmail)
		{
			cout<<"ERROR: File cannot be opened"<<endl;
			}	
			StdEmail<<Semail<<endl;
			StdEmail.close();	
		cout<<"Enter password:"<<endl;
		cin>>Spassword;
		ofstream StdPass;
		StdPass.open("STUDENTPass.txt");
		if(!StdPass)
		{
			cout<<"ERROR: File cannot be opened"<<endl;
			}	
			StdPass<<Spassword<<endl;
			StdPass.close();
}

void std_details()
{
	
}



int main()
{
	cout<<"------------------------------------------WELCOME TO LIBRARY MANAGMENT SYSTEM-------------------------------------------"<<endl;
	int choice;
	cout<<"Choose From the Following:"<<endl;
	cout<<"1. LIBRARIAN"<<endl;
	cout<<"2. STUDENT"<<endl;
	cout<<"3.CLOSE APPLICATION"<<endl;
	cin>>choice;
	do{
	
	if(choice==1)
	{
		Lib_details();
	}
	else if(choice==2)
	{
		std_details();
	}
	else if(choice==3)
	{
		break;
	}
	else{
		cout<<"ENTER CHOICE AGAIN:"<<endl;
		cin>>choice;
		if(choice==1)
	{
		Lib_details();
	}
	else if(choice==2)
	{
		std_details();
	}
	else if(choice==3)
	{
		break;
	}
	}
}while(choice==3);
}
