all: ftest
ftest: ftest.o Fraction.o fractiontest.o
	 g++ -o ftest ftest.o Fraction.o fractiontest.o -L/diretorio_onde_encontrar_a_biblioteca_cppunit -lcppunit
Fraction.o: Fraction.cpp Fraction.h
	 g++ -c Fraction.cpp -I/diretorio_onde_encontrar_os_arquivos_.h_da_biblioteca
fractiontest.o: fractiontest.h fractiontest.cpp Fraction.h
	 g++ -c fractiontest.cpp -I/diretorio_onde_encontrar_os_arquivos_.h_da_biblioteca
ftest.o: ftest.cpp
	 g++ -c ftest.cpp -I/diretorio_onde_encontrar_os_arquivos_.h_da_biblioteca
clean
	 -rm -f *.o ftest *