#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include <string>
#include "Package.h"

class TwoDayPackage : public Package {

    public:
        TwoDayPackage( string, string, string, string, string,
                     string, string, string, string, string,
                     double, double, double );

        void setFlatFee( double );
        double getFlatFee( );

        double calculateCost( );

    private:

        double flatFee;

};
#endif
 