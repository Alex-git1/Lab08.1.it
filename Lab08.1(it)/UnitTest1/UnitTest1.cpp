#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab08.1(it)/Lab08.1(it).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char testStr1[] = "Hello World!!!";
			Assert::AreEqual(1, CountExclamations(testStr1));
		}
	};
}
