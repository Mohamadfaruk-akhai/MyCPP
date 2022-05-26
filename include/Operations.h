//! header guard
#ifndef OPERATIONS_H
#define OPERATIONS_H
#include <list>
#include <iterator>
//! operation class

class Operations
{

public:
	struct Bank //!< Structure of all the person details required to bank
	{
		string personName, mobileNumber;
		long accountNumber;
		int personAge, personAmount, personId;
	} bankStruct;
	list<Bank> banklist; //!< STL list to datatype Bank that holds all the person information regarding banking
	list<Bank>::iterator it;
	int id = 1;					  /**< id variable to store id of user*/
	long accNumber = 66024678910; /**< Account variable to store Account number for user*/

	void printwelcomeMessage();														//!< declaration of printwekcomeMessage function
	void openNewAccount(string name, string mobileNum, int age, int amount = 1000); //!< declaration of OpenNewAccount function
	void Accountinfo(int personId);													//!< declaration of Accountinfo function for particular user
	void Accountinfo();																//!< declaration of Accountinfo function for all user
	void Deposit(int personId, int amt);											//!< declaration of Deposit function
	void withdraw(int personId, int amt);											//!< declaration of Withdraw function
	void showBalance(int personId);													//!< declaration of showBalance function
	void modifyAccountName(int personId, string newName);							//!< declaration of ModifyAccountName function
	void modifyAccountMobile(int personId, string newMobileNumber);					//!< declaration of ModifyAccountMobileNumber function
	void modifyAccountAge(int personId, int newAge);								//!< declaration of ModifyAccountAge function
};
#endif
