#include "unity_fixture.h"

TEST_GROUP(test_cos);

TEST(test_cos, test1)
{
    TEST_FAIL_MESSAGE("Not implemented yet");
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