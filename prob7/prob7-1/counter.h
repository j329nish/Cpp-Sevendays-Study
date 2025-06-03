#ifndef _COUNTER_H_
#define _COUNTER_H_

class Counter{
private:
    int m_count;
public:
    Counter();
    void reset();
    int getCount();
    void count();
    void count(int m);
};

#endif // _COUNTER_H_