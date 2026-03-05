#include<iostream>
#include"../moduleone/person.h"
using namespace std;

int main()
{
	Person p = { "Oleg", 35,Person::MALE};
	cout << p.GetName() << endl;

	return 0;
}