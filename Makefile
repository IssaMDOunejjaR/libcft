.PHONY: array ds int io string table

all: array ds int io string table
	
array:
	cd ./array && $(MAKE) all clean
	
ds:
	cd ./ds/list && $(MAKE) all clean
	
int:
	cd ./int && $(MAKE) all clean
	
io:
	cd ./io && $(MAKE) all clean
	
string:
	cd ./string && $(MAKE) all clean
	
table:
	cd ./table && $(MAKE) all clean
