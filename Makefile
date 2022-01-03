run:
	g++ -o bin/Debug/main src/main.cpp
	./bin/Debug/main
build:
	g++ -O3 -o bin/Release/cgeekl src/main.cpp
	g++ -O3 -o bin/Release/cgeekl.sh src/main.cpp
	g++ -O3 -o bin/Release/cgeekl.exe src/main.cpp
