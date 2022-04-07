

all: collegeApp

collegeApp: arr3.o config.o
   ${CC} -o collegeApp arr3.o congif.o
   
   config.o:config.c
     ${CC} -c config.c
     
     clean:
       @echo "Cleaning...."
       rm -rf  config.o *.out collegeApp

