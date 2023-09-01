#include "Unity/unity.h"
#include "primeiraFuncao.h"

//função padrão para fazer alguma configuração
void setUp(){};

//função executada por padrão depois dos testes
void tearDown(){};


//função de teste
void test_func(){
        TEST_ASSERT_EQUAL(3,funcao());
}

//função de teste
void test_func2(){
        TEST_ASSERT_EQUAL(4,funcao2());
}

//função de teste
void test_func3(){
        TEST_ASSERT_EQUAL(3,funcao3());
}

//função principal
int main(void){

        UNITY_BEGIN();
        RUN_TEST(test_func);
        RUN_TEST(test_func2);
        RUN_TEST(test_func3);
        return UNITY_END();
}