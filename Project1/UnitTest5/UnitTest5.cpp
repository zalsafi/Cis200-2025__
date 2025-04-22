#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/Captain.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:
		
		TEST_METHOD(TestMethod5)
		{
			Captain* unit = new Captain(5, 5, "One");
			Assert::AreEqual(unit->attackPower, 1);
			Assert::AreEqual(unit->hitPoints, 20);
			Assert::AreEqual(unit->maxHitPoints, 20);
			Assert::AreEqual(unit->range, 5.0);
			Assert::AreEqual(unit->xPosition, 5);
			Assert::AreEqual(unit->yPosition, 5);
			Assert::AreEqual(unit->team, string("One"));
			Assert::IsTrue(unit->isAlive);
		}
	};
}
