#include <string>

#include "oops.hpp"
#include <limits>

#include <iostream>

using namespace std;




int allowinteger(int lowbounds, int highbounds, const std::string& userpopup, const std::string&error) {
    int worth;

    while (true) {
        cout<<userpopup;
        cin>>worth;

        if (worth >= lowbounds && worth <= highbounds) {
            return worth;
        }
        cout<<error<<endl;
    }

}