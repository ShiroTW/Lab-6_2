#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.2(it)/Lab_6.2_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        TEST_METHOD(TestMethod1)
        {
            const int n = 5;
            int t[n] = { 8, 6, -5, -3, -1 };
            int expectation = SumOfEvenElements(t, n);
            int actual = 14;
            Assert::AreEqual(expectation, actual);
        }
    };
}
