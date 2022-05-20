/*! including input output stream header file */
#include <iostream>
using namespace std;
/*! including closeAccountoperation header file */
#include "include/closeAccountOperation.h"
int main()
{
	Operations *ptr;
	closeAccountOperation cao; /**< created object of closeAccountOperation */
	ptr = &cao;
	string name, mobile_num;	   /**< mobile variable to take mobile number from user */
	int age, amount, newAge;	   /**< age,amount and NewAge variable to take age amount and NewAge from user */
	int personid;				   /**< pid variable to take id from user */
	string newName, newMobile_num; /**< newName and newMobile variable to take new name and new mobile number from user */
	int choice;					   /**< choice variable to take choice that which operation user want to perform */
	do
	{
		ptr->printwelcomeMessage();
		cout << "1 for open new bank account.\n2 for See account information of particular user." << endl
			 << "3 for See account information of All user.\n4 for Deposit Amount\n5 for withdraw Amount\n6 for Balance Enquiry\n7 for Close Account\n8 for Modify Account\n9 for Exit" << endl;
		cin >> choice; /*! taking choice as input from user */
		switch (choice)
		{
		case 1:
			cout << "\nplease Enter Your Name:" << endl;
			cin >> name; /*! taking name as input from user */
			cout << "\nplease Enter Your Mobile Number:" << endl;
			cin >> mobile_num; /*! taking mobile numnber as input from user */
			cout << "\nplease Enter Your Age:" << endl;
			cin >> age; /*! taking age as input from user */
			cout << "\nby default 1000Rs need to deposit if you want to deposit  More amount then enter amount :" << endl;
			cin >> amount; /*! taking amount as input from user */
			if (amount > 1000)
				cao.openNewAccount(name, mobile_num, age, amount); //!< calling openNewAccount function with 4 argument when user enter more then 1000 as input of amount
			else
				cao.openNewAccount(name, mobile_num, age); //!< calling openNewAccount function with 3 argument and default amount value will be applied
			break;
		case 2:
			cout << "\nEnter user id for which you want to see account info." << endl;
			cin >> personid;		   /*! taking id as input from user to see account information of particular user*/
			cao.Accountinfo(personid); //!< calling Accountinfo function with 1 argument to see account info of particular user
			break;
		case 3:
			cao.Accountinfo(); //!< calling Accountinfo function with 0 argument to see account info of all user
			break;
		case 4:
			cout << "\nEnter user id for which you want to Deposit Money" << endl;
			cin >> personid; /*!taking id as input from user to Deposit money in particular user account*/
			cout << "\nEnter Amount you want to Deposit." << endl;
			cin >> amount;				   /*!taking amount as input from user to deposit*/
			cao.Deposit(personid, amount); //!< calling Deposit function with 2 argument to Deposit money of particular user
			break;
		case 5:
			cout << "\nEnter user id for which you want to withdraw Money" << endl;
			cin >> personid; /*! taking id as input from user to withdraw money from particular user account */
			cout << "\nEnter Amount you want to withdraw." << endl;
			cin >> amount;					/*! taking amount as input from user to withdraw */
			cao.withdraw(personid, amount); //!< calling withdraw function with 2 argument to withdraw money of particular user
			break;
		case 6:
			cout << "\nEnter user id for which you want to See Balance" << endl;
			cin >> personid;		   /*! taking id as input from user to See Account balance of particular user */
			cao.showBalance(personid); //!< calling showBalance function with 1 argument to see Account balance of particular user
			break;
		case 7:
			cout << "\nEnter user id for which you want to close Account" << endl;
			cin >> personid;			/*! taking id as input from user to close Account of particular user */
			cao.closeAccount(personid); //!< calling closeAccount function with 1 argument to close Account of particular user
			break;
		case 8:
			cout << "\nEnter user id for which you want to modify the account" << endl;
			cin >> personid; /*! taking id as input from user to Modify Account of particular user */
			int ch;
			cout << "\n1:For Modify Account Holder Name\n2:For Modify Account Holder Mobile Number\n3 For Modify Account Holder Age\n";
			cin >> ch; /*! taking choice as input from user that what thing they want to modify */
			switch (ch)
			{
			case 1:
				cout << "\nplease Enter the New Name:" << endl;
				cin >> newName;							  /*! taking new name as input from user */
				cao.modifyAccountName(personid, newName); //!< calling ModifyAccountName function with 2 argument to modify Account name of particular user
				break;
			case 2:
				cout << "\nplease Enter the New Mobile Number:" << endl;
				cin >> newMobile_num;							  /*! taking new mobile number  as input from user */
				cao.modifyAccountMobile(personid, newMobile_num); //!< calling ModifyAccountMobile function with 2 argument to modify Account mobile number of particular user
				break;
			case 3:
				cout << "\nplease Enter the New Age:" << endl;
				cin >> newAge;
				cao.modifyAccountAge(personid, newAge); //!< calling ModifyAccountAge function with 2 argument to modify Account Age of particular user
				break;
			}
			break;
		case 9:
			break;
		default:
			cout << "\nplease Enter the valid choice" << endl;
		}
	} while (choice != 9); /*! this loop will continue until user enter 9 as choice */
}
