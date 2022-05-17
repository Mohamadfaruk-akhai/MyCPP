#include <iostream>
using namespace std;
#include "bank.h"
int main()
{
   //Bank b;
	bank b1;
    	string mobile;
    	int age,amount,a;
    	int pid,pid1;
    	string n,m;
    	int choice;
    	do
    	{
	       cout << "1 for open new bank account.\n2 for See account information of particular user."<< endl
		 << "3 for See account information of All user.\n4 for Deposit Amount\n5 for withdraw Amount\n6 for Balance Enquiry\n7 for 			Close Account\n8 for Modify Account\n9 for Exit"<<endl;
		cin>>choice;
		switch(choice)
		{
		case 1:
		    	cout<<"please Enter Your Name:"<<endl;
		    	cin>>n;
		    	cout<<"please Enter Your Mobile Number:"<<endl;
		    	cin>>mobile;
		    	cout<<"please Enter Your Age:"<<endl;
		    	cin>>age;
		    	cout<<"by default 1000Rs need to deposit if you want to deposit  More amount then enter amount :"<<endl;
		    	cin>>amount;
		    	if(amount>1000)
		    		b1.NewAcc(n,mobile,age,amount);
		    	else
		    		b1.NewAcc(n,mobile,age);
		    	break;
		 case 2:
		    	cout<<"Enter user id for which you want to see account info."<<endl;
		    	cin>>pid;
		    	b1.Accinfo(pid);
		    	break;
		  case 3:
		    	b1.Accinfo();
		    	break;
		  case 4:
		     	cout<<"Enter user id for which you want to Deposit Money"<<endl;
		     	cin>>pid;
		     	cout<<"Enter Amount you want to Deposit."<<endl;
		     	cin>>amount;
		     	b1.Deposit(pid,amount);
		     	break;
		  case 5:
		      	cout<<"Enter user id for which you want to withdraw Money"<<endl;
		     	cin>>pid;
		     	cout<<"Enter Amount you want to withdraw."<<endl;
		     	cin>>amount;
		     	b1.withdraw(pid,amount);
		     	break;
		  case 6:
		      	cout<<"Enter user id for which you want to See Balance"<<endl;
		     	cin>>pid;
		     	b1.Balinq(pid);
		     	break;
		  case 7:
		      	cout<<"Enter user id for which you want to close Acount"<<endl;
		     	cin>>pid1;
		     	b1.closeAccount(pid1);
		     	break;
		  case 8:
		 	cout<<"Enter user id for which you want to modify the account"<<endl;
			cin>>pid;
			int ch;
			cout<<"1:For Modify Account Holder Name\n2:For Modify Account Holder Mobile Number\n3 For Modify Account Holder Age\n";
			cin>>ch;
			switch(ch)
			{
				case 1:
					cout<<"please Enter the New Name:"<<endl;
					cin>>n;
					b1.modifyAccName(pid,n);
					break;
				case 2:
					cout<<"please Enter the New Mobile Number:"<<endl;
					cin>>m;
					b1.modifyAccMobile(pid,m);
					break;
				case 3:
					cout<<"please Enter the New Age:"<<endl;
					cin>>a;
					b1.modifyAccAge(pid,a);
					break;
			}
		    break;
		case 9:
			break;
		default:
		    cout<<"please Enter the valid choice"<<endl;
		}
	    }while(choice!=9);
	    
	}
