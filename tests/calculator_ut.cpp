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

    auto count = 20;
    std::uniform_int_distribution<> dis(-count, count);

    using value_type = int;
    auto ns = std::vector<value_type>{};
    for(auto i = 0; i < count; ++i){
        ns.push_back(dis(gen));
    }

    SECTION("add two or less numbers"){
        auto expected = 0;
        REQUIRE(calc.add("")==expected);
        expected = ns[0];
        REQUIRE(calc.add(generate_string(ns[0]))==expected);
        expected = std::accumulate(begin(ns), begin(ns)+2,0);
        auto expected_string = generate_string(ns[0],ns[1]);
        auto result = string_from_container(begin(ns),begin(ns)+2);
        REQUIRE(result == expected_string);
        REQUIRE(calc.add(expected_string)==expected );
        CHECK_THROWS(calc.add(generate_string(ns[0],"x")));
    }

    SECTION("add arbitrary number of number"){
      auto num_tests = 10;
      for(auto delimiter : {",","\n"}){
        for(auto i = 0; i < num_tests; ++i){
            auto length = std::max(std::abs(dis(gen)),3);
            auto expected = std::accumulate(begin(ns), begin(ns)+length,0);
            auto input_string = string_from_container(begin(ns),begin(ns)+length,delimiter);
            REQUIRE(calc.add(input_string,delimiter)==expected);
          }
      }
    }

}
