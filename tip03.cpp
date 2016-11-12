// 尽可能使用const
// Use const whenever possible

char greeting[] = "Hello";          //
char *p = greeting;                 // non-const pointer, non-const data
const char* p = greeting;           // non-const pointer, const data
char* const p = greeting;           // const pointer, non-const data
const char* const p = greeting;     // const pointer, const data

void f1(const Widget* pw);
void f2(Widget const * pw);        // f1,f2都是一个指针，只想一个常量对象


std::vector<int> vec;

const std::vector<int>::iterator iter = vec.begin();
*iter = 10;     // pass
++iter;         // error

std::vector<int>::const_iterator cIter = vec.begin();
*cIter = 10;    // error
++cIter;        // pass

