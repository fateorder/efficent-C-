// 在资源管理类中提供对原始资源的访问
// Provide access to raw resources in resource-managing classes.
//

// APIs往往要求访问原始资源(raw resources),所以每一个RAII class应该提供一个“取得其所管理之资源”的办法
// 对原始资源的访问可能经由显示转换或隐式转换。显示安全，隐式方便


