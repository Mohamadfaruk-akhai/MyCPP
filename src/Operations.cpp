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
void Operations::openNewAccount(string name, string mobileNum, int age, int amount) //!< definition of openNewAccount function which take 4 parameter to close Account of particular user
{

	bankStruct.personId = id;			  /*!storing id in Structure data member personId using bankstruct varible */
	bankStruct.personName = name;		  /*!storing  name taken from user in Structure data member personName using bankstruct varible*/
	bankStruct.mobileNumber = mobileNum;  /*!storing mobile number taken from user in Structure data member mobileNumber using bankstruct varible*/
	bankStruct.personAge = age;			  /*!storing  age taken from user in Structure data member personAge using bankstruct varible*/
	bankStruct.personAmount = amount;	  /*!storing  amount taken from user in Structure data member personAmount using bankstruct varible*/
	bankStruct.accountNumber = accNumber; /*!storing  account number  taken from user in Structure data member accountNumber using bankstruct varible*/
	banklist.push_back(bankStruct);		  /*!Pushing All the value of Structure data member in STL list*/
	id++;								  /*!increasing value of id by 1*/
	accNumber++;						  /*!increasing value of accNumber by 1*/
	cout << "\nCongratulation Account opened succesfully" << endl
		 << endl;
}
void Operations::Accountinfo(int personId) /*!Compile time polymorphism*/ //!< definition of Accountinfo function which take 1 parameter to get Account information of particular user
{
	// bankstruct *ptr;
	int flag = 0;
	for (it = banklist.begin(); it != banklist.end(); it++)
	{
		Bank ptr = *it;
		if (ptr.personId == personId) /*!condition to check user entered id match to Pid array or not if it match account info will be shown*/
		{
			cout << "\nAccount Holder Name:" << ptr.personName << endl;			 /*!displaying name of user*/
			cout << "Account Holder Mobile Number:" << ptr.mobileNumber << endl; /*!displaying Mobile number of user*/
			cout << "Account Holder Age:" << ptr.personAge << endl;				 /*!displaying Age of user*/
			cout << "Account Holder Account Number:" << ptr.accountNumber << endl
				 << endl; /*!displaying Account number of user*/
			flag = 1;
			break;
		}
	}
	if (0 == flag)
		cout << "No Account found for entered id" << endl
			 << endl;
}
void Operations::Accountinfo() /*!Compile time polymorphism*/ //!< definition of Accountinfo function which take no parameter to get Account information of all user
{
	int flag = 0;
	for (it = banklist.begin(); it != banklist.end(); it++)
	{
		Bank ptr = *it;
		if (ptr.personId) /*!condition to check user entered id match to Pid array or not if it match account info will be shown*/
		{
			cout << "\nAccount Holder Name:" << ptr.personName << endl;		   /*!displaying name of user*/
			cout << "Account Holder Mobile Number:" << ptr.mobileNumber << endl; /*!displaying Mobile number of user*/
			cout << "Account Holder Age:" << ptr.personAge << endl;			   /*!displaying Age of user*/
			cout << "Account Holder Account Number:" << ptr.accountNumber << endl
				 << endl; /*!displaying Account number of user*/
			flag = 1;
		}
	}
	if (0 == flag)
		cout << "\nNo Account Found" << endl
			 << endl;
}
void Operations::Deposit(int personId, int amt) //!< definition of Deposit function which take 2 parameter to Deposit money in particular user bank account
{
	int flag = 0;
	for (it = banklist.begin(); it != banklist.end(); it++)
	{
		Bank ptr = *it;
		if (ptr.personId == personId) /*!condition to check user entered id match to Pid array or not if it match account info will be shown*/
		{
			ptr.personAmount += amt;   /*!Adding money which is enterd by user to it's bank account*/
			banklist.emplace(it, ptr); /*!inserting updated value into list*/
			banklist.erase(it);
			cout << "\nAmount Deposit succesfully" << endl
				 << endl;
			flag = 1;
			break;
		}
	}
	if (0 == flag)
		cout << "\nNo Account Found" << endl
			 << endl;
}
void Operations::withdraw(int personId, int amt) //!< definition of withdraw function which take 2 parameter to withdraw money in particular user bank account
{
	int flag = 0;
	for (it = banklist.begin(); it != banklist.end(); it++)
	{
		Bank ptr = *it;
		if (ptr.personId == personId) /*!condition to check user entered id match to Pid array or not if it match account info will be shown*/
		{
			if (ptr.personAmount >= amt) /*!condition to check user entered amount for withdraw is no more than account balance*/
			{
				ptr.personAmount -= amt;   /*!removing money which is enterd by user from it's bank account*/
				banklist.emplace(it, ptr); /*!inserting updated value into list*/
				banklist.erase(it);
				cout << "\nAmount withdraw succesfully" << endl
					 << endl;
			}
			else
			{
				cout << "\nSorry you don't have that much amount in your Account" << endl
					 << endl;
			}
			flag = 1;
			break;
		}
	}
	if (0 == flag)
		cout << "\nNo Account Found" << endl
			 << endl;
}
void Operations::showBalance(int personId) //!< definition of showBalance function which take 1 parameter to get current Balance in Account of particular user
{
	int flag = 0;
	for (it = banklist.begin(); it != banklist.end(); it++)
	{
		Bank ptr = *it;
		if (ptr.personId == personId) /*!condition to check user entered id match to Pid array or not if it match account info will be shown*/
		{
			cout << "\nBalance of Account holder " << ptr.personName << " is:" << ptr.personAmount << endl
				 << endl; /*!displaying name and balance of user*/
			flag = 1;
			break;
		}
	}
	if (0 == flag)
		cout << "\nNo Account Found for Entered id" << endl
			 << endl;
}
void Operations::modifyAccountName(int personId, string newName) //!< definition of modifyAccountName function which take 2 parameter to get Modify Account name of particular user
{
	int flag = 0;
	for (it = banklist.begin(); it != banklist.end(); it++)
	{
		Bank ptr = *it;
		if (ptr.personId == personId) /*!condition to check user entered id match to Pid array or not if it match account info will be shown*/
		{
			ptr.personName = newName;  /*!updating name of user*/
			banklist.emplace(it, ptr); /*!inserting updated name into list*/
			banklist.erase(it);
			cout << "\nName for Account holder has been modify succesfully" << endl
				 << endl;
			flag = 1;
			break;
		}
	}
	if (0 == flag)
		cout << "\nNo Account Found" << endl
			 << endl;
}
void Operations::modifyAccountMobile(int personId, string newMobileNumber) //!< definition of modifyAccountMobile function which take 2 parameter to get Modify Account Mobile Number of particular user
{
	int flag = 0;
	for (it = banklist.begin(); it != banklist.end(); it++)
	{
		Bank ptr = *it;
		if (ptr.personId == personId) /*!condition to check user entered id match to Pid array or not if it match account info will be shown*/
		{
			ptr.mobileNumber = newMobileNumber; /*!updating Mobile number of user*/
			banklist.emplace(it, ptr);			/*!inserting updated mobile number into list*/
			banklist.erase(it);
			cout << "\nMobile Number for Account holder has been modify succesfully" << endl
				 << endl;
			flag = 1;
			break;
		}
	}
	if (0 == flag)
		cout << "\nNo Account Found" << endl
			 << endl;
}
void Operations::modifyAccountAge(int personId, int newAge) //!< definition of modifyAccountAge function which take 2 parameter to get Modify Account Age of particular user
{
	int flag = 0;
	for (it = banklist.begin(); it != banklist.end(); it++)
	{
		Bank ptr = *it;
		if (ptr.personId == personId) /*!condition to check user entered id match to Pid array or not if it match account info will be shown*/
		{
			ptr.personAge = newAge;	   /*!updating Age of user*/
			banklist.emplace(it, ptr); /*!inserting updated value into list*/
			banklist.erase(it);
			cout << "\nAge for Account holder has been modify succesfully" << endl
				 << endl;
			flag = 1;
			break;
		}
	}
	if (0 == flag)
		cout << "\nNo Account Found" << endl
			 << endl;
}
