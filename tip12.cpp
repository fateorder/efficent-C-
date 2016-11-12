// 复制对象时勿忘其每一个成分
// Copy all parts of an object.


void logCall(const std::string& funcName);
class Customer 
{
public:
    Customer(const Customer& rhs);
    Customer& operator= (const Customer& rhs);
private:
    std::string name;
}

Customer::Customer(const Customer& rhs) : name(rhs.name)
{
    logCall("Customer copy constructor");
}
Customer& Customer::operator= (const Customer& rhs)
{
    logCall("Customer copy assignment operator");
    name = rhs.name;
    return *this;
}

