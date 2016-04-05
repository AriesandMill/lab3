lab3: lab3.o main.o
		g++ -o lab3 lab3.o main.o

main.o: main.cpp lab3.h
		g++ -c main.cpp

lab3.o: lab3.cpp lab3.h
		g++ -c lab3.cpp

clean:
		rm lab3*.o
		rm main*.o
