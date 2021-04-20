
#include "doctest.h"
#include "NumberWithUnits.hpp"

using namespace ariel;
using namespace std;

TEST_CASE("Input") {
    ifstream units_file{"units.txt"};

}

TEST_CASE("operator"){
    ifstream units_file{"units.txt"};
    ariel::NumberWithUnits::read_units(units_file);
    NumberWithUnits km1 {10, "km"};
    NumberWithUnits km2 {5, "cm"};
    CHECK(km1.operator<(km2) == true); 
    CHECK(km2.operator<=(km2) == true);
    CHECK(km1.operator<(km2) == false); 
    NumberWithUnits temp{8,"min"};
    CHECK_THROWS(km1.operator<(temp));
    CHECK(km1.operator>(km2) == true); 
    CHECK(km2.operator>=(km2) == true);
    //False check
    CHECK(km1.operator>(km2) == false);
}

TEST_CASE("Calculate") {
    ifstream units_file{"units.txt"};
    NumberWithUnits::read_units(units_file);
    NumberWithUnits km1(6,"km");
    NumberWithUnits km2(7,"km");
   
    NumberWithUnits km3(5,"km");
    NumberWithUnits km4(0,"km"); 
    NumberWithUnits negative_distance(-6,"km");
    NumberWithUnits kg1(6,"kg");
    NumberWithUnits kg2(6,"kg");
    NumberWithUnits kg3(10,"kg");
    NumberWithUnits kg4(7,"kg");
    NumberWithUnits kg5(0,"kg");
    CHECK(km1 < km2);
    CHECK(km1 <= km2);
    CHECK(km2 > km1);
    CHECK(km2 > km4);
    CHECK(km2 >= km1);
    CHECK(km2 != km1);
    CHECK(km1 == km1);
    CHECK_FALSE(km4 == km3);
    CHECK_FALSE(km4 >= km3);
    CHECK_FALSE(km1 == km3);
    CHECK(+km1 == km1);
    CHECK(-km1 == negative_distance);
    CHECK(-km1 != km1);
    km1++;
    CHECK(km1 != km1);
    CHECK(km1 != kg1);
    CHECK_FALSE(km1 != kg1);
    CHECK(km1 == km2);
    km1--;
    km1--;
    CHECK(km1 == km3);
    CHECK(km1 != km2);
    CHECK((kg1+kg2) == kg3);
    kg1++;
    kg3++;
    CHECK((kg1+kg2) == kg3);
    kg2+=kg1;
    CHECK(kg2 == kg3);
    CHECK_FALSE(kg4 == km3);
    CHECK_FALSE(km4 == kg4);
}
 

TEST_CASE("wrong units")
{
    ifstream units_file{"units.txt"};
    ariel::NumberWithUnits::read_units(units_file);
    NumberWithUnits no_type {10, ""};
    CHECK_THROWS(no_type.operator+(no_type));
    NumberWithUnits bad_type {10, "t"};
    CHECK_THROWS(bad_type.operator+(bad_type));
    NumberWithUnits cm_type {10, "cm"};
    NumberWithUnits hour_type {10, "min"};
    CHECK_THROWS(cm_type.operator+(hour_type));

}

TEST_CASE("Wrong Input") {
    ifstream units_file{"units.txt"};
    NumberWithUnits::read_units(units_file);
    NumberWithUnits km1(7,"km");
    NumberWithUnits kg1(9,"kg");
    NumberWithUnits kg2(32,"kg");
    CHECK_THROWS(km1+kg1);
    CHECK_THROWS(kg2+kg2);
    CHECK_THROWS(km1-kg1);
    CHECK_THROWS(kg1+km1);
    CHECK_THROWS(kg1-km1);
}