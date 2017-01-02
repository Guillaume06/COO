#=======================================================================
# Basic C++: makefile example to use as a reminder or as a template
#-----------------------------------------------------------------------
# Julien Deantoni --- No Copyright 2016
# $Id: Makefile old but comprehensive style,v1.0 2016/09/06
#=======================================================================


#you can define as many as variable you like to be used as command, as pathes, etc, they are just MACRO for the remainder of the Makefile

#example name of the executable to generate
EXE_NAME=COO

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


Main: Position.o Avancer.o Defaire.o Figer.o  Repartir.o Peser.o Saisir.o Poser.o EvaluerPlot.o RencontrerPlot.o Tourner.o Command.o Command_Robot.o Plot.o Parser.o Textuel.o Afficheur.o Observateur.o Main.o Objet.o Robot.o Fige.o EtatRobot.o AVideFacePlot.o EnCharge.o EnChargeFacePlot.o EnRoute.o AVide.o
	$(LINK_CXX) Position.o Defaire.o Figer.o  Repartir.o Peser.o Saisir.o Poser.o EvaluerPlot.o RencontrerPlot.o Tourner.o Avancer.o Command_Robot.o Command.o Parser.o Plot.o Textuel.o Afficheur.o Main.o Robot.o Objet.o Fige.o EtatRobot.o AVideFacePlot.o EnCharge.o EnChargeFacePlot.o EnRoute.o AVide.o Observateur.o -o $(EXE_NAME)

Main.o: Main.cpp
	$(CXX)  Main.cpp -o Main.o

AVideFacePlot.o: AVideFacePlot.cpp AVideFacePlot.h
	$(CXX)  AVideFacePlot.cpp -o AVideFacePlot.o

EnCharge.o: EnCharge.cpp EnCharge.h
	$(CXX)  EnCharge.cpp -o EnCharge.o

AVide.o: AVide.cpp AVide.h
	$(CXX)  AVide.cpp -o AVide.o

EnChargeFacePlot.o: EnChargeFacePlot.cpp EnChargeFacePlot.h
	$(CXX)  EnChargeFacePlot.cpp -o EnChargeFacePlot.o

EnRoute.o: EnRoute.cpp EnRoute.h
	$(CXX)  EnRoute.cpp -o EnRoute.o

EtatRobot.o: EtatRobot.cpp EtatRobot.h
	$(CXX)  EtatRobot.cpp -o EtatRobot.o

Fige.o: Fige.cpp Fige.h
	$(CXX)  Fige.cpp -o Fige.o

Robot.o: Robot.cpp Robot.h
	$(CXX)  Robot.cpp -o Robot.o

Objet.o: Objet.cpp Objet.h
	$(CXX)  Objet.cpp -o Objet.o

Observateur.o: Observateur.cpp Observateur.h
	$(CXX)  Observateur.cpp -o Observateur.o

Afficheur.o: Afficheur.cpp Afficheur.h
	$(CXX)  Afficheur.cpp -o Afficheur.o

Textuel.o: Textuel.cpp Textuel.h
	$(CXX)  Textuel.cpp -o Textuel.o

Plot.o: Plot.cpp Plot.h
	$(CXX)  Plot.cpp -o Plot.o	

Position.o: Position.cpp Position.h
	$(CXX)  Position.cpp -o Position.o

Parser.o: Parser.cpp Parser.h
	$(CXX)  Parser.cpp -o Parser.o

Command.o: Command.cpp Command.h
	$(CXX)  Command.cpp -o Command.o

Command_Robot.o: Command_Robot.cpp Command_Robot.h
	$(CXX)  Command_Robot.cpp -o Command_Robot.o

Avancer.o: Avancer.cpp Avancer.h
	$(CXX)  Avancer.cpp -o Avancer.o

Tourner.o: Tourner.cpp Tourner.h
	$(CXX)  Tourner.cpp -o Tourner.o

RencontrerPlot.o: RencontrerPlot.cpp RencontrerPlot.h
	$(CXX)  RencontrerPlot.cpp -o RencontrerPlot.o

EvaluerPlot.o: EvaluerPlot.cpp EvaluerPlot.h
	$(CXX)  EvaluerPlot.cpp -o EvaluerPlot.o

Poser.o: Poser.cpp Poser.h
	$(CXX)  Poser.cpp -o Poser.o

Saisir.o: Saisir.cpp Saisir.h
	$(CXX)  Saisir.cpp -o Saisir.o

Peser.o: Peser.cpp Peser.h
	$(CXX)  Peser.cpp -o Peser.o

Figer.o: Figer.cpp Figer.h
	$(CXX)  Figer.cpp -o Figer.o

Repartir.o: Repartir.cpp Repartir.h
	$(CXX)  Repartir.cpp -o Repartir.o

Defaire.o: Defaire.cpp Defaire.h
	$(CXX)  Defaire.cpp -o Defaire.o


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
	-rm -f *.o COO *.ps \#* *~
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

