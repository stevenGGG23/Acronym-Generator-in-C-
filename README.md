# Acronym-Generator-in-C++
This C++ program reads strings from a data file named acronym.dat and generates acronyms by extracting the first letters of each word. It showcases file handling using C++ file stream operations, including opening and closing files, as well as asserting that the file opens successfully. The generated acronyms are displayed in a specified format, ensuring that all letters in the acronyms are uppercase. 

Features:
Reads input strings from a specified file (acronym.dat).
Utilizes a value-returning function to convert strings into their corresponding acronyms.
Outputs the original string alongside the generated acronym in the format: original string --> ACRONYM.
Handles mixed case letters and ensures correct output formatting.
Usage:
Create a text file named acronym.dat in the same directory as the program.
Compile and run the program to see the generated acronyms based on the content of the data file. 

(base) jovyan@jupyter-sjg4g:~$ g++ acronym.cpp
(base) jovyan@jupyter-sjg4g:~$ ./a.out
Self contained underwater breathing apparatus --> SCUBA
White anglo saxon protestant --> WASP
North Atlantic Treaty Organization --> NATO
Defense Advanced Research Projects Agency --> DARPA
Laugh Out Loud --> LOL
By the way --> BTW
Best Friends Forever --> BFF
I Love You --> ILY
In my humble opinion --> IMHO
Oh my god --> OMG
Wicked Evil Grin --> WEG
Wish you were here --> WYWH
National Science Foundation --> NSF
National Institute Health --> NIH
