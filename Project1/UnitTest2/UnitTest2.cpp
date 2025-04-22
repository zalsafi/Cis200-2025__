#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/Artillery.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Artillery* unit = new Artillery(5, 5, "One");
			Assert::AreEqual(unit->attackPower, 10);
			Assert::AreEqual(unit->hitPoints, 1);
			Assert::AreEqual(unit->maxHitPoints, 1);
			Assert::AreEqual(unit->range, 10.0);
			Assert::AreEqual(unit->xPosition, 5);
			Assert::AreEqual(unit->yPosition, 5);
			Assert::AreEqual(unit->team, string("One"));
			Assert::IsTrue(unit->isAlive);
		}
	};
}
