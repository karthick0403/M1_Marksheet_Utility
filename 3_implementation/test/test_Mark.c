#include "unity.h"
#include "mark.h"

void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_check_Mark(){
  TEST_ASSERT_EQUAL_STRING(Karthick,karthick);
  TEST_ASSERT_EQUAL_INT(1803036,1803036);
  TEST_ASSERT_EQUAL_STRING(Bangalore,bangalore);
  TEST_ASSERT_EQUAL_STRING(English,English);
  TEST_ASSERT_EQUAL_INT(10/01/2000,10/01/2000);
  TEST_ASSERT_EQUAL_INT(78,78);
  TEST_ASSERT_EQUAL_INT(18,18);
  TEST_ASSERT_EQUAL_INT(75,75);
  TEST_ASSERT_EQUAL_INT(16,16);
  TEST_ASSERT_EQUAL_INT(73,73);
  TEST_ASSERT_EQUAL_INT(15,15);
  TEST_ASSERT_EQUAL_INT(76,76);
   TEST_ASSERT_EQUAL_INT(12,12);
}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_check_Mark);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */