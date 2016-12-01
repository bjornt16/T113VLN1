#ifndef DOMAIN_H
#define DOMAIN_H

#include <vector>
#include "person.h"
#include "data.h"

using namespace std;

//domain layer

class Domain
{
private:
    Data data;
public:
    Domain();
    vector<Person> getPersonList(/* TODO: parameters */);

    Person isolatePerson(int inst, vector<Person>& vectorInput);
        //returns Person instant in vectorInput vector.
    void removePerson(Person personToRemove);
    //Function that uses data.removePersonFromDatabase and deletes personToRemove from vector and database

    void editPerson(Person personToEdit);

    void clearPerson();


    //Search functions based on what you want type of search you want to do
    vector<Person> searchPersonName(string search);           //name
    vector<Person> searchPersonNationality(string search);    //nationality
    vector<Person> searchPersonGender(char search);           //gender
    vector<Person> searchPersonBirth(int from, int to = 9999);//birth year
    vector<Person> searchPersonDeath(int from, int to = 9999);//death year

    //Sort functions based on what you want to sort by
    vector<Person> sortPeopleByName(string sortOrder);  // name
    vector<Person> sortPeopleByGender(string sortOrder);// gender
    vector<Person> sortPeopleByBY(string sortOrder);    // birth year
    vector<Person> sortPeopleByDY(string sortOrder);    // death year
    vector<Person> sortPeopleByNat(string sortOrder);   // nationality


    void addPerson(Person p);
};

#endif // Domain_H
