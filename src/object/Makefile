CFLAGS = -Wall -Wextra
object: ./../../test/object.c ./mass.h ./types.h ./object.h
	$(CC) $(CFLAGS) $< -o $@
remove:
	rm ./object
default:
	make object