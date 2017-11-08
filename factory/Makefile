.PHONY : all clean

all: factory

LOCAL_CPPFLAGS ?= -g -w
LOCAL_LDFLAGS ?=

LOCAL_FILE:=factory.cpp  factory.h

INCLUDE:=.

target_source:=$(filter %.cpp, $(LOCAL_FILE))
SRC:=$(wildcard *.cpp)
target_objs:=$(patsubst %cpp, %o,$(SRC))
$(warning $(target_source)  $(SRC) $(target_objs))

factory: $(target_objs)
	g++ $(LOCAL_CPPFLAGS) -o $@ $< -I.

clean:
	rm *.o factory
