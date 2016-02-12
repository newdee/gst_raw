INCLUDE += $(shell pkg-config --cflags gstreamer-1.0)
LIBS += $(shell pkg-config --libs gstreamer-1.0)
.RECIPEPREFIX = >

version: version.o
>@cc -o version version.o  $(INCLUDE) $(LIBS)

version.o:version.c
>@cc -c version.c $(INCLUDE) $(LIBS)


.PHONY: clean
clean:
>@rm *.o ; rm version
