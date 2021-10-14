#include "unity_fixture.h"

TEST_GROUP(test_cos);

TEST_SETUP(test_cos)
{
}

TEST_TEAR_DOWN(test_cos)
{
}

TEST(test_cos, cos0)
{
    double res = cos(0);
    TEST_ASSERT_EQUAL_DOUBLE(1.0, res);
    //TEST_FAIL_MESSAGE("Not implemented yet");
}

TEST_GROUP_RUNNER(test_cos) 
{
    RUN_TEST_CASE(test_cos, cos0);
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