#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE( "The product of all elements in a vector is returned", "[prod_vec]" ) {
    std::vector<double> v1{0.0,1.0,2.0};
    std::vector<double> v2{1.0,1.0,2.0};
    std::vector<double> v3{1.0,1.5,2.0};
    REQUIRE( Product(v1) == 0.0 );
    REQUIRE( Product(v2) == 2.0 );
    REQUIRE( Product(v3) == 3.0 );
}
