#include "pch.h"
#include "CppUnitTest.h"
#include "../moduleone/person.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TEST3
{
	TEST_CLASS(TEST3)
	{
	public:
		
		TEST_METHOD(MAX_LENGHT_NAME)
		{
			std::string name(50, 'a');
			Person person{ name};
			std::string expected(40, 'a');
			Assert::AreEqual(expected, person.GetName());
		}
		TEST_METHOD(NAME_EMPTY_NONAME)
		{
			std::string name = "";
			Person person{ name };
			std::string expected ="NoName";
			Assert::AreEqual(person.GetName(),expected);
		}
		TEST_METHOD(NORMAL_NAME)
		{
			std::string name = "Oleg";
			Person person{ name };

			Assert::AreEqual(person.GetName(), name);
		}
	};
}
