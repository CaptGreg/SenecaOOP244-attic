ALL =  sizeof sizeof2 sizeof3 sizeof4 sizeof5 sizeof6 base-derived-1 base-derived-2 test1 test1-virtual \
	assignment-op overload-op copy-ctor

all : $(ALL)

test1: test1.cpp
	g++ test1.cpp -o test1

test1-virtual: test1.cpp
	g++ -DVIRTUAL test1.cpp -o test1-virtual


clean:
	-rm $(ALL)
