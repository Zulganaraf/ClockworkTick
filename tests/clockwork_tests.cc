#include <gtest/gtest.h>


// run with make test
// A trivial test to check basic equality
TEST(TrivialTest, SimpleMath) {
    EXPECT_EQ(1 + 1, 2);
}

// A trivial test demonstrating how EXPECT failures work
TEST(TrivialTest, StringCheck) {
    EXPECT_STRNE("hello", "world");
}