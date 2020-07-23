#include <problem0.h>


int Calculator::add(const std::string& numbers, const std::string& delimiters){
  auto result = 0;
  auto number = std::string{};
  for(const auto& letter : numbers){
      if(delimiters.find(letter)!= std::string::npos && number.size()>0){
          result+= std::stoi(number);
          number.clear();
        }
      else{
          number+=letter;
        }
    }
  if(number.size()>0){
      result+= std::stoi(number);
    }
  return result;
}
