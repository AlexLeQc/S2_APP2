# creation makefile graphicus 2.0
# essaie de faire graphicus 2.0

graphicus-02: graphicus-02.o tests.o vecteur.o canevas.o couche.o rectangle.o carre.o cercle.o forme.o
	g++ -o graphicus-02 graphicus-02.o forme.o rectangle.o carre.o cercle.o couche.o canevas.o vecteur.o tests.o

graphicus-02.o: graphicus-02.cpp tests.h
	g++ graphicus-02.cpp -g -c
	
tests.o: tests.cpp tests.h vecteur.h canevas.h couche.h rectangle.h carre.h cercle.h forme.h coordonnee.h
	g++ tests.cpp -g -c

canevas.o: canevas.cpp vecteur.h canevas.h couche.h rectangle.h carre.h cercle.h forme.h coordonnee.h
	g++ canevas.cpp -g -c

couche.o: couche.cpp couche.h vecteur.h forme.h coordonnee.h
	g++ couche.cpp -g -c
	
vecteur.o: vecteur.cpp vecteur.h canevas.h couche.h forme.h
	g++ vecteur.cpp -g -c
	
rectangle.o: rectangle.cpp rectangle.h forme.h coordonnee.h
	g++ rectangle.cpp -g -c

cercle.o: cercle.cpp cercle.h forme.h coordonnee.h
	g++ cercle.cpp -g -c
	
carre.o: carre.cpp carre.h rectangle.h forme.h coordonnee.h
	g++ carre.cpp -g -c

forme.o: forme.cpp forme.h coordonnee.h
	g++ forme.cpp -g -c
	
clean:
	rm -f *.o



