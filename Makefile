.PHONY: array ds number io string table

all: array ds number io string table
	
array:
	cd ./array && $(MAKE) all
	
ds:
	cd ./ds/list && $(MAKE) all 
	
number:
	cd ./number && $(MAKE) all 
	
io:
	cd ./io && $(MAKE) all 
	
string:
	cd ./string && $(MAKE) all 
	
table:
	cd ./table && $(MAKE) all 
