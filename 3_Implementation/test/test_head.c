#include "unity.h"
#include "head.h"

void setUp(){

}

void tearDown(){

}

void test_second(void)
{
  TEST_ASSERT_EQUAL_INT(1,second(1)); 
}
 
void test_Ddose(void)
{
    TEST_ASSERT_EQUAL_INT(2,Ddose(2)); 
}
void test_login(void)
{
  TEST_ASSERT_EQUAL_INT(1,login(1234)); 
}
void test_prov(void)
{
  TEST_ASSERT_EQUAL_INT(1,prov("cippla")); 
}

int main(void)
{

  UNITY_BEGIN();

  RUN_TEST(test_second);
  RUN_TEST(test_Ddose);
  RUN_TEST(test_login);
  RUN_TEST(test_prov);

  return UNITY_END();
}


 //gcc test/test_head.c src/sum.c unity/unity.c -Iunity -Iinc -o all.out
 //main.c src/login.c src/prov.c

 //gcc test/test_head.c main.c src/login.c src/prov.c unity/unity.c -Iunity -Iinc -o a.out
// gcc main.c src/login.c src/prov.c test/test_head.c unity/unity.c -Iunity -Iinc -o a.out


// Below Working
 //gcc src/login.c src/prov.c test/test_head.c unity/unity.c -Iunity -Iinc -o a.out -lm