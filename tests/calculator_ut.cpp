#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <catch2/catch.hpp>

#include <calculator.h>

#include "generate.h"

#include <iostream>
#include <vector>
#include <random>


TEST_CASE("SimpleOutput"){
    std::cout <<"Test output working" << std::endl;
}



TEST_CASE("CalculatorMainTest"){
    auto calc = Calculator{};
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(-10, 10);

    SECTION("add int"){
        using value_type = int;
        auto count = 10;
        auto numbers = std::vector<value_type>{};
        for(auto i = 0; i < count; ++i){
            numbers.push_back(dis(gen));
        }


    }
}
