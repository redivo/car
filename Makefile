car:
	gcc -o car car.c

install:
	mv car /usr/bin/car

clean:
	rm -f *.o car
