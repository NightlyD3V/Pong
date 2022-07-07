all:
	echo "build, run, clean"
build: 
	g++ pong.cpp ../entities/paddle.cpp `sdl2-config --cflags --libs` -I ../libs/SDL_ttf-release-2.0.18 -Wall -o pong
run:
	./pong
clean: 
	rm pong