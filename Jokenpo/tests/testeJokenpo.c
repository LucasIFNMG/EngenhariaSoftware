/*
 * File:   testeJokenpo.c
 * Author: aluno
 *
 * Created on 11/10/2019, 08:21:40
 */

#include <stdio.h>
#include <stdlib.h>
#include <CUnit/Basic.h>

/*
 * CUnit Test Suite
 */

int init_suite(void) {
    return 0;
}

int clean_suite(void) {
    return 0;
}

void testEmpate() {
    int retorno = verificaGanhador(1,1);
    
    CU_ASSERT_EQUAL(retorno,0);
}

void testPedraPapel() {
    int retorno = verificaGanhador(1,2);
    
    CU_ASSERT_EQUAL(retorno,2);
}

void testPapelPedra() {
    int retorno = verificaGanhador(2,1);
    
    CU_ASSERT_EQUAL(retorno,1);
}

void testPedraTesoura() {
    int retorno = verificaGanhador(1,3);
    
    CU_ASSERT_EQUAL(retorno,1);
}

void testTesouraPedra() {
    int retorno = verificaGanhador(3,1);
    
    CU_ASSERT_EQUAL(retorno,2);
}

void testPapelTesoura() {
    int retorno = verificaGanhador(2,3);
    
    CU_ASSERT_EQUAL(retorno,2);
}

void testTesouraPapel() {
    int retorno = verificaGanhador(3,2);
    
    CU_ASSERT_EQUAL(retorno,1);
}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("testeJokenpo", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testEmpate", testEmpate)) ||
            (NULL == CU_add_test(pSuite, "testPedraPapel", testPedraPapel))||
                (NULL == CU_add_test(pSuite, "testPapelPedra", testPapelPedra))||
                    (NULL == CU_add_test(pSuite, "testPedraTesoura", testPedraTesoura))||
                        (NULL == CU_add_test(pSuite, "testTesouraPedra", testTesouraPedra))||
                            (NULL == CU_add_test(pSuite, "testPapelTesoura", testPapelTesoura))||
                                (NULL == CU_add_test(pSuite, "testTesouraPapel", testTesouraPapel)) ) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
