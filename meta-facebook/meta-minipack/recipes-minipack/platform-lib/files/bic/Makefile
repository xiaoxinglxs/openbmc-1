# Copyright 2018-present Facebook. All Rights Reserved.
lib: libbic.so

libbic.so: bic.c
	$(CC) $(CFLAGS) -fPIC -c -o bic.o bic.c
	$(CC) -shared -o libbic.so bic.o -lc $(LDFLAGS)

.PHONY: clean

clean:
	rm -rf *.o libbic.so
