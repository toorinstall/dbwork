#ifndef CCODE_H
#define CCODE_H

#include <string>
#include <fstream>
#include <vector>
#include <QString>

using namespace std;

class CCode
{

private:
    std::string pathToFile;

    vector<string>textVector;

    bool ReadCode();
    bool res;

public:
    bool InitCode(QString);
    int SendToDB();

    CCode() {}
};

#endif // CCODE_H
