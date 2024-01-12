#include <gtest/gtest.h>
#include "./../source/magictape_lib.h"




// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions)
{
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}


class MonoverbTest : public testing::Test {
    protected:
        Monoverb m1_;
        Monoverb m2_;

        void SetUp() override {
            m2_.Init(4800.f);
        }
};

//Tests if MonoVerb Inits correctly
TEST_F(MonoverbTest, Init){
    //Set SR Value.
    //Make sure it is a long floating point number
    const float SR = 44197.567663451845f;
    m1_.Init(SR);

    //Make Sure SR is Init
    EXPECT_FLOAT_EQ(m1_.getSampleRate(), SR);
}