#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_6.4_ite/lab_6.4.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(Test_FindC)
		{
			const int n = 5;
			double arr[n] = { -5.0, 3.5, 7.0, -1.2, 4.1 };
			double C = 2.0;
			int result = FindC(arr, n, C);
			Assert::AreEqual(2, result); 
		}

		TEST_METHOD(Test_MaxAbs)
		{
			const int n = 5;
			double arr[n] = { -5.0, 3.5, 7.0, -1.2, 4.1 };
			double result = MaxAbs(arr, n);
			Assert::AreEqual(-4.92, result, 0.01); 
		}

		TEST_METHOD(Test_TransformArray)
		{
			const int n = 6;
			double arr[n] = { -3.0, 5.0, -1.2, 0.0, 4.1, -2.3 };
			double expected[n] = { -3.0, -1.2, -2.3, 5.0, 0.0, 4.1 };

			TransformArray(arr, n);

			for (int i = 0; i < n; i++)
			{
				Assert::AreEqual(expected[i], arr[i]);
			}
		}

		TEST_METHOD(Test_CreateRandomArray)
		{
			const int n = 10;
			double arr[n];
			CreateRandomArray(arr, n, -10.0, 10.0);

			for (int i = 0; i < n; i++)
			{
				Assert::IsTrue(arr[i] >= -10.0 && arr[i] <= 10.0);
			}
		}
	};
}
