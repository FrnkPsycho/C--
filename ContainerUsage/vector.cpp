#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 1. 创建空vector; 常数复杂度
    vector<int> v0;
    // 1+. 这句代码可以使得向vector中插入前3个元素时，保证常数时间复杂度
    v0.reserve(3);
    // 2. 创建一个初始空间为3的vector，其元素的默认值是0; 线性复杂度
    vector<int> v1(3);
    // 3. 创建一个初始空间为3的vector，其元素的默认值是2; 线性复杂度
    vector<int> v2(3, 2);
    // 4. 创建一个初始空间为3的vector，其元素的默认值是1，
    // 并且使用v2的空间配置器; 线性复杂度
    vector<int> v3(3, 1, v2.get_allocator());
    // 5. 创建一个v2的拷贝vector v4， 其内容元素和v2一样; 线性复杂度
    vector<int> v4(v2);
    // 6. 创建一个v4的拷贝vector v5，其内容是{v4[1], v4[2]}; 线性复杂度
    vector<int> v5(v4.begin() + 1, v4.begin() + 3);
    // 7. 移动v2到新创建的vector v6，不发生拷贝; 常数复杂度; 需要 C++11
    vector<int> v6(std::move(v2));  // 或者 v6 = std::move(v2); 


    //test
    cout << "v1 = ";
    copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << "v2 = ";
    copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << "v3 = ";
    copy(v3.begin(), v3.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << "v4 = ";
    copy(v4.begin(), v4.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << "v5 = ";
    copy(v5.begin(), v5.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << "v6 = ";
    copy(v6.begin(), v6.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}