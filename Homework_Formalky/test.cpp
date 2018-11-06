#include <gtest/gtest.h>
#include "homework.h"



TEST(test1, ThisIsYes){
    ASSERT_STREQ("YES", checkCountCharMultipleOfK("ab+c.aba.∗.bac.+.+∗",'a', 2));
}

TEST(test2, ThisIsYes){
    ASSERT_STREQ("YES", checkCountCharMultipleOfK("aba.∗.a.∗ab1+..",'a', 2));
}

TEST(test1, ThisIsYes){
    ASSERT_STREQ("YES", checkCountCharMultipleOfK("x∗",'x', 7));
}

TEST(test2, ThisIsNo){
    ASSERT_STREQ("NO", checkCountCharMultipleOfK("xx.x+",'x', 3));
}

TEST(test1, ThisIsNo){
    ASSERT_STREQ("NO", checkCountCharMultipleOfK("xx.*x.",'x', 2));
}

TEST(test2, ThisIsNo){
    ASSERT_STREQ("NO", checkCountCharMultipleOfK("aa.a.xa.+",'a', 2));
}

TEST(test1, ThisIsError){
    ASSERT_STREQ("ERROR", checkCountCharMultipleOfK("ab+.",'a', 9));
}

TEST(test2, ThisIsError){
    ASSERT_STREQ("ERROR", checkCountCharMultipleOfK("aba.∗.a.∗ab1+..",'a', 0));
}

TEST(test2, ThisIsError){
    ASSERT_STREQ("ERROR", checkCountCharMultipleOfK(".aba.∗.a.∗ab1+..",'a', 2));
}

