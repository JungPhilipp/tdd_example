#include <calculator.h>


int Calculator::add(const std::string& numbers){
  auto result = 0;
  auto number = std::string{};
  for(const auto& letter : numbers){
      if(letter ==',' && number.size()>0){
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
