#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\RoorFinder\RoorFinder.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1_start
{		
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: Your test code here
			Assert::AreEqual(1, 1);
		}
		
		TEST_METHOD(BasicTest)
		{
			
			CRoorFinder rooter;
			Assert::AreEqual(
				// Expected value
				0.0,
				//Actual value
				rooter.SquareRoot(0.0),
				//Tolerance:
				0.01,
				//Message:
				L"Basic test failed",
				//Line number - used if there is no PDB file:
				LINE_INFO());

		}

		TEST_METHOD(RangeTest)
		{
			CRoorFinder rooter;
			for (double v = 1e-6; v < 1e6; v = v*3.2)
			{
				double actual = rooter.SquareRoot(v*v);
				Assert::AreEqual(v, actual, v / 1000);
			}
		}
	};
}