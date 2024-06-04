#include "lntest.h"
#include "gtest/gtest.h"

struct test
{
    int a;
    test()            = default;
    test(const test&) = default;
    void func()
    {
    
    }
};

int main(int argc, char** argv)
{
    std::is_pod_v<test>;
    std::is_trivially_copyable_v<test>;
    testing::InitGoogleTest(&argc, argv);
    return ::testing::UnitTest::GetInstance()->Run();
}