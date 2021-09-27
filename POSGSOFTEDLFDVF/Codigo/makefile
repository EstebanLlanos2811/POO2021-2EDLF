all: compilar 
compilar: trabajoEstudiante posgradoJaveriana detalleActa acta view main
		g++ -o Salida TrabajoEstudiante.o DetalleActa.o Acta.o PosgradoJaveriana.o View.o Main.o
trabajoEstudiante: TrabajoEstudiante.cpp TrabajoEstudiante.h
	g++ -c TrabajoEstudiante.cpp
detalleActa: DetalleActa.cpp DetalleActa.h TrabajoEstudiante.h
		g++ -c DetalleActa.cpp
acta: Acta.cpp Acta.h DetalleActa.h
	g++ -c Acta.cpp
posgradoJaveriana: PosgradoJaveriana.cpp PosgradoJaveriana.h Acta.h TrabajoEstudiante.h
	g++ -c PosgradoJaveriana.cpp
view: View.cpp View.h PosgradoJaveriana.h 
		g++ -c View.cpp
main: Main.cpp View.h PosgradoJaveriana.h
	  g++ -c Main.cpp