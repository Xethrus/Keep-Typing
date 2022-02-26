#include "raylib.h"
#include <iostream>
#include <vector>
#include <string>


const float SCREEN_W = 600;
const float SCREEN_H = 600;

class Word
{
public:
   std::vector<std::string> allWords;
   std::vector<char> wordChars;
   Word(std::string word) : allWords{word} {};
};
