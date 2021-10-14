#include <math.h>
#define UNITY_EXCLUDE_FLOAT
#define UNITY_INCLUDE_DOUBLE
#define UNITY_DOUBLE_PRECISION 1e-12

#include "unity_fixture.h"

TEST_GROUP(test_cos);

TEST_SETUP(test_cos)
{
}

TEST_TEAR_DOWN(test_cos)
{
}

TEST(test_cos, cos_0)
{
    double res, x, y;
    x = 0.0;
    y = 1.0;
    res = cos(x);
    TEST_ASSERT_EQUAL_DOUBLE(y, res);
}

TEST(test_cos, cos_sixth_of_pi)
{
    double res, x, y;
    x = M_PI / 6.0;
    y = sqrt(3) / 2.0;
    res = cos(x);
    TEST_ASSERT_EQUAL_DOUBLE(y, res);
}

TEST(test_cos, cos_fourth_of_pi)
{
    double res, x, y;
    x = M_PI / 4.0;
    y = sqrt(2) / 2.0;
    res = cos(0);
    TEST_ASSERT_EQUAL_DOUBLE(y, res);
}

TEST(test_cos, cos_third_of_pi)
{
    double res, x, y;
    x = M_PI / 3.0;
    y = 0.5;
    res = cos(0);
    TEST_ASSERT_EQUAL_DOUBLE(y, res);
}

TEST(test_cos, cos_half_of_pi)
{
    double res, x, y;
    x = M_PI / 2.0;
    y = 0.0;
    res = cos(0);
    TEST_ASSERT_EQUAL_DOUBLE(y, res);
}


TEST_GROUP_RUNNER(test_cos) 
{
    RUN_TEST_CASE(test_cos, cos_0);
    RUN_TEST_CASE(test_cos, cos_sixth_of_pi);
    RUN_TEST_CASE(test_cos, cos_fourth_of_pi);
    RUN_TEST_CASE(test_cos, cos_third_of_pi);
    RUN_TEST_CASE(test_cos, cos_half_of_pi);
}

void runner(void)
{
	RUN_TEST_GROUP(test_cos);
}

int main(int argc, char *argv[])
{
	UnityMain(argc, (const char **)argv, runner);
	return 0;
}