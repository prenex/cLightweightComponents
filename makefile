libs :=
include $(shell find components/ -name 'extra.mk')
hdrs := $(shell find components/ -name '*.h')
srcs := $(shell find components/ -name '*.c')
objs := $(patsubst %.c,%.o,$(srcs))

main: $(objs)
	gcc main.c -o $@ $(libs) $(objs)

%.o: %.c $(hdrs)
	gcc -Wall -Wextra -g -o $@ $<

clean:
	rm -f main $(objs)
