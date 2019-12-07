/**************************************************************************
 File Name:     tabtenn1.h
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sat Dec  7 20:25:21 2019
 Release Notes: a table-tennis base class 
 **************************************************************************/
#ifndef TABTENN1_H_
#define TABTENN1_H_
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
// simple derived class
class RatedPlayer : public TableTennisPlayer
{
    private:
        unsigned int rating;
    public:
        RatedPlayer(unsigned int r = 0, const string & fn = "none", const string & ln = "none", bool ht = false);
        RatedPlayer(unsigned int r, const TableTennisPlayer & tp);
        // RatedPlayer(unsigned int r = 0, const TableTennisPlayer & tp); // we can't use default value as left side align.
        unsigned int Rating() const {return rating;}
        void ResetRating(unsigned int r) {rating = r;}
}; // must add ; at the declaration about a class
#endif
