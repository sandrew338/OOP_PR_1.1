#include "pch.h"
#include "CppUnitTest.h"
#include "..\main.cpp"
#include "..\Cursor.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest11
{
	TEST_CLASS(UnitTest11)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Cursor a;
			Assert::AreEqual(a.Init(1000000, 200000), false);
		}
	};
}
