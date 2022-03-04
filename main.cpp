#include "raylib.h"
#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <thread>

const float SCREEN_W = 600;
const float SCREEN_H = 600;

class Word{
public:
   std::string wordChars; //the literal word in class "Word"
   char currentChar;
   int currentWordIndex = 0;
   int paragraphIndex = 0;

   Word(std::string word) : wordChars{word} {};


   void checkIfOverLimit(Word iterateWord)
   {
      if(iterateWord.wordChars[currentWordIndex] ++ > iterateWord.wordChars.length())
      {
         paragraphIndex++;
      }
   }
   bool typedChar(Word iterateWord)//checks if current index char was typed
   {  
      checkIfOverLimit(iterateWord);
      if(GetKeyPressed() == iterateWord.wordChars[currentWordIndex])
      {
         return true;
         currentWordIndex ++;
      }
      return false;
   }
   // void iterateParagraph(std::vector<Word> paragraph)
   // {
   //    for(auto item: paragraph){
      
   //    }
   // }
};

int main(void){
   
   //Initialization
   //--------------------------------------------------------------------------
   std::vector<Word> paragraph;
   Word word ("string");
   InitWindow((int)SCREEN_W, (int)SCREEN_H, "testing window");
   int test = 0;


   //Main loop
   while (!WindowShouldClose())
   {
      std::this_thread::sleep_for(std::chrono::milliseconds(1000));
      test ++;
      std::cout << test << std::endl;

   }
};
