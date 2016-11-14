#=======================================================================
# Basic C++: makefile example to use as a reminder or as a template
#-----------------------------------------------------------------------
# Julien Deantoni --- No Copyright 2016
# $Id: Makefile old but comprehensive style,v1.0 2016/09/06
#=======================================================================


#you can define as many as variable you like to be used as command, as pathes, etc, they are just MACRO for the remainder of the Makefile

#example name of the executable to generate
EXE_NAME=bin/COO

#extra header file pathes (if empty, please add '.')
EXTRA_HEADER_PATH=.

#list of the options that must be passed to the compiler g++(man g++for details)
CXX_FLAGS =-g -ansi -Wall -Wextra -Wold-style-cast -Woverloaded-virtual -D_DEBUG_ -std=c++11

#shortcut to call the compiler call with the specified options and includes
CXX = g++ $(CXX_FLAGS) -I$(EXTRA_HEADER_PATH) -c

#variable for the linkers (which are here include in the same command line than the compiler
LINK_CXX = g++




# Common targets
# Variables ALL must be defined in specific makefiles; in addition
# FOR NON TEMPLATE FILES


Main: bin/Main.o bin/Objet.o bin/Fige.o bin/EtatRobot.o bin/AVideFacePlot.o bin/EnCharge.o bin/EnChargeFacePlot.o bin/EnRoute.o bin/AVide.o
	$(LINK_CXX) bin/Main.o bin/Objet.o bin/Fige.o bin/EtatRobot.o bin/AVideFacePlot.o bin/EnCharge.o bin/EnChargeFacePlot.o bin/EnRoute.o bin/AVide.o -o $(EXE_NAME)

bin/Main.o: src/Main.cpp
	$(CXX)  src/Main.cpp -o bin/Main.o

bin/AVideFacePlot.o: src/AVideFacePlot.cpp src/AVideFacePlot.h
	$(CXX)  src/AVideFacePlot.cpp -o bin/AVideFacePlot.o

bin/EnCharge.o: src/EnCharge.cpp src/EnCharge.h
	$(CXX)  src/EnCharge.cpp -o bin/EnCharge.o

bin/AVide.o: src/AVide.cpp src/AVide.h
	$(CXX)  src/AVide.cpp -o bin/AVide.o

bin/EnChargeFacePlot.o: src/EnChargeFacePlot.cpp src/EnChargeFacePlot.h
	$(CXX)  src/EnChargeFacePlot.cpp -o bin/EnChargeFacePlot.o

bin/EnRoute.o: src/EnRoute.cpp src/EnRoute.h
	$(CXX)  src/EnRoute.cpp -o bin/EnRoute.o

bin/EtatRobot.o: src/EtatRobot.cpp src/EtatRobot.h
	$(CXX)  src/EtatRobot.cpp -o bin/EtatRobot.o

bin/Fige.o: src/Fige.cpp src/Fige.h
	$(CXX)  src/Fige.cpp -o bin/Fige.o

bin/Robot.o: src/Robot.cpp src/Robot.h
	$(CXX)  src/Robot.cpp -o bin/Robot.o

bin/Objet.o: src/Objet.cpp src/Objet.h
	$(CXX)  src/Objet.cpp -o bin/Objet.o


# FOR TEMPLATE FILES
#we do not make separate compilation of the templated entities
#
# project_Stack: main_Stack.o
# 	$(LINK_CXX) main_Stack.o -o $(EXE_NAME)
# main_Stack.o: main_Stack.cpp Stack.h Stack.cpp
#	$(CXX) main_Stack.cpp
#
# Note that in the Makefile shown above, the .h files are listed, but there are no references in their corresponding commands. This is because the .h files are referred within the corresponding .c files through the #include "file.h". If you do not explicitly include these in your Makefile, your program will not be updated if you make a change to your header (.h) files.

clean:
	-rm -f *.o a.out *.ps \#* *~
	-rm -f *.stackdump core
	-rm -f $(EXE_NAME)
	-make extra_clean

install:
	-mkdir -p $(INSTALL_DIR)
	-cp $(EXE_NAME) $(INSTALL_DIR)

uninstall:
	-rm $(INSTALL_DIR)/$(EXE_NAME)

extra_all:
extra_clean:

#-----------------------------------------------------------------------


#usage

#make project_Stack
#--> construct the executable

#make clean
#--> clean the compilation file as well as the executable created

