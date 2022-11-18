#include <iostream>
using namespace std;

class employee
{
    //member variables:
    private: //access specifier is private for attributes.
    int age; //technically empty but will have value of 22 when object "moris" is run.
    int yearsAtCompany; //technically empty but will have value of 3 when object "moris" is run.

    //member functions:
    public: //access specifier is public for procedures bc we need to access them from main function.
    int getAge (int value)
    {
        age = value; //assigns member variable the argument value.
        return age; //returns member variable value. we are accessing them through the public procedures - hence no error.
    }

    int getYearsAtCompany (int value)
    {
        yearsAtCompany = value; //assigns member variable the argument value.
        return yearsAtCompany; //returns member variable value. we are accessing them through the public procedures - hence no error.
    }
};

int main ()
{
    employee moris; //the object created is "moris."
    cout << "hi moris. your age is " << moris.getAge(22) << " and your time at the company is " << moris.getYearsAtCompany(3) << " years.";
    //we run the getAge() function with argument 22 for object "moris."
    //we also run the getYearsAtCompany() function with argument 3 for object "moris."
    //we can call these member functions from the main bc their access specifier is public.
    //we cannot directly call the member variables from main bc their access specifier is private.
    //however, we are able to get the return values of the member variables bc they are accessed through the member functions which are public.
    cout << endl << moris.age; //this would print 22 but cannot be accessed bc of private access specifier.
    cout << endl << moris.yearsAtCompany; //this would print 3 but cannot be accessed bc of private access specifier.
    return 0;
}
/*
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//NOTE: PROGRAM WILL PRODUCE COMPILE-TIME ERROR IF RAN IN IDE.
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
*/
