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
   void renderWord(Word wordToDraw)
   {
      DrawText(wordToDraw.wordChars.c_str(),200,200,30,BLACK);
   }
};
class Paragraph{
public:
   std::vector<Word> words;
   Paragraph(const std::vector<Word> &listOfWords) : words{listOfWords} {};
   void printParagraph(std::vector<Word> words){
      for(auto item: words){
         renderWord(item);
      }  
   }
};
 
int main(void){
   
   //Initialization
   //--------------------------------------------------------------------------
   std::vector<Word> listOfWords;
   listOfWords.push_back(Word("word1"));
   listOfWords.push_back(Word("word2"));
   listOfWords.push_back(Word("word3"));
   listOfWords.push_back(Word("word4"));
   listOfWords.push_back(Word("word5"));
   Paragraph p(listOfWords);
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
