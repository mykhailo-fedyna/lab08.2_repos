#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestProcessCharacter)
		{
			Assert::AreEqual('z', ProcessCharacter('z'));
			Assert::AreEqual('a', ProcessCharacter('A'));
			Assert::AreEqual('1', ProcessCharacter('1'));
		}
		TEST_METHOD(TestIsAlphanumeric)
		{
			Assert::IsTrue(IsAlphanumeric('A')); 
			Assert::IsTrue(IsAlphanumeric('z')); 
			Assert::IsTrue(IsAlphanumeric('5')); 
			Assert::IsFalse(IsAlphanumeric('!'));
		}
		TEST_METHOD(TestProcessString)
		{
			Assert::AreEqual(string("a1b2c3"), ProcessString("A1B2!C3 D4"));
			Assert::AreEqual(string("abc"), ProcessString("ABC"));
			Assert::AreEqual(string("abc123"), ProcessString("abc123 !@#"));
		}
	};
}
