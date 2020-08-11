#include "cdbmanager.h"
#include <QDebug>

bool CDBManager::InitDB()
{
    return true;
}

bool CDBManager::OpenDB()
{
    return true;
}

bool CDBManager::CloseDB()
{
    return true;
}

bool CDBManager::SendQuery()
{
    return true;
}

bool CDBManager::LoadCode(CCode const& code)
{
    return true;
}

void CDBManager::ThrMethod()
{
    int i = 0;
    while(true)
    {
        i++;
        qDebug() << "ThrMethod: " << QString::number(i);
    }
}

void CDBManager::StartThread()
{
    std::thread thr(&CDBManager::ThrMethod, this);

    int i = 0;
    while(true)
    {
        i++;
        qDebug() << "Main thread: " << QString::number(i);
    }
    thr.join();
}
