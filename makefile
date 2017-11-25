libs :=
include $(shell find -name extra.mk)
hdrs := $(shell find -name '*.h')
srcs := $(shell find -name '*.c')
objs := $(patsubst %.cpp,%.o,$(srcs))

main: $(objs)
	gcc -o $@ $(libs) $(objs)

%.o: %.c $(hdrs)
	gcc -Wall -Wextra -g -o $@ $<

clean:
	rm -f main $(objs)
