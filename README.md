# WGet-UI
Graphical user interface for the "wget" command  

INSTRUCTIONS:

First --> Check you have installed gtkmm-3.0
Second --> Extract the downloaded archive and "cd" into the new directory
Third --> Execute this command via a terminal : 
g++ main.cpp windowui.cpp -o main `pkg-config gtkmm-3.0 --cflags --libs`
Fourth --> Run the program by this command : 
./main

