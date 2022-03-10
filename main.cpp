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

   int getPIndex()
   {
      return paragraphIndex;
   }
   
   void checkIfOverLimit(Word iterateWord)
   {
      if(iterateWord.wordChars[currentWordIndex] ++ > iterateWord.wordChars.length())
      {
         paragraphIndex++;
      }
   }
   bool typedChar(std::vector <Word> paragraph)//checks if current index char was typed
   {  
      checkIfOverLimit(paragraph[paragraphIndex]);
      if(GetKeyPressed() == paragraph[paragraphIndex].wordChars[currentWordIndex])
      {
         return true;
         currentWordIndex ++;
      }
      return false;
   }
   void iterateParagraph(std::vector<Word> paragraph)
   {
      for(auto item: paragraph){
      
      }
   }
};
class Paragraph{
   std::vector<Word> paragraph;
   paragraph.push_back(Word("word1"));
   Paragraph p(Paragraph);
};

int main(void){
   
   //Initialization
   //--------------------------------------------------------------------------
   Word word1 = "wordOne";
   Word word2 = "wordTwo";
   Word word3 = "wordThree";
   paragraph.push_back(word1);
   paragraph.push_back(word2);
   paragraph.push_back(word3);
   InitWindow((int)SCREEN_W, (int)SCREEN_H, "testing window");
   int test = 0;


   //Main loop
   while (!WindowShouldClose())
   {
      std::this_thread::sleep_for(std::chrono::milliseconds(1000));
      test ++;
      std::cout << test << std::endl;
      //update
      

   }
};
