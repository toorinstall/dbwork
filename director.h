#ifndef DIRECTOR_H
#define DIRECTOR_H
#include <ccode.h>
#include <codebuilder.h>
#include <singleton.h>


class Director : public Singletone<Director>
{
public:
    Director() {}
public:
    CCode* create(CodeBuilder &builder)
    {
        builder.createCode();
        return builder.getCode();
    }
};

#endif // DIRECTOR_H
