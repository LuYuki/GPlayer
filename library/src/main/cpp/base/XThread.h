#ifndef __GPLAYER_THREAD_H__
#define __GPLAYER_THREAD_H__

#include <thread>
#include <functional>

class XThread {
public:
    XThread();

    virtual ~XThread();

    virtual bool start();

    virtual bool stop();

    inline bool isAlive() { return mRunning; }

    void setFunction(std::function<void(void)> func) { mFunc = func; }

protected:
    volatile bool mRunning = false;

    std::thread *mThread = nullptr;

    std::function<void(void)> mFunc;
};

#endif //__GPLAYER_THREAD_H__
