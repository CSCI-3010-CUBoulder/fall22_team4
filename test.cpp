#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE ("Remove Twos", "[removeTows]"){
	CHECK(RemoveTwos(0)==0);
	CHECK(RemoveTwos(1)==1);
	CHECK(RemoveTwos(2)==1);
	CHECK(RemoveTwos(7)==7);
}
