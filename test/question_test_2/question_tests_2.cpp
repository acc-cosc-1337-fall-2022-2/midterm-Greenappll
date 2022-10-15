#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("hours test1")
{
	REQUIRE(get_hours(1570846218) == 2);
}

TEST_CASE("minutes test1")
{
	REQUIRE(get_minutes(1570846218) == 10);
}

TEST_CASE("seconds test1")
{
	REQUIRE(get_seconds(1570846218) == 18);
}

TEST_CASE("hours test2")
{
	REQUIRE(get_hours(1570875018) == 10);
}

TEST_CASE("minutes test2")
{
	REQUIRE(get_minutes(1570875018) == 10);
}

TEST_CASE("seconds test2")
{
	REQUIRE(get_seconds(1570875018) == 18);
}
