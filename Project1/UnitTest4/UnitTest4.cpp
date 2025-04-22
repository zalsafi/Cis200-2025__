#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/Infantry.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Infantry* unit = new Infantry(5, 5, "One");
			Assert::AreEqual(unit->attackPower, 5);
			Assert::AreEqual(unit->hitPoints, 5);
			Assert::AreEqual(unit->maxHitPoints, 5);
			Assert::AreEqual(unit->range, sqrt(2));
			Assert::AreEqual(unit->xPosition, 5);
			Assert::AreEqual(unit->yPosition, 5);
			Assert::AreEqual(unit->team, string("One"));
			Assert::IsTrue(unit->isAlive);
		}
	};
}
