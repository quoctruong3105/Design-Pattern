run: exe
	./exe
exe: main.o libdrawcircle.a
	g++ main.o -o exe -L . libdrawcircle.a -lm
libdrawcircle.a: Circle.o GreenCircle.o RedCircle.o Shape.o
	ar rs libdrawcircle.a Circle.o GreenCircle.o RedCircle.o Shape.o
Circle.o: Circle.cpp
	g++ -c Circle.cpp -o Circle.o
GreenCircle.o: GreenCircle.cpp
	g++ -c GreenCircle.cpp -o GreenCircle.o
RedCircle.o: RedCircle.cpp
	g++ -c RedCircle.cpp -o RedCircle.o
Shape.o: Shape.cpp
	g++ -c Shape.cpp -o Shape.o
main.o: main.cpp
	g++ -c main.cpp -o main.o