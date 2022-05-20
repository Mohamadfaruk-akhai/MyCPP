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
void closeAccountOperation::closeAccount(int personid) //!< definition of closeAccount function which take 1 parameter to close Account of particular user
{
	int j;		  /**< declaration of j variable */
	int flag = 0; /**< declaration of flag variable */
	for (j = 0; j < l; j++)
	{
		if (Personid[j] == personid) /*!condition to check user entered id match to Pid array or not*/
		{
			flag = 1; /*!if id match flag value set to 1 */
			cout << "Account closed Succesfully" << endl
				 << endl;
			break;
		}
	}
	if (flag == 0)
		cout << "No Account Found for Entered ID" << endl
			 << endl;
	if (j < l) /*!condition to check if j value is less than the length of array*/
	{
		l = l - 1; /*!reducing the length of array*/
		for (int k = j; k < l; k++)
			Personid[j] = Personid[j + 1]; /*!shifting value of Pid array from j index to j+1*/
	}
}
