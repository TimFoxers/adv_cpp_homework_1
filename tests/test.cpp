#include <gtest/gtest.h>

extern "C" {
    #include "../phone.h"
}

TEST(testGeneral, testWithExample){

}

int main(int argc, char ** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

