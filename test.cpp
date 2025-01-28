#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ("Sums are computed", "[sum][ex]")
{
    CHECK( Sum({3, 5, 2}) == 10 );
    REQUIRE (Sum({10, 3, 6, 22, 9}) == 50);
    REQUIRE ( Sum({0, -1, -6, 5}) == -2);
}

TEST_CASE ("Vector addition computed", "[vectorplusn][ex]")
{
    std::vector<int> v1 = {7, 9, 6};
    std::vector<int> v2 = {27, 20, 23, 39, 26};
    std::vector<int> v3 = {-3, -4, -9, 2};
    CHECK( VectorPlusN({3, 5, 2}, 4) == v1 );
    REQUIRE ( VectorPlusN({10, 3, 6, 22, 9}, 17) == v2 );
    REQUIRE ( VectorPlusN({0, -1, -6, 5}, -3) == v3 );
}

TEST_CASE ("Fibonacci values computed", "[nthfibonacci][ex]")
{
    CHECK( NthFibonacci(1) == 1 );
    REQUIRE ( NthFibonacci(2) == 1 );
    REQUIRE ( NthFibonacci(3) == 2 );
    REQUIRE ( NthFibonacci(7) == 13 );
    REQUIRE ( NthFibonacci(12) == 144 );
}