#include "person.h"

Person::Person(string n, int a, Gender g) : name{ n}, age{a}, gender{g}
{
	if (name.size() > 40)
	{
		name.erase(name.begin() + 40, name.end());
	}
	if (age < 0 || age > 100)
	{
		age = 0;
	}
	if (gender < UNDEF || gender > FEMALE)
	{
		gender = UNDEF;
		
	}
}

Person::Person(string n, Gender g) : Person(n, 0, g) {}

Person::Person(string n, int a) :Person(n, a, Person::UNDEF) {}

Person::Person(string n) : Person(n, 0, Person::UNDEF) {}


Person::Person(Gender g)
{
}

Person::Person(int a)
{}

Person::Person()
{
}

string Person::GetName()
{
	return name;
}

int Person::GetAge()
{
	return age;
}

Person::Gender Person::GetGender()
{
	return gender;
}

