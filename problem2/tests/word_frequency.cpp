#include "doctest.h"
#include "word_frequency.h"
#include "stdio.h"

using namespace problem2;

TEST_CASE("Word Frequency") {
  auto book = "This is a long long book, with a lot of different words and some "
              "words are even mentioned multiple times.";
  SUBCASE("Single Occurrence"){
    CHECK(word_frequency(book, "This") == 1);
  }
  SUBCASE("No Occurrence"){
    CHECK(word_frequency(book, "any_word") == 0);
  }
  SUBCASE("Multiple Occurrence"){
    CHECK(word_frequency(book, "long") == 2);
    CHECK(word_frequency(book, "words") == 2);
  }
  SUBCASE("Multiple Occurrence"){
    CHECK(word_frequency(book, "long") == 2);
  }
  SUBCASE("Only recognize word not substrings"){
    CHECK(word_frequency(book, "time") == 0);
    CHECK(word_frequency(book, "ook") == 0);
  }
  SUBCASE("Find words with terminating ."){
    CHECK(word_frequency(book, "times") == 1);
  }
}