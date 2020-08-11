#include "ccode.h"

#include <iostream>
#include <singleton.h>
#include <cdbmanager.h>

bool CCode::ReadCode()
{
    ifstream file;
    file.open(pathToFile);
    if(!file)
        return false;

    char str[100];
    while(!file.getline(str, sizeof (string)).eof())
    {
        textVector.push_back(string().append(str));
    }
    return true;
}

bool CCode::InitCode(QString pathToFile)
{
    res = false;

    pathToFile = QString(pathToFile);

    res = this->ReadCode();

    return res;
}

int CCode::SendToDB()
{
  //  res = false;

    //res = CDBManager::instance()->LoadCode(*this);

    CDBManager::instance()->StartThread();

    return res;
}
