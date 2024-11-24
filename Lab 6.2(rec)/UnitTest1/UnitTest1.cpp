#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.2(rec) (1)/Lab_6.2_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        TEST_METHOD(TestMethod1)
        {
            const int n = 5;
            int t[n] = { 5, 9, 4, -7, -2 };
            int expectation = SumOfEvenElements(t, n, 0);
            int actual = 2;
            Assert::AreEqual(expectation, actual);
        }
    };
}
