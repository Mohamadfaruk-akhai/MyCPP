class Bank
{
	public:
   	string Pname[100];
	   string Mobile_num[10];
	   long Acc_no[100];
	   int PAge[100],Damount[100],Pid[10]={0,0,0,0,0,0,0,0,0,0};
	   int l=sizeof(Pid)/sizeof(Pid[0]);
	   int i=0;
	   int id=1;
	   long Ac_no=66024678910;
		// Function for opening new bank account
	   void NewAcc(string name,string Mobile_no,int Age,int amount=1000)
	   {
		      Pid[i]=id;
		      Pname[i]=name;
		      Mobile_num[i]=Mobile_no;
		      PAge[i]=Age;
		      Damount[i]=amount;
		      Acc_no[i]=Ac_no;
		      i++;
		      id++;
		      Ac_no++;
		      cout<<"Congratulation Account opened succesfully"<<endl;
	   }
		//function for showing Account info of particular user
	   void Accinfo(int pid)
	   {
		if(Pid[pid-1])
		    {
		     	cout<<"Account Holder Name:"<<Pname[pid-1]<<endl;
		    	cout<<"Account Holder Mobile Number:"<<Mobile_num[pid-1]<<endl;
			cout<<"Account Holder Age:"<<PAge[pid-1]<<endl;
		     	cout<<"Account Holder Account Number:"<<Acc_no[pid-1]<<endl;
		    }
	 
		else
			cout<<"No Account Found for Entered ID"<<endl;
	   }
		//function for showing Account info of All user
	  void Accinfo()
	   {
		int flag=0;
	      	for(int j=0;j<i;j++)
	    	{
			if(Pid[j])
			{
	       			cout<<"Account Holder Name:"<<Pname[j]<<endl;
			        cout<<"Account Holder Mobile Number:"<<Mobile_num[j]<<endl;
			        cout<<"Account Holder Age:"<<PAge[j]<<endl;
			        cout<<"Account Holder Account Number:"<<Acc_no[j]<<endl;
			    	flag=1;
			}
	    	}
		if(flag==0)
		cout<<"No Account Found"<<endl;
	   }
		//function for Deposit Money
	void Deposit(int pid,int amt)
	   {
		if(Pid[pid-1])
		{
		   
		   	Damount[pid-1]+=amt;
		   	cout<<"Amount Deposit succesfully"<<endl;
		}
		else
			cout<<"No Account Found for Entered ID"<<endl;
	   }
		//function for withdraw Money
	   void withdraw(int pid,int amt)
	   {
		if(Pid[pid-1])
		{
		   
		   	Damount[pid-1]-=amt;
		   	cout<<"Amount withdraw succesfully"<<endl;
		}
	      	else
			cout<<"No Account Found for Entered ID"<<endl;
	   }
		//function for Balance inquiry
	   void Balinq(int pid)
	   {
	    	if(Pid[pid-1])
	    	{
	       		cout<<"Balance of Account holder "<<Pname[pid-1]<<" is:"<<Damount[pid-1]<<endl;
	    	}
	    	else
			cout<<"No Account Found for Entered ID"<<endl;
	   }
		//function for close Account
	    void closeAccount(int pid1)
	   {
	       	int j;
		int flag=0;
	      for(j=0;j<l;j++)
		{
		    	if(Pid[j]==pid1)
			{
				flag=1;
				cout<<"Account closed Succesfully"<<endl;
				break;
			}
		}
			if(flag==0)
				cout<<"No Account Found for Entered ID"<<endl;
		    	if(j<l)
		    	{
				l=l-1;
				for(int k=j;k<l;k++)
				Pid[j]=Pid[j+1];
		    	}
		
	   }
		
	void modifyAccName(int pid,string n);
	void modifyAccMobile(int pid,string m);
	void modifyAccAge(int pid,int a);
};
class bank:public Bank
{
	
};
//function for Modify Name
void Bank::modifyAccName(int pid,string n)
{
	if(Pid[pid-1])
	{
		Pname[pid-1]=n;
		cout<<"Name for Account holder has been modify succesfully"<<endl;
	}
	else
		cout<<"No Account Found for Entered ID"<<endl;
}
//function for Modify Mobile number
void Bank::modifyAccMobile(int pid,string m)
{
	if(Pid[pid-1])
	{
		Mobile_num[pid-1]=m;
		cout<<"Mobile Number for Account holder has been modify succesfully"<<endl;
	}
	else
		cout<<"No Account Found for Entered ID"<<endl;
}
//function for Modify Age
void Bank::modifyAccAge(int pid,int a)
{
	if(Pid[pid-1])
	{
		PAge[pid-1]=a;
		cout<<"Age for Account holder has been modify succesfully"<<endl;
	}
	else
		cout<<"No Account Found for Entered ID"<<endl;
}
