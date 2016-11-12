// 以独立语句将newed对象置入智能指针
// Store newed objects in smart pointers in standalone statements.
//

std::tr1::shared_ptr<Widget>(new Widget);
// 1.priority
// 2.执行"new Widget"
// 3.调用tr1::shared_ptr构造函数
//
