run:
	g++ -o bin/Debug/main src/main.cpp
	./bin/Debug/main
build:
	g++ -O3 -o bin/Release/main src/main.cpp
	g++ -O3 -o bin/Release/main.sh src/main.cpp
	g++ -O3 -o bin/Release/main.exe src/main.cpp
