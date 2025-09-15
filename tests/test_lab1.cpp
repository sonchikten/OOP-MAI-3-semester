#include "/usr/src/googletest/googletest/include/gtest/gtest.h"
#include "../src/lab1/lab1.h"

//Тест для однозначных чисел (все должны быть true)
TEST(NonDecreasingTest, SingleDigitNumbers) {
    EXPECT_TRUE(IsNonDecreasing(0));
    EXPECT_TRUE(IsNonDecreasing(5));
    EXPECT_TRUE(IsNonDecreasing(9));
}

// Тест для чисел с одинаковыми цифрами (все true)
TEST(NonDecreasingTest, SameDigits) {
    EXPECT_TRUE(IsNonDecreasing(11));
    EXPECT_TRUE(IsNonDecreasing(222));
    EXPECT_TRUE(IsNonDecreasing(3333));
    EXPECT_TRUE(IsNonDecreasing(111111));
}

// Тест для правильных неубывающих последовательностей (true)
TEST(NonDecreasingTest, ValidNonDecreasing) {
    EXPECT_TRUE(IsNonDecreasing(12));
    EXPECT_TRUE(IsNonDecreasing(123));
    EXPECT_TRUE(IsNonDecreasing(1234));
    EXPECT_TRUE(IsNonDecreasing(112233));
    EXPECT_TRUE(IsNonDecreasing(13579));
    EXPECT_TRUE(IsNonDecreasing(122345));
}
// Тест для неправильных последовательностей (false)
TEST(NonDecreasingTest, InvalidNonDecreasing) {
    EXPECT_FALSE(IsNonDecreasing(21));      // 2 > 1
    EXPECT_FALSE(IsNonDecreasing(321));     // 3 > 2 > 1
    EXPECT_FALSE(IsNonDecreasing(132));     // 1 < 3 > 2
    EXPECT_FALSE(IsNonDecreasing(1232));    // 1<2<3>2
    EXPECT_FALSE(IsNonDecreasing(4432));    // 4=4>3>2
    EXPECT_FALSE(IsNonDecreasing(9876));    // 9>8>7>6
}
// Тест для чисел с нулями
TEST(NonDecreasingTest, NumbersWithZeros) {
    EXPECT_FALSE(IsNonDecreasing(100));     // 1>0=0
    EXPECT_FALSE(IsNonDecreasing(102));    // 1>0<2
    EXPECT_FALSE(IsNonDecreasing(1000));    // 1>0=0=0
    EXPECT_FALSE(IsNonDecreasing(1001));   // 1>0=0<1
}
// Тест для пограничных случаев
TEST(NonDecreasingTest, EdgeCases) {
    EXPECT_TRUE(IsNonDecreasing(1));
    EXPECT_TRUE(IsNonDecreasing(9));
    EXPECT_TRUE(IsNonDecreasing(123456789));
    EXPECT_FALSE(IsNonDecreasing(987654321));
}
