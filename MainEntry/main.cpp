#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch2/catch.hpp"
#include "ECS.hpp"

TEST_CASE( "Name of the case", "[tag]" ) 
{
    ECS::Register reg;

    REQUIRE( true );
}