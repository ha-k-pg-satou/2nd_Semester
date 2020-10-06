#ifndef Unit_H_
#define Unit_H_
#include "Definition.h"

class Unit
{
public:
    Unit();

    ~Unit();

    void PrintStatus();

private:
    Status m_status;
};

#endif

