#include "gtest/gtest.h"

// 由于这些函数被test，因此不会真的把程序终止
void die()
{
    std::cerr << "Bad thing happened";
    exit(1); // exit(0) is not a death
}

void die_signal()
{
    std::cerr << "Die by SIGINT";
    raise(SIGINT);
}

TEST(test_DeathTest, simpletest) // test case name should end with "DeathTest"
{
    EXPECT_DEATH(die(), "Bad thing"); // 只有出错，才会输出错误信息（根据正则匹配查询）
    // Reasons of death:
    // 1. Program exited with non-zero code
    // 2. Program was killed by a signal

    EXPECT_EXIT(die(), ::testing::ExitedWithCode(1), "");

    EXPECT_EXIT(die_signal(), ::testing::KilledBySignal(SIGINT), "");
}
