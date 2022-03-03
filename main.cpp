#include "raylib.h"
#include <iostream>
#include <vector>
#include <string>


const float SCREEN_W = 600;
const float SCREEN_H = 600;
float HALFS1 = SCREEN_W/2;
float HALFS2 = SCREEN_H/2;
const Vector2 MIDPOINT = (HALFS1,HALFS2); //learing to define VEctor2 important

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

   void iterateWord(Word currentWord, std::vector<Word> paragraph)
   {
      for(int i = 0; i == currentWord.wordChars.length(); i++)
      {
         if( isPressed(GetKeyPressed(), i) == true)
         {
            //make the key pressed green
         } else { std::cout << " Wrong key ";}
      }
   }
   void iterateParagraph(std::vector<Word> paragraph)
   {
      for(const auto& p : paragraph)
      {
         iterateWord(p, paragraph);
      }
   }
   void printWordOnScreen(Word currentWord, std::vector<Word> &paragraph)
   (
      DrawText(currentWord.wordChars, 150, 150, 50, BLACK); 
   )


};

int main(void)
{
   std::vector<Word> paragraph;
   return 0;
}
