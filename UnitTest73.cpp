#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP Lab7.3/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest73
{
	TEST_CLASS(UnitTest73)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string text = "std::set is an associative container, that contains a sorted set of unique objects of type Key.!";
			set<char> s = find(text);
			Assert::AreEqual(s.size(),(size_t)3);
		}
	};
}
