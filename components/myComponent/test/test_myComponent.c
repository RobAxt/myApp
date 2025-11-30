#include "unity.h"
#include "myComponent.h"

TEST_CASE("myComponentFunction Should Increment Input", "[myComponent]")
{
    TEST_ASSERT_EQUAL_UINT8(4, myComponentFunction(3));
    TEST_ASSERT_EQUAL_UINT8(5, myComponentFunction(4));
}