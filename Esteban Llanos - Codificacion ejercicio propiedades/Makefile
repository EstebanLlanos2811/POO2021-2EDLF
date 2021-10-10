all: compilar
compilar: propiedad propietario unidadResidencial view main
		g++ -o Salida Propiedad.o Propietario.o UnidadResidencial.o View.o Main.o
propiedad: Propiedad.cpp Propiedad.h
	g++ -c Propiedad.cpp
propietario: Propietario.cpp Propietario.h
		g++ -c Propietario.cpp
unidadResidencial: UnidadResidencial.cpp UnidadResidencial.h Propietario.h Propiedad.h
	g++ -c UnidadResidencial.cpp
view: View.cpp View.h UnidadResidencial.h 
		g++ -c View.cpp
main: Main.cpp View.h UnidadResidencial.h
	  g++ -c Main.cpp