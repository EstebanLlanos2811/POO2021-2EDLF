all: compilar
compilar: juego mayor13 dosColores veintiuno jugador casino view main
		g++ -o Salida Jugador.o Juego.o Mayor13.o DosColores.o Veintiuno.o Casino.o View.o Main.o
jugador: Jugador.cpp Jugador.h
	g++ -c Jugador.cpp
juego: Juego.cpp Juego.h Jugador.h
	g++ -c Juego.cpp
mayor13: Mayor13.cpp Mayor13.h Juego.h
		g++ -c Mayor13.cpp
dosColores: DosColores.cpp DosColores.h Juego.h
		g++ -c DosColores.cpp
veintiuno: Veintiuno.cpp Veintiuno.h Juego.h
		g++ -c Veintiuno.cpp
casino: Casino.cpp Casino.h Mayor13.h DosColores.h Veintiuno.h Juego.h
	g++ -c Casino.cpp
view: View.cpp View.h Casino.h
		g++ -c View.cpp
main: Main.cpp View.h Casino.h
	  g++ -c Main.cpp