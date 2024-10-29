//#define //_CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_08.1_it/lab_08.1_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest081it
{
	TEST_CLASS(UnitTest081it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char test[] = "while or not while ??? w.h.i.l.e";
			Assert::AreEqual(2, Count(test));
		}
	};
}
