/*!including input output stream header file*/
#include <iostream>
using namespace std;
/*!including operations header file*/
#include "../include/Operations.h"
void Operations::printwelcomeMessage() /*!Runtime polymorphism*/ //!< definition of printwelcomeMessage function
{
	cout << "-------Welcome To Banking System-------" << endl
		 << endl;
}
void Operations::openNewAccount(string name, string Mobile_no, int Age, int amount) //!< definition of openNewAccount function which take 4 parameter to close Account of particular user
{
	Personid[i] = id;		   /*!storing id in Pid array at ith index*/
	Personname[i] = name;	   /*!storing  name taken from user in Pname array at ith index*/
	Mobile_num[i] = Mobile_no; /*!storing mobile number taken from user in Mobile_num array at ith index*/
	PersonAge[i] = Age;		   /*!storing  age taken from user in PAge array at ith index*/
	Personamount[i] = amount;  /*!storing  amount taken from user in Damount array at ith index*/
	Acc_no[i] = Ac_no;		   /*!storing  account number  taken from user in Acc_no array at ith index*/
	i++;					   /*!increasing value of i by 1*/
	id++;					   /*!increasing value of id by 1*/
	Ac_no++;				   /*!increasing value of Ac_no by 1*/
	cout << "\nCongratulation Account opened succesfully" << endl
		 << endl;
}
void Operations::Accountinfo(int personid) /*!Compile time polymorphism*/ //!< definition of Accountinfo function which take 1 parameter to get Account information of particular user
{
	if (Personid[personid - 1]) /*!condition to check user entered id match to Pid array or not if it match account info will be shown*/
	{
		cout << "\nAccount Holder Name:" << Personname[personid - 1] << endl;			 /*!displaying name of user*/
		cout << "Account Holder Mobile Number:" << Mobile_num[personid - 1] << endl; /*!displaying Mobile number of user*/
		cout << "Account Holder Age:" << PersonAge[personid - 1] << endl;			 /*!displaying Age of user*/
		cout << "Account Holder Account Number:" << Acc_no[personid - 1] << endl
			 << endl; /*!displaying Account number of user*/
	}

	else
		cout << "\nNo Account Found for Entered ID" << endl
			 << endl;
}
void Operations::Accountinfo() /*!Compile time polymorphism*/ //!< definition of Accountinfo function which take no parameter to get Account information of all user
{
	int flag = 0;
	for (int j = 0; j < i; j++)
	{
		if (Personid[j])
		{
			cout << "\nAccount Holder Name:" << Personname[j] << endl;		  /*!displaying name of user*/
			cout << "Account Holder Mobile Number:" << Mobile_num[j] << endl; /*!displaying Mobile number of user*/
			cout << "Account Holder Age:" << PersonAge[j] << endl;			  /*!displaying Age of user*/
			cout << "Account Holder Account Number:" << Acc_no[j] << endl
				 << endl; /*!displaying Account number of user*/
			flag = 1;
		}
	}
	if (flag == 0)
		cout << "\nNo Account Found" << endl
			 << endl;
}
void Operations::Deposit(int personid, int amt) //!< definition of Deposit function which take 2 parameter to Deposit money in particular user bank account
{
	if (Personid[personid - 1]) /*!condition to check user entered id match to Pid array or not*/
	{

		Personamount[personid - 1] += amt; /*!Adding money which is enterd by user to it's bank account*/
		cout << "\nAmount Deposit succesfully" << endl
			 << endl;
	}
	else
		cout << "\nNo Account Found for Entered ID" << endl
			 << endl;
}
void Operations::withdraw(int personid, int amt) //!< definition of withdraw function which take 2 parameter to withdraw money in particular user bank account
{
	if (Personid[personid - 1]) /*!condition to check user entered id match to Pid array or not*/
	{
		if (Personamount[personid - 1] >= amt)
		{
			Personamount[personid - 1] -= amt; /*!removing money which is enterd by user from it's bank account*/
			cout << "\nAmount withdraw succesfully" << endl
				 << endl;
		}
		else
		{
			cout << "\nSorry you don't have that much amount in your Account" << endl
				 << endl;
		}
	}
	else
		cout << "\nNo Account Found for Entered ID" << endl
			 << endl;
}
void Operations::showBalance(int personid) //!< definition of showBalance function which take 1 parameter to get current Balance in Account of particular user
{
	if (Personid[personid - 1]) /*!condition to check user entered id match to Pid array or not if it match account balance will be shown*/
	{
		cout << "\nBalance of Account holder " << Personname[personid - 1] << " is:" << Personamount[personid - 1] << endl
			 << endl; /*!displaying name and balance of 														user*/
	}
	else
		cout << "\nNo Account Found for Entered ID" << endl
			 << endl;
}
void Operations::modifyAccountName(int personid, string newName) //!< definition of modifyAccountName function which take 2 parameter to get Modify Account name of particular user
{
	if (Personid[personid - 1]) /*!condition to check user entered id match to Pid array or not if it match Name will be updated for that user*/
	{
		Personname[personid - 1] = newName; /*!updating name of user*/
		cout << "\nName for Account holder has been modify succesfully" << endl
			 << endl;
	}
	else
		cout << "\nNo Account Found for Entered ID" << endl
			 << endl;
}
void Operations::modifyAccountMobile(int personid, string newMobile_num) //!< definition of modifyAccountMobile function which take 2 parameter to get Modify Account Mobile Number of particular user
{
	if (Personid[personid - 1]) /*!condition to check user entered id match to Pid array or not if it match mobile number will be updated for that user*/
	{
		Mobile_num[personid - 1] = newMobile_num; /*!updating Mobile number of user*/
		cout << "\nMobile Number for Account holder has been modify succesfully" << endl
			 << endl;
	}
	else
		cout << "\nNo Account Found for Entered ID" << endl
			 << endl;
}
void Operations::modifyAccountAge(int personid, int newAge) //!< definition of modifyAccountAge function which take 2 parameter to get Modify Account Age of particular user
{
	if (Personid[personid - 1]) /*!condition to check user entered id match to Pid array or not if it match Age will be updated for that user*/
	{
		PersonAge[personid - 1] = newAge; /*!updating Age of user*/
		cout << "\nAge for Account holder has been modify succesfully" << endl
			 << endl;
	}
	else
		cout << "\nNo Account Found for Entered ID" << endl
			 << endl;
}
