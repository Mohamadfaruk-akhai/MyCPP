/*!including input output stream header file*/
#include <iostream>
using namespace std;
/*!including closeAccountoperation header file*/
#include "../include/closeAccountOperation.h"
void closeAccountOperation::printwelcomeMessage() /*!Runtime polymorphism*/ //!< definition of printwelcomeMessage function
{
	cout << "-------Welcome To Banking System from derived class-------" << endl
		 << endl;
}
void closeAccountOperation::closeAccount(int personId) //!< definition of closeAccount function which take 1 parameter to close Account of particular user
{
	int flag = 0;
	for (it = banklist.begin(); it != banklist.end(); it++)
	{
		Bank ptr = *it;
		if (ptr.personId == personId) /*!condition to check user entered id match to Pid array or not if it match account info will be shown*/
		{
			banklist.erase(it); /*!deleting information from list of particular id*/
			flag = 1;			/*!if id match flag value set to 1 */
			cout << "Account closed Succesfully" << endl
				 << endl;
			break;
		}
	}
	if (flag == 0)
		cout << "No Account Found for Entered ID" << endl
			 << endl;
}
