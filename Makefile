
ALL = \
	assignment-op \
	base-derived-1 \
	base-derived-2 \
	book \
	copy-ctor \
	derived-class \
	fmt-width \
	i \
	inheritance \
	mi-1 \
	mi-1a \
	mi-2 \
	mi-3 \
	mi-4 \
	mi-5 \
	mi-6 \
	mi-7 \
	mi-diamond \
	overload-op \
	parms \
	sizeof2 \
	sizeof3 \
	sizeof4 \
	sizeof5 \
	sizeof6 \
	sizeof \
	test1 \
	test1-virtual \
	w5-copy-ctor \
	cppcallc \
	cmdline \
    w8-phone \

all : $(ALL)

CXX = g++-4.8
CXXFLAGS = -ggdb -std=c++0x -Wall 

parms: parms.cpp x.h x.cpp
	$(CXX) parms.cpp  x.cpp -o parms

test1: test1.cpp
	$(CXX) test1.cpp -o test1

test1-virtual: test1.cpp
	$(CXX) -DVIRTUAL test1.cpp -o test1-virtual

cppcallc  : cppcallc.cpp cfun.h cfun.c
	g++ -c cppcallc.cpp
	gcc -c cfun.c
	g++ cppcallc.o cfun.o -o cppcallc

w8-phone : w8-phone.cpp w8-phone.h
	$(CXX) $(CFLAGS) w8-phone.cpp -o w8-phone

clean:
	-rm $(ALL) *.o
