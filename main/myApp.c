#include <stdio.h>
#include "myComponent.h"
#include "unity.h"

void app_main(void)
{
    printf("\n=== Iniciando unidad de tests (Unity) ===\n\n");

    UNITY_BEGIN();
    unity_run_test_by_name("myComponentFunction Should Increment Input");
    UNITY_END();

    
    UNITY_BEGIN();
    unity_run_tests_by_tag("[myComponent]", false);
    UNITY_END();

    //unity_run_menu();
}