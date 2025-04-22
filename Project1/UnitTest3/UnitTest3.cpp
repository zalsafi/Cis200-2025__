#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/Cavalry.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Cavalry* unit = new Cavalry(5, 5, "One");
			Assert::AreEqual(unit->attackPower, 5);
			Assert::AreEqual(unit->hitPoints, 10);
			Assert::AreEqual(unit->maxHitPoints, 10);
			Assert::AreEqual(unit->range, 5.0);
			Assert::AreEqual(unit->xPosition, 5);
			Assert::AreEqual(unit->yPosition, 5);
			Assert::AreEqual(unit->team, string("One"));
			Assert::IsTrue(unit->isAlive);
		}
	};
}
