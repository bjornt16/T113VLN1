#include "domain.h"
#include <algorithm>

using namespace std;

//domain layer

struct PersonComparison {
  bool operator() (Person i,Person j) { return (i.getName()<j.getName());}
};

Domain::Domain()
{

}

vector<Person> Domain::getPeople(/* TODO: parameters */)
{
    vector<Person> people;

    //Person p("Duran Duran");
    //Person p2("Madonna");
    //Person p3("David Bowie");

    //people.push_back(p);
    //people.push_back(p2);
    //people.push_back(p3);

    // TODO: business logic!

    // Sort by name:
    PersonComparison cmp;
    std::sort(people.begin(), people.end(), cmp);

    return people;
}