#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("10")
{
	REQUIRE(decimal_to_hex(10) == "A");
}

TEST_CASE("170")
{
	REQUIRE(decimal_to_hex(170) == "AA");
}

TEST_CASE("255")
{
	REQUIRE(decimal_to_hex(255) == "FF");
}