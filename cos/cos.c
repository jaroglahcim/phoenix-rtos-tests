#include <math.h>

#include "unity_fixture.h"

#ifdef UNITY_INCLUDE_FLOAT
#define UNITY_INCLUDE_FLOAT
#endif

#ifdef UNITY_INCLUDE_DOUBLE
#define UNITY_INCLUDE_DOUBLE
#define UNITY_DOUBLE_PRECISION (1e0)
#endif

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
    res = cos(x);
    TEST_ASSERT_EQUAL_DOUBLE(y, res);
}

TEST(test_cos, cos_third_of_pi)
{
    double res, x, y;
    x = M_PI / 3.0;
    y = 0.5;
    res = cos(x);
    TEST_ASSERT_EQUAL_DOUBLE(y, res);
}

TEST(test_cos, cos_half_of_pi)
{
    double res, x, y;
    x = M_PI / 2.0;
    y = 0.0;
    res = cos(x);
    TEST_ASSERT_EQUAL_DOUBLE(y, res);
}

TEST(test_cos, cos_second_quarter)
{
    TEST_ASSERT_EQUAL_DOUBLE(cos((2.0 / 3.0) * M_PI), -0.5);
    TEST_ASSERT_EQUAL_DOUBLE(cos(0.75* M_PI), -sqrt(2) / 2.0);
    TEST_ASSERT_EQUAL_DOUBLE(cos((5.0 / 6.0) * M_PI), -sqrt(3) / 2.0);
    TEST_ASSERT_EQUAL_DOUBLE(cos(M_PI), -1.0);
}

TEST(test_cos, cos_third_quarter)
{
    TEST_ASSERT_EQUAL_DOUBLE(cos((7.0 / 6.0) * M_PI), -sqrt(3) / 2.0);
    TEST_ASSERT_EQUAL_DOUBLE(cos(1.25 * M_PI), -sqrt(2) / 2.0);
    TEST_ASSERT_EQUAL_DOUBLE(cos((4.0 / 3.0) * M_PI), -0.5);
    TEST_ASSERT_EQUAL_DOUBLE(cos(1.5 * M_PI), 0.0);
}

TEST(test_cos, cos_fourth_quarter)
{
    TEST_ASSERT_EQUAL_DOUBLE(cos((5.0 / 3.0) * M_PI), 0.5);
    TEST_ASSERT_EQUAL_DOUBLE(cos(1.75 * M_PI), sqrt(2) / 2.0);
    TEST_ASSERT_EQUAL_DOUBLE(cos((11.0 / 6.0) * M_PI), sqrt(3) / 2.0);
    TEST_ASSERT_EQUAL_DOUBLE(cos(2.0 * M_PI), 1.0);
}


TEST_GROUP_RUNNER(test_cos_known_values) 
{
    RUN_TEST_CASE(test_cos, cos_0);
    RUN_TEST_CASE(test_cos, cos_sixth_of_pi);
    RUN_TEST_CASE(test_cos, cos_fourth_of_pi);
    RUN_TEST_CASE(test_cos, cos_third_of_pi);
    RUN_TEST_CASE(test_cos, cos_half_of_pi);
    RUN_TEST_CASE(test_cos, cos_second_quarter);
    RUN_TEST_CASE(test_cos, cos_third_quarter);
    RUN_TEST_CASE(test_cos, cos_fourth_quarter);
}

void runner(void)
{
	RUN_TEST_GROUP(test_cos_known_values);
}

int main(int argc, char *argv[])
{
	UnityMain(argc, (const char **)argv, runner);
	return 0;
}