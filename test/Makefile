CFLAGS = -Wall -Wextra
mass: ./mass.c ./../src/object/mass.h
	$(CC) $(CFLAGS) $< -o $@.o
object: ./object.c ./../src/object/object.h
	$(CC) $(CFLAGS) $< -o $@.o
removeMass:
	rm ./mass.o
removeObject:
	rm ./object.o
default:
	make mass
	make object
clean:
	removeMass
	removeObject