all:
	echo "build, run, clean"
build: 
    g++ -o pong pong.cpp `sdl2-config --cflags --libs`
run:
	./pong
clean: 
	rm pong