all:
	@g++ -g -Wall main.cpp -std=c++11 -o main
	@./main

build:
	@g++ -g -Wall -std=c++11 main.cpp -o main

run:
	@./main

test:
#uncomment as many lines as you want to run below
#make sure to indent with tabs
	./main 100
	./main 1000
	./main 10000
#./main 20000
#./main 40000
#./main 80000
#./main 100000
#./main 1000000
#./main 10000000
#./main 100000000

clean:
	rm main
