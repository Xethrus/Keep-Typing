Ideas


1: Layered vectors
      
      My concept here is that I utilize a the top vector to store all the words that need to be type as
      a vector of strings. The bottom vector is the top vector but converted into chars, the idea here
      is that I can take a paragraph and input it to the large vector and have it mutated/broken down
      into chars. This way I can check individual current characters as I am typing. 
            //Not sure about this one- I could use a vector of vectors to keep the values in sync.
2: Vector of Words
      I use class Word to store chars of the "Word" then I just have a vector of words. Similar to
      the idea above but less complicated. 
      
            2.1: This is still the most promising idea; I am worried about the functionality of the visual
            system. I think the point is that I will be drawing each word and then editing the drawings of
            those words to show correct or incorrect typing. It is important that I make the user type the
            letter correct before continuing. This means making them have to delete what is typed and retype
            the failed char.
3: Step by Step
      Trying to figure out my plan of attack here step by step. 
      
           1. Assign a bunch of words to my vector of class Word
           
           2. Make some sort of cursor/position that moves through
           the characters(indexing) of the class Word member string
           "wordChars" 
                  2.1: I have to make it display the movement through
                  words that are printed onto a graphic screen. To start
                  I need to make it so that every time a key is pressed
                  a character is colored green. Demarcating that it has been
                  typed. 
           
           3. Restrain the movement by making conditionals that check
           if you have pressed the current index. Making it so you have
           to "delete" the key you mispressed. Other bug waryness will be
           required of course. 
