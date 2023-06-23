//This is the specification class for the customer data class
//This class will be derived from the PersonData class
#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H
#include "PersonData.h"
#include<string>
using namespace std;

class CustomerData : public PersonData
{
	//Declare Private attributes
	private:
		int customerNumber;
		bool mailingList;
	//Declare Public members
	public:
		//Default construtor
		CustomerData (): PersonData()
		{
		
		}
		//Parametized constructor that also assigns values to PersonData
		CustomerData(int cnum, bool mlist, string lname, string fname, string adrs, string ste, string cty, string zp, string phne): PersonData(lname,  fname,  adrs, ste, cty,  zp,  phne)
		{
			customerNumber = cnum;
			mailingList = mlist;
		}

		//Mutator functions
		void setCustomerNumber(int cnum)
		{
			customerNumber = cnum;
		}
		void MailingList(bool mlist)
		{
			mailingList = mlist;
		}

		//Accessor functions
		int  getCustomerNumber()
		{
			return customerNumber;
		}
		bool MailingList()
		{
			return mailingList;
		}
};

#endif // !CUSTOMERDATA_H\
