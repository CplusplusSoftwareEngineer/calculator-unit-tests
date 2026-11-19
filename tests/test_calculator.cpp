#include <gtest/gtest.h>
#include "calculator.hpp"

class CalculatorTest : public ::testing::Test {};

TEST_F(CalculatorTest, test_zero_mul) {
    EXPECT_EQ(calc::mul(10, 0), 0);
}

TEST_F(CalculatorTest, test_square_mul) {
    EXPECT_EQ(calc::mul(10, 10), 100);
}

TEST_F(CalculatorTest, test_add) {
    EXPECT_DOUBLE_EQ(calc::add(2.5, 3.5), 6.0);
    EXPECT_DOUBLE_EQ(calc::add(-1, 1), 0.0);
}

TEST_F(CalculatorTest, test_sub) {
    EXPECT_DOUBLE_EQ(calc::sub(5, 3), 2.0);
}

TEST_F(CalculatorTest, test_div_by_zero_throws) {
    EXPECT_THROW(calc::div(1, 0), std::invalid_argument);
}

TEST_F(CalculatorTest, test_div_normal) {
    EXPECT_DOUBLE_EQ(calc::div(10, 2), 5.0);
}
