#include "counter.h"

int Counter::m_totalCount = 0;

Counter::Counter() : m_count(0)
{
}

void Counter::reset()
{
    m_totalCount -= m_count;
    m_count = 0;
}

void Counter::count()
{
    m_count++;
    m_totalCount++;
}

int Counter::getCount()
{
    return m_count;
}

int Counter::getTotalCount()
{
    return m_totalCount;
}