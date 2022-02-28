#include "raylib.h"
#include <iostream>
#include <vector>
#include <string>


const float SCREEN_W = 600;
const float SCREEN_H = 600;

class Word
{
   std::string wordChars;
   bool isPressed(char pressedKey, char currentIndex)
   {
      if(IsKeyPressed(pressedKey) == currentIndex)
      {
         return true;
      } else { return false; }
   }
   void iterateWord(Word currentWord)
   {
      for(int i = 0; i == currentWord.wordChars.length(); i++)
      {
         isPressed(GetKeyPressed(), i);
      }
   }
};

int main(void)
{
   std::vector<Word> paragraph;
   return 0;
}
