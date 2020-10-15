#include <gtest/gtest.h>
#include <iostream>

extern "C" {
    #include "../phone.h"
}

TEST(BasicTests, testPush){
    Phone* list = NULL;
    push(&list, 1, 1, "name");
    ASSERT_NE(list, nullptr);
}

int main(int argc, char ** argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

