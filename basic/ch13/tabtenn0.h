/**************************************************************************
 File Name:     tabtenn0.h
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sat Dec  7 19:53:01 2019
 Release Notes: a table-tennis base class 
 **************************************************************************/
#ifndef TABTENN0_H_
#define TABTENN0_H_
#include <string>
using std::string;
// simple base class
class TableTennisPlayer
{
    private:
        string firstname;
        string lastname;
        bool hasTable;
    public:
        TableTennisPlayer(const string & fn = "none", const string & ln = "none", bool ht = false);
        void Name() const;
        bool HasTable() const {return hasTable;}
        void ResetTable(bool v) {hasTable = v;}
};
#endif
