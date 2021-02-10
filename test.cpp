#define CATCH_CONFIG_MAIN 
#include "catch.hpp"

double Sign(double num){
	if (num <0){
		return -1;
	}
	else{
		return 1;
	}
};


TEST_CASE( "Signs are tested","[sign]" ) {
    double pos = 3;
    double neg = -2;

    SECTION("Positive input") {
        REQUIRE( Sign(pos) == 1 );

    }
    SECTION("Negative input") {
        REQUIRE( Sign(neg) == -1);

    }
};
