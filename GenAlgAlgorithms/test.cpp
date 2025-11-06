#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <iostream>

TEST_CASE("Generic test") {

	CHECK(10 + 15 != 35);
	CHECK(10 + 25 == 35);

}