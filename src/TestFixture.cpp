#include "gtest/gtest.h"

// A fixture class
class MyTest : public testing::Test
{
protected:
    virtual void SetUp() override
    {
        std::cout << "MyTest::SetUp\n";
        m_v = 100;
    }

    virtual void TearDown() override
    {
        std::cout << "MyTest::TearDown\n";
    }

    int m_v;
};

TEST_F(MyTest, simpletest) // First argument must be test fixture class name
{
    // Construct an instance of MyTest, and call SetUp
    // member of test fixture is accessible

    int v = m_v;

    EXPECT_EQ(v, 100) << "v Must be 100";

    // call TearDown
}