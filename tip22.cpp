// 将成员变量申明为private
// Declare data members private
//



// 宁以non-member,non-friend替换member函数
// Prefer non-member non-friend functions to member functions

// 若所有参数皆需类型转换，请为此采用non-member函数
// Declare non-member functions when type conversions should apply to all parameters.
//

// 考虑写出一个不抛出异常的swap函数
// Consider support for a non-throwing swap.

namespace std
{
    template<typename T>
    void swap(T& a, T& b)
    {
        T temp(a);
        a = b;
        b = temp;
    }
}

class Widget
{
public:
    Widget(const Widget& rhs);
    Widget& operator=(const Widget& rhs)
    {
        *pImpl = *(rhs.pImpl);
    }
private:
    WidgetImpl* pImpl;
};

namespace std
{
    template<>
    void swqp<Widget>(Widget& a, Widget& b)
    {
        swap(a.pImpl, b.pImpl);
    }
}


