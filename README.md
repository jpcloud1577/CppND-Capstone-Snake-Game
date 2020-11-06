# CPPND: Capstone Snake Game Example

This is a starter repo for the Capstone project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). The code for this repo was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) excellent StackOverflow post and set of responses.

<img src="snake_game.gif"/>

## User Interaction
- The game would ask for name of the player and is stored in playerinfo.txt along with score and date and time the game was played.
- Player is presented with a Y or N option to decide to play the game or not. 
- Y would let the game run as usual and N or any other input would abort the game
- All the details of a specific game is stored in playerinfo.txt file. 


## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.

## Project Criteria

### Loops, Functions, I/O

| _Criteria_                                                                                     	| _Comments_                                                                                                   	| 
|:-----------------------------------------------------------------------------------------------	|:-------------------------------------------------------------------------------------------------------------------------	|
| The project demonstrates an understanding of C++ functions and control structures.             	| A variety of control structures are used in the project.<br><br>The project code is clearly organized into functions. Please check all files under `src` directory.    | 
| The project reads data from a file and process the data, or the program writes data to a file. 	| The project writes `playerinfo.txt` file directly in the workspace with details of the game played.  	|
| The project accepts user input and processes the input.                                        	| File `main.cpp` accepts playerName as user input and uses that through the code structure.

### Object Oriented Programming

| _Criteria_                                                                                     	| _Comments_                                                                                                   	| 
|:-----------------------------------------------------------------------------------------------	|:-------------------------------------------------------------------------------------------------------------------------	|
| The project uses Object Oriented Programming techniques.                            | The project code is organized into classes with class attributes to hold the data, and class methods to perform tasks.
| Classes use appropriate access specifiers for class members.                     	| All class data members are explicitly specified as public, protected, or private.
| Class constructors utilize member initialization lists.                          	| All class members that are set to argument values are initialized through member initialization lists.   Examples such as `player.cpp`, `game.cpp`, `snake.h`.


### Memory Management

| _Criteria_                                                                       	| _Comments_
|:-----------------------------------------------------------------------------------------------	|:-------------------------------------------------------------------------------------------------------------------------	|
| The project makes use of references in function declarations.                             	| At least two variables are defined as references, or two functions use pass-by-reference in the project code. One of the many examples is in `controller.h` file  |
| The project uses destructors appropriately.                                               	| `Renderer` class in `renderer.h` has destructor.| 
