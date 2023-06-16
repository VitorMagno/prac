program := main
all:    $(program).cpp
	g++ $(program).cpp -o $(program)