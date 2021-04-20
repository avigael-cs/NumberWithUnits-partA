
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

namespace ariel {
    class NumberWithUnits {
        private:
            double howmuch;
            string type;
        public:
            NumberWithUnits(double howmuch, string type);
		    static void read_units(ifstream &file_name);
            NumberWithUnits operator- () const;
             NumberWithUnits operator-- (int);
            NumberWithUnits & operator-- ();
            NumberWithUnits operator- (NumberWithUnits &other_num);
            NumberWithUnits operator++ (int);
            NumberWithUnits & operator++ ();
            NumberWithUnits operator+ () const;
            NumberWithUnits operator+ (NumberWithUnits &other_num);
            bool operator> (const NumberWithUnits &other_num) const;
            bool operator>= (const NumberWithUnits &other_num) const;
            bool operator< (const NumberWithUnits &other_num) const;
            bool operator<= (const NumberWithUnits &other_num) const;
            bool operator== (const NumberWithUnits &other_num) const;
            bool operator!= (const  NumberWithUnits &other_num) const;
            NumberWithUnits& operator+= (const NumberWithUnits &num);
            NumberWithUnits& operator-= (const NumberWithUnits &num);
            NumberWithUnits operator* (double num);
            friend NumberWithUnits operator* (double num, const NumberWithUnits);
            friend ostream& operator<< (ostream& stream, const NumberWithUnits& num);
            friend istream& operator>> (istream& stream, const NumberWithUnits& num);
	};
}