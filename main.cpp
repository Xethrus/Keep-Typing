#include "raylib.h"
#include <iostream>
#include <vector>
#include <string>


const float SCREEN_W = 600;
const float SCREEN_H = 600;

class Paragraph
{
public:
   std::vector<std::string> allWords;
   
   class Word
   {
      std::vector<char> wordChars;
      Word(std::string word) : Paragraph::allWords{word} {};
   };

};
