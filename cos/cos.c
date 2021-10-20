#include <math.h>

#include "unity_fixture.h"

#ifdef UNITY_INCLUDE_FLOAT
#define UNITY_INCLUDE_FLOAT
#endif

#ifdef UNITY_INCLUDE_DOUBLE
#define UNITY_INCLUDE_DOUBLE
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
    TEST_ASSERT_EQUAL_DOUBLE(1.0, cos(0.0));
}

TEST(test_cos, cos_pi_6)
{
    TEST_ASSERT_EQUAL_DOUBLE(sqrt(3) / 2.0, cos(M_PI / 6.0));
}

TEST(test_cos, cos_pi_4)
{
    TEST_ASSERT_EQUAL_DOUBLE(sqrt(2) / 2.0, cos(M_PI / 4.0));
}

TEST(test_cos, cos_pi_3)
{
    TEST_ASSERT_EQUAL_DOUBLE(0.5, cos(M_PI / 3.0));
}

TEST(test_cos, cos_pi_2)
{
    TEST_ASSERT_DOUBLE_WITHIN(1e-15, 0.0, cos(M_PI / 2.0));
}

TEST(test_cos, cos_2_pi_3)
{
    TEST_ASSERT_EQUAL_DOUBLE(-0.5, cos((2.0 / 3.0) * M_PI));
}

TEST(test_cos, cos_3_pi_4)
{
    TEST_ASSERT_EQUAL_DOUBLE(-sqrt(2.0) / 2.0, cos(0.75* M_PI));
}

TEST(test_cos, cos_5_pi_6)
{
    TEST_ASSERT_EQUAL_DOUBLE(-sqrt(3) / 2.0, cos((5.0 / 6.0) * M_PI));
}

TEST(test_cos, cos_pi)
{
    TEST_ASSERT_EQUAL_DOUBLE(-1.0, cos(M_PI));
}

TEST(test_cos, cos_7_pi_6)
{
    TEST_ASSERT_EQUAL_DOUBLE(-sqrt(3) / 2.0, cos((7.0 / 6.0) * M_PI));
}

TEST(test_cos, cos_5_pi_4)
{
    TEST_ASSERT_EQUAL_DOUBLE(-sqrt(2) / 2.0, cos(1.25 * M_PI));
}

TEST(test_cos, cos_4_pi_3)
{
    TEST_ASSERT_EQUAL_DOUBLE(-0.5, cos((4.0 / 3.0) * M_PI));
}

TEST(test_cos, cos_3_pi_2)
{
    TEST_ASSERT_DOUBLE_WITHIN(1e-15, 0.0, cos(1.5 * M_PI));
}

TEST(test_cos, cos_5_pi_3)
{
    TEST_ASSERT_EQUAL_DOUBLE(0.5, cos((5.0 / 3.0) * M_PI));
}

TEST(test_cos, cos_7_pi_4)
{
    TEST_ASSERT_EQUAL_DOUBLE(sqrt(2.0) / 2.0, cos(1.75 * M_PI));
}

TEST(test_cos, cos_11_pi_6)
{
    TEST_ASSERT_EQUAL_DOUBLE(sqrt(3.0) / 2.0, cos((11.0 / 6.0) * M_PI));
}

TEST(test_cos, cos_2_pi)
{
    TEST_ASSERT_EQUAL_DOUBLE(1.0, cos(2.0 * M_PI));
}


TEST(test_cos, cos_NaN)
{
    //NAN
    TEST_ASSERT_EQUAL_DOUBLE(1.0, cos(sqrt(-1.0)));
}

TEST(test_cos, cos_minus_pi)
{
    TEST_ASSERT_EQUAL_DOUBLE(-1.0, cos(-M_PI));
}

TEST(test_cos, cos_100_pi)
{
    TEST_ASSERT_EQUAL_DOUBLE(1.0, cos(100 * M_PI));
}

TEST_GROUP_RUNNER(test_cos_known_values_one_cycle) 
{
    RUN_TEST_CASE(test_cos, cos_0);
    RUN_TEST_CASE(test_cos, cos_pi_6);
    RUN_TEST_CASE(test_cos, cos_pi_4);
    RUN_TEST_CASE(test_cos, cos_pi_3);
    RUN_TEST_CASE(test_cos, cos_pi_2);

    RUN_TEST_CASE(test_cos, cos_2_pi_3);
    RUN_TEST_CASE(test_cos, cos_3_pi_4);
    RUN_TEST_CASE(test_cos, cos_5_pi_6);
    RUN_TEST_CASE(test_cos, cos_pi);

    RUN_TEST_CASE(test_cos, cos_7_pi_6);
    RUN_TEST_CASE(test_cos, cos_5_pi_4);
    RUN_TEST_CASE(test_cos, cos_4_pi_3);
    RUN_TEST_CASE(test_cos, cos_3_pi_2);
    RUN_TEST_CASE(test_cos, cos_2_pi);
}

TEST_GROUP_RUNNER(test_cos_special_cases) 
{
    RUN_TEST_CASE(test_cos, cos_minus_pi);
    RUN_TEST_CASE(test_cos, cos_100_pi);
    RUN_TEST_CASE(test_cos, cos_NaN);
}

void runner(void)
{
	RUN_TEST_GROUP(test_cos_known_values_one_cycle);
	RUN_TEST_GROUP(test_cos_special_cases);
}

int main(int argc, char *argv[])
{
	UnityMain(argc, (const char **)argv, runner);
	return 0;
}