all: compilar
compilar: criterios detalleActa acta posgradoJaveriana view main
		g++ -o Salida Criterios.o DetalleActa.o Acta.o PosgradoJaveriana.o View.o Main.o
criterios: Criterios.cpp Criterios.h
	g++ -c Criterios.cpp
detalleActa: DetalleActa.cpp DetalleActa.h Criterios.h
		g++ -c DetalleActa.cpp
acta: Acta.cpp Acta.h DetalleActa.h
	g++ -c Acta.cpp
posgradoJaveriana: PosgradoJaveriana.cpp PosgradoJaveriana.h Acta.h Criterios.h
	g++ -c PosgradoJaveriana.cpp
view: View.cpp View.h PosgradoJaveriana.h 
		g++ -c View.cpp
main: Main.cpp View.h PosgradoJaveriana.h
	  g++ -c Main.cpp