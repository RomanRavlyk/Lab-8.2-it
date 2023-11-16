#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 8.2 it/Lab 8.2 it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:

        TEST_METHOD(FindCharTest)
        {
            char str[] = "asdasd,cdcadccas,csscas";
            int result = findLongestWord(str);
            Assert::AreEqual(result, 9);
        }
    };
}