/**************************************************************************
 File Name:     stonewt.h
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Tue Dec  3 23:10:36 2019
 Release Notes: definition for the Stonewt class
 **************************************************************************/
#ifndef STONEWT_H_
#define STONEWT_H_
class Stonewt
{
    private:
        enum {Lbs_per_stn = 14};                        // pounds per stone
        int stone;                                      // whole stones
        double pds_left;                                // fractional pounds
        double pounds;                                  // entire weight in pounds
    public:
        Stonewt(double lbs);                            // constructor for double pounds
        Stonewt(int stn, double lbs);                   // constructor for stone, Lbs_per_stn
        Stonewt();                                      // default constructor
        ~Stonewt();
        void show_lbs() const;                          // show weight in pounds format
        void show_stn() const;                          // show weight in stone format
};
#endif
