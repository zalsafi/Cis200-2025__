#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/Unit.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			Unit* unit = new Unit(5, 5, sqrt(2), 0, 0, "One");
			Assert::AreEqual(unit->attackPower, 5);
			Assert::AreEqual(unit->hitPoints, 5);
			Assert::AreEqual(unit->maxHitPoints, 5);
			Assert::AreEqual(unit->range, sqrt(2));
			Assert::AreEqual(unit->xPosition, 0);
			Assert::AreEqual(unit->yPosition, 0);
			Assert::AreEqual(unit->team, string("One"));
			Assert::IsTrue(unit->isAlive);
		}
	};
}
