#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton
{
public:
    Singleton &GetInstance() {
        static Singleton res;
        return res;
    }
private:
    Singleton() = default;
    Singleton(const Singleton &) = delete;
    Singleton &operator=(const Singleton &) = delete;
};
#endif