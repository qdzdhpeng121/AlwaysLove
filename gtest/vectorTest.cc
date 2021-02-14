#include <gtest/gtest.h>
#include <vector>

TEST(VectorTest, elemEqu)
{
    std::vector<int> vec{1, 2, 3, 4, 5};
    for(decltype(vec.size()) i = 0; i < vec.size(); i++){
        ASSERT_EQ(i+1,vec[i]);
    }
}

