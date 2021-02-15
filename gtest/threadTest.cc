#include <gtest/gtest.h>
#include <thread>  

using std::thread;
using std::cout;
using std::ref;

void fun1(int n)
{  
    cout << "Thread " << n << " executing\n";  
    n += 10;  
    
}  
void fun2(int& n)
{  
    cout << "Thread " << n << " executing\n";  
    n += 20;  
}

TEST(ThreadTest, simpleTest)
{
    int n = 0;  
    thread t1(fun1, n + 1);  //按照值传递  
    t1.join();  
    ASSERT_EQ(n,0);
    n = 10;  
    thread t2(fun2, ref(n)); //引用   
    t2.join();  
    ASSERT_EQ(n,30);
}

