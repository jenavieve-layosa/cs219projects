hex_calculator : driver.o hex.o
	g++ -o hex_calculator driver.o hex.o
driver.o: driver.cpp hex.h
	g++ -c driver.cpp
hex.o: hex.cpp hex.h
	g++ -c hex.cpp
clean : 
	rm *.o
	
	
