
#include <unity.h>

void someTest() {
}

int main( int argc, char **argv) {
    UNITY_BEGIN();
    RUN_TEST(someTest);
    UNITY_END();
}

