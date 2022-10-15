#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("A")
{
	REQUIRE(gpa_to_letter_grade(3.5) == "A");
}
TEST_CASE("B")
{
	REQUIRE(gpa_to_letter_grade(3.49) == "B");
}
TEST_CASE("C")
{
	REQUIRE(gpa_to_letter_grade(2) == "C");
}
TEST_CASE("D")
{
	REQUIRE(gpa_to_letter_grade(1.99) == "D");
}
TEST_CASE("F")
{
	REQUIRE(gpa_to_letter_grade(.99) == "F");
}