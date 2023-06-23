//This is the specification file for the PersonData class
//This class will act as a base class for the CustomerData class
#ifndef PERSONDATA_H
#define PERSONDATA_H
#include<string>
using namespace std;

class PersonData
{
	//Declare Protected attributes
	protected:
		string last_name, first_name, address, state, city, zip, phone;
	//Declare Public members
	public:

		//Default constructor
		PersonData() :PersonData("","","","","","","")
		{}
		//Parametized constructor that takes arguments for each variable in class
		PersonData(string lname, string fname, string adrs, string ste, string cty, string zp, string phne)
		{
			last_name = lname;
			first_name = fname;
			address = adrs;
			state = ste;
			city = cty;
			zip = zp;
			phone = phne;
		}
		//Mutator functions
		void setLastName(string lname)
		{
			last_name = lname;
		}

		void setfirstName(string fname)
		{
			first_name = fname;
		}

		void setAddress(string adrs)
		{
			address = adrs;
		}

		void setState(string ste)
		{
			state = ste;
		}
		void setCity(string cty)
		{
			city = cty;
		}
		void setZip(string zp)
		{
			zip =zp;
		}
		void setPhone(string phne)
		{
			phone = phne;
		}
		//Accessor functions
		string  getLastName()
		{
			return last_name;
		}

		string  getFirstName()
		{
			return first_name;
		}

		string getAddress()
		{
			return address;
		}

		string getState()
		{
			return state;
		}
		string  getCity()
		{
			return city;
		}
		string  getZip()
		{
			return zip;
		}
		string  getPhone()
		{
			return phone;
		}

		string getFullName()
		{
			return (first_name + " " + last_name);
		}


};
#endif // !PERSONDATA_H
