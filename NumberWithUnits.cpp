#include "NumberWithUnits.hpp"

namespace ariel {
    NumberWithUnits::NumberWithUnits(double howmuch, string type){}
    void NumberWithUnits::read_units(ifstream &file_name) {}
    NumberWithUnits operator+ (NumberWithUnits &other_num) {
        NumberWithUnits result(10, "km");
        return result;
    }
    NumberWithUnits & NumberWithUnits::operator++ () {
        return *this;
    }
    NumberWithUnits NumberWithUnits::operator++ (int) {
        return *this;
    }
    NumberWithUnits NumberWithUnits::operator+ () const {
        NumberWithUnits result(10, "km");
        return result;
    }
    NumberWithUnits NumberWithUnits::operator+ (NumberWithUnits &other_num) {
        NumberWithUnits result(10, "km");
        return result;
    }
    
    NumberWithUnits operator- (NumberWithUnits &other_num) {
        NumberWithUnits result(10, "km");
        return result;
    }
    NumberWithUnits NumberWithUnits::operator- () const {
        NumberWithUnits result(10, "km");
        return result;
    }
    NumberWithUnits & NumberWithUnits::operator-- () {
        return *this;
    }
    NumberWithUnits NumberWithUnits::operator-- (int) {
        return *this;
    }
    NumberWithUnits NumberWithUnits::operator- (NumberWithUnits &other_num) {
        NumberWithUnits result(10, "km");
        return result;
    }
    
    bool NumberWithUnits::operator> (const NumberWithUnits &other_num) const {
        return false;
    }
    bool NumberWithUnits::operator>= (const NumberWithUnits &other_num) const {
        return false;
    }

    bool NumberWithUnits::operator< (const NumberWithUnits &other_num) const {
        return false;
    }
    bool NumberWithUnits::operator<= (const NumberWithUnits &other_num) const {
        return false;
    }
    
    bool NumberWithUnits::operator== (const NumberWithUnits &other_num) const {
        return false;
    }
    bool NumberWithUnits::operator!= (const NumberWithUnits &other_num) const {
        return false;
    }

    NumberWithUnits& NumberWithUnits::operator+= (const NumberWithUnits &num) {
        return *this;
    }
    NumberWithUnits& NumberWithUnits::operator-= (const NumberWithUnits &num) {
        return *this;
    }

    NumberWithUnits NumberWithUnits::operator* (double num) {
        NumberWithUnits result(10, "km");
        return result;
    }
    NumberWithUnits operator* (double num, const NumberWithUnits) {
        NumberWithUnits result(10, "km");
        return result;
    }

    ostream& operator<< (ostream& stream, const NumberWithUnits& num) {
        return stream;
    }
    istream& operator>> (istream& stream, const NumberWithUnits& num) {
        return stream;
    }
}