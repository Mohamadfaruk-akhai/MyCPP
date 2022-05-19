/*!including operations header file*/
#include "Operations.h"
//!header guard
#ifndef CLOSEACCOUNTOPERATION_H
#define CLOSEACCOUNTOPERATION_H
/*!class closeAccountOperation inheriting the class operations*/
class closeAccountOperation:public Operations
{
	public:
	void closeAccount(int pid); //!< declaration of closeAccount function
	void printwelcomeMessage(); //!< declaration of printwelcomeMessage function
};
#endif
