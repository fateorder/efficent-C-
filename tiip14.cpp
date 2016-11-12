// 在资源管理类中小心coping行为
// Think carefully about copying behavior in resource-managing classes.
//

class Lock
{
public:
    explicit Lock(Mutex* pm) : mutexPtr(pm)
    {
        lock(mutexPtr); }
    }
    ~Lock()
    {
        unlock(mutexPtr);
    }
private:
    Mutex *mutexPtr;
};



Mutex m;
{
    Lock ml(&m);
}

// 禁止复制
// 对底层资源祭出“引用计数法”(reference-count)
// 复制底部资源
// 转移底部资源的拥有权


