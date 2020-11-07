#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.1/Lb5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double  c;
			int f = 0;
			c = h(3, f, 1);
			Assert::AreEqual(c, 0.4);
		}
	};
}
