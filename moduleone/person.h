#pragma once

#include <string>

using namespace std;
class Person {
private:
	string name;
	int age;
	

public:
	enum Gender { UNDEF, FEMALE, MALE };
	Gender gender;
	Person(string n, int a, Gender g);
	Person(string n, int a);
	Person(string n);
	Person(string n, Gender g);
	Person(Gender g);
	Person(int a);
	Person();
	string GetName();
	int GetAge();
	Gender GetGender();
};