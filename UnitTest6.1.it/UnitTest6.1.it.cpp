#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna.6.1.it/Laboratorna.6.1.it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61it
{
	TEST_CLASS(UnitTest61it)
	{
	public:
		
		TEST_METHOD(TestCreate)
		{
			
			const int SIZE = 16; 
			int arr[SIZE];
			create(arr, SIZE);
			int expected[SIZE] = { -10, -5, 0, 2, 3, 6, 8, 9, 12, 15, 18, 21, 25, 28, 30, 33 };
			for (int i = 0; i < SIZE; i++)
			Assert::AreEqual(expected[i], arr[i]);
		}
	};
}
