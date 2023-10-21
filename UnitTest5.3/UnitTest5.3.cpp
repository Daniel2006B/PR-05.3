#include "pch.h"
#include "CppUnitTest.h"
#include "../PR-05.3/PR-05.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double res;
			res = h(0);
			double z = abs(res - 3.3845);

			Assert::IsTrue(z < 6);
		}
	};
}
