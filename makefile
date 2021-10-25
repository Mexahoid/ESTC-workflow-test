OBJS = vectorexample.o vectorlib.o
vectorexample: $(OBJS)
        gcc -o $@ $^
        rm -f $^

vectorexample.o: vectorexample.c
        gcc -c vectorexample.c

vectorlib.o:
        cd vectorlib && $(MAKE)
        cd ..
        mv ./vectorlib/vectorlib.o .