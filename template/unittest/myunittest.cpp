#ifdef UNIT_TEST
#include "gtest/gtest.h"
#include "../src/myApp.h"
#include <limits.h>
#include <math.h>

    TEST(myFuctionTest1, zero) {
        int myvar=0;
        EXPECT_EQ( myfunction(&myvar), 2);
    }
    TEST(testFunction2, normal) {
        int myvar=1;
        EXPECT_EQ( myfunction(&myvar),myvar+2);

    }


    int main(int argc, char **argv) {
        ::testing::InitGoogleTest( &argc, argv );
        return RUN_ALL_TESTS();
    }
#endif
