#ifndef CODEBUILDER_H
#define CODEBUILDER_H

#include <ccode.h>

class CodeBuilder
{
protected:
    CCode *code;
public:
    CodeBuilder() : code(0) {}

    virtual ~CodeBuilder() {}

    virtual void createCode() {}
    virtual CCode* getCode()
    {
        return code;
    }
};

#endif // CODEBUILDER_H
