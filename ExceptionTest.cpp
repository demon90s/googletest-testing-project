#include "gtest/gtest.h"

void func_exception()
{
    throw std::runtime_error("just a test");
}

void func_noexception()
{

}

int no42()
{
    return 100;
}

TEST(test_ExceptionTest, simpletest)
{
    EXPECT_THROW(func_exception(), std::runtime_error);
    EXPECT_ANY_THROW(func_exception());
    EXPECT_NO_THROW();

    if (no42() == 42)
    {
        FAIL() << "this funcion must not return 42"; // report test has failed
    }
}
