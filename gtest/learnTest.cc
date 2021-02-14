#include <gtest/gtest.h>
#include <numeric>
#include <vector>

TEST(LearnTest, sum)
{
    std::vector<int> vec{1, 2, 3, 4, 5};
    int sum = std::accumulate(vec.begin(), vec.end(), 0);
    EXPECT_EQ(sum, 15);
}

TEST(LearnTest, add){
    EXPECT_EQ(2+3,5);
}