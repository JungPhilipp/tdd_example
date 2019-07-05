#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <catch2/catch.hpp>

#include <calculator.h>

#include "generate.h"

#include <iostream>
#include <vector>
#include <random>
#include <functional>


TEST_CASE("CalculatorMainTest"){
    auto calc = Calculator{};
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(-10, 10);

    SECTION("add int"){
        using value_type = int;
        auto count = 10;
        auto ns = std::vector<value_type>{};
        for(auto i = 0; i < count; ++i){
            ns.push_back(dis(gen));
        }
        auto expected = 0;
        REQUIRE(calc.add("")==expected);
        expected = ns[0];
        REQUIRE(calc.add(generate_string(ns[0]))==expected);
        expected = std::accumulate(begin(ns), begin(ns)+2,0);
        REQUIRE(calc.add(generate_string(ns[0],ns[1]))==expected );

    }
}
