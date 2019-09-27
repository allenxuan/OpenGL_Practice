#include <iostream>
using namespace std;

class A {
private:
    int i;
public:
    A(){i=0;}
    int & get(){
        return i;
    }
};

int main() {
    A a;
    cout << a.get() << endl; //数据成员值为0
    a.get() = 1; //尝试修改a对象的数据成员为1，而且是用函数调用表达式作为左值。
    cout << a.get() << endl; //数据成员真的被改为1了，返回指针的情况也可以修改成员i的值，所以为了安全起见最好在返回值加上const，使得函数调用表达式不能作为左值
    return 0;
}