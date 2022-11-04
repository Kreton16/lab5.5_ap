#include "pch.h"
#include "CppUnitTest.h"
#include "../pr5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int depth = 0;
			double l = p(2, 3, 1, depth);
			Assert::AreEqual(l, 8.);

		}
	};
}
