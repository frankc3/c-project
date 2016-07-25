#ifdef UNIT_TEST
#include "gtest/gtest.h"
#include "../src/binGap.h"
#include <limits.h>
#include <math.h>

    TEST(printbin, zerodata) {
        int test_bin_ar[32]={0};
        EXPECT_EQ( printbin(test_bin_ar,2), 2);
        EXPECT_EQ( printbin(test_bin_ar,0), 0);
        EXPECT_EQ( printbin(test_bin_ar,32), 32);
    }
    TEST(gap, normal) {
            EXPECT_EQ(gap(INT_MIN), 0);
            EXPECT_EQ(gap(-1), 0);
            EXPECT_EQ(gap(0), 0);
            EXPECT_EQ(gap(6), 0);
            EXPECT_EQ(gap(16), 0);
            EXPECT_EQ(gap(33), 4);
            EXPECT_EQ(gap(INT_MAX), 0);
            EXPECT_EQ(gap(pow(2,30)+1), 29);
    }


    int main(int argc, char **argv) {
        ::testing::InitGoogleTest( &argc, argv );
        return RUN_ALL_TESTS();
    }
#endif
