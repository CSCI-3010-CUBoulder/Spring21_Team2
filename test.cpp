#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE( "The sign of a number is returned", "[Sign]" ) {
    REQUIRE( Sign(0) == 0 );
    REQUIRE( Sign(5) == 1 );
    REQUIRE( Sign(-5) == -1 );
}
