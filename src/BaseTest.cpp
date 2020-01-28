#include "gtest/gtest.h"

/*
    Nonfatal assertion(EXPECT)
    EXPECT_EQ               ==
    EXPECT_NE               !=
    EXPECT_GT               >
    EXPECT_GE               >=
    EXPECT_LT               <
    EXPECT_LE               <=

    EXPECT_TRUE             expr is true

    EXPECT_STREQ            string equal check
    EXPECT_STRCASEEQ        string case equal

    EXPECT_FLOAT_EQ         check for float ==
    EXPECT_DOUBLE_EQ        check for double ==

    fatal assertion(ASSERT)
    前缀改为 ASSERT
*/

TEST(test_BaseTest, hello) {
    std::cout << "[DEBUG] Hello google test\n";
}

TEST(test_BaseTest, ASSERT) {
    ASSERT_TRUE(100 > 90) << "Assert failed!!!!!";  // 失败才会输出
    // assert 失败，终止function执行
}

TEST(test_BaseTest, EXPECT) {
    EXPECT_GT(100, 90) << "Expect failed!!!!!";
    // expect 失败，仍会继续function执行

    const char *hello = "HELLO";
    EXPECT_STREQ("HELLO", hello) << "EXPECT_STREQ failed!!!!";
    EXPECT_STRCASEEQ("Hello", hello) << "EXPECT_STRCASEEQ failed!!!!";

    float pi = 3.14f;
    //EXPECT_EQ(pi, 3.14) << "EXPECT_EQ failed!!!!"; // can not pass
    EXPECT_FLOAT_EQ(pi, 3.14) << "EXPECT_FLOAT_EQ failed!!!!";
    
    std::cout << "[DEBUG] Expect test done.\n";
}
