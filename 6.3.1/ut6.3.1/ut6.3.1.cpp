#include "pch.h"
#include "CppUnitTest.h"
#include "../6.3.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ut631
{
	TEST_CLASS(ut631)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int k[3] = { 3,2,1 };

			bool p;

			p = check(k, 3);

			Assert::AreEqual(false, p);
		}
	};
}
