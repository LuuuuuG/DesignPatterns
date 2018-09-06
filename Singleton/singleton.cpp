#include "singleton.h"


#if 0

//// 单例 - 懒汉式
//优点：第一次调用才初始化，避免内存浪费。
//缺点：必须加锁（在“线程安全”部分分享如何加锁）才能保证单例，但加锁会影响效率。
//采用饿汉实现，可以实现更好的性能。这是以空间换时间。
//Singleton *Singleton::m_pSingleton = NULL;
//
//Singleton *Singleton::GetInstance()
//{
//    if (m_pSingleton == NULL)
//        m_pSingleton = new Singleton();
//
//    return m_pSingleton;
//}

//// 单例 - 饿汉式
//优点：没有加锁，执行效率会提高。 
//缺点：类加载时就初始化，浪费内存。
//Singleton *Singleton::m_pSingleton = new Singleton();

//Singleton *Singleton::GetInstance()
//{
//    return m_pSingleton;
//}


//// 单例 - 懒汉式（双检锁 DCL 机制）
//Singleton *Singleton::m_pSingleton = NULL;
//mutex Singleton::m_mutex;
//
//Singleton *Singleton::GetInstance()
//{
//    if (m_pSingleton == NULL) {
//        std::lock_guard<std::mutex> lock(m_mutex);  // 加锁
//        if (m_pSingleton == NULL) {
//            m_pSingleton = new Singleton();
//        }
//    }
//    return m_pSingleton;
//}


// 单例 - 懒汉式（双检锁 DCL 机制）
Singleton *Singleton::m_pSingleton = NULL;

Singleton *Singleton::GetInstance()
{
    if (m_pSingleton == NULL)
		m_pSingleton = new Singleton();

    return m_pSingleton;
}
#endif
