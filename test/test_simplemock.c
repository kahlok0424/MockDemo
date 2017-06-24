#include "unity.h"
#include "simplemock.h"
#include "mock_multiplydivide.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_simplemock_(void)
{
    multiply_ExpectAndReturn(2 ,3 ,6);
    divide_ExpectAndReturn(10,2 ,5);
    int result = MultiplyAndDiv(2,3,10,2);
    TEST_ASSERT_EQUAL(1,result);
}

