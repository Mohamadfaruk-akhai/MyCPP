//! header guard
#ifndef OPERATIONS_H
#define OPERATIONS_H
//! operation class
class Operations
{
public:
	string Personname[10];																 /**< array to store name of user */
	string Mobile_num[10];																 /**< array to store Mobile number of user */
	long Acc_no[15];																	 /**< array to store Account number of user */
	int PersonAge[10], Personamount[100], Personid[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; /**< array to store age,amount and id of user respectively */
	int l = sizeof(Personid) / sizeof(Personid[0]);										 /**< finding length of Pid array */
	int i = 0;																			 /**<  index variable to store information of user*/
	int id = 1;																			 /**< id variable to store id of user*/
	long Ac_no = 66024678910;															 /**< Account variable to store Account number for user*/

	void printwelcomeMessage();														//!< declaration of printwekcomeMessage function
	void openNewAccount(string name, string Mobile_no, int Age, int amount = 1000); //!< declaration of OpenNewAccount function
	void Accountinfo(int personid);													//!< declaration of Accountinfo function for particular user
	void Accountinfo();																//!< declaration of Accountinfo function for all user
	void Deposit(int personid, int amt);											//!< declaration of Deposit function
	void withdraw(int personid, int amt);											//!< declaration of Withdraw function
	void showBalance(int personid);													//!< declaration of showBalance function
	void modifyAccountName(int personid, string newNAme);							//!< declaration of ModifyAccountName function
	void modifyAccountMobile(int personid, string newMobile_num);					//!< declaration of ModifyAccountMobileNumber function
	void modifyAccountAge(int personid, int newAge);								//!< declaration of ModifyAccountAge function
};
#endif
