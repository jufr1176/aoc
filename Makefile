CXX = g++
CXXFLAGS = -g -O2 -march=native

test: character.cpp game.cpp main.cpp player.cpp
	$(CXX) $(CXXFLAGS) $?
