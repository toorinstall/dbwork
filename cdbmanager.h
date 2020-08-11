#ifndef CDBMANAGER_H
#define CDBMANAGER_H

#include <singleton.h>
#include <ccode.h>
#include <vector>
#include <string>
#include <QMessageBox>
#include <iostream>
#include <QtSql>
#include <queue>
#include <thread>

class CDBManager : public Singletone<CDBManager>
{
public:
    bool LoadCode(CCode const& code);
    void StartThread();

private:
    friend class Singletone<CDBManager>;

    std::queue<CCode>queueCode;

    bool InitDB();
    bool OpenDB();
    bool CloseDB();
    bool SendQuery();

    void ThrMethod();
    CDBManager() {}
    virtual ~CDBManager() {}
};

#endif // CDBMANAGER_H
