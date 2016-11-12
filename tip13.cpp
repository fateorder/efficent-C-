
// 以对象管理资源
// Use objects to manage resources.
//

// 获得资源后立刻放进管理对象(managing object)内
// 管理对象(managing object)运用析构函数确保资源被释放

// auto_ptr shared_ptr

std::auto_ptr<std::string> aps(new std::string[10]);
std::tr1::shared_ptr<int> spi(new int[1024]);

// 为防止资源泄露，请使用RAII对象，它们在构造函数中获得资源并在析构函数中释放资源
// 两个常被使用的RAII classes分别是tr1::shared_ptr和auto_ptr.前者较佳


