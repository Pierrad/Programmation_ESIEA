##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Programmation
ConfigurationName      :=Debug
WorkspacePath          :=/home/pierrad/Bureau/Programmation
ProjectPath            :=/home/pierrad/Bureau/Programmation
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Pierre-Adrien
Date                   :=16/02/18
CodeLitePath           :=/home/pierrad/.codelite
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="Programmation.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  -O0
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch). $(LibraryPathSwitch)Debug 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g -Wall $(Preprocessors)
CFLAGS   :=   $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/TP03_main.c$(ObjectSuffix) $(IntermediateDirectory)/main2.c$(ObjectSuffix) $(IntermediateDirectory)/up_up_Téléchargements_Jeu_de_la_vie_jeu_de_la_vie.c$(ObjectSuffix) $(IntermediateDirectory)/TP02_Exo2_main.c$(ObjectSuffix) $(IntermediateDirectory)/TP02_Exo1_main.c$(ObjectSuffix) $(IntermediateDirectory)/TP02_Exo4_main.c$(ObjectSuffix) $(IntermediateDirectory)/TP02_Exo5_main.c$(ObjectSuffix) $(IntermediateDirectory)/TP02_Exo6_main.c$(ObjectSuffix) $(IntermediateDirectory)/TP02_Exo7_main.c$(ObjectSuffix) $(IntermediateDirectory)/TP02_Exo3_main.c$(ObjectSuffix) \
	$(IntermediateDirectory)/TD06_Partie1_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD03_Partie6_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD03_Partie4_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD03_Partie3_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD03_Partie2_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD03_Partie5_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD04_Partie2_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD04_Partie1_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD07_Exo4_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD07_Exo3_main.c$(ObjectSuffix) \
	$(IntermediateDirectory)/TD05_Partie4_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD05_Partie3_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD05_Partie5_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD02_Partie4_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD02_Partie3_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD02_Partie2_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD02_Partie1_main.c$(ObjectSuffix) $(IntermediateDirectory)/TP01_TP01-Partie1.1_main.c$(ObjectSuffix) $(IntermediateDirectory)/TP01_TP01-Partie1.2_main.c$(ObjectSuffix) $(IntermediateDirectory)/TP01_TP01-Partie4.1_main.c$(ObjectSuffix) \
	$(IntermediateDirectory)/TP01_TP01-Partie1.3_main.c$(ObjectSuffix) $(IntermediateDirectory)/TP01_TP01-Partie2_main.c$(ObjectSuffix) $(IntermediateDirectory)/TP01_TP01-Partie4.2_main.c$(ObjectSuffix) $(IntermediateDirectory)/TP01_TP01-Partie3_main.c$(ObjectSuffix) $(IntermediateDirectory)/TP01_TP01-Partie1.4_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD06_Partie2_Exo2_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD06_Partie2_Exo1_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD06_Partie2_Exo4_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD06_Partie2_Exo3_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD06_Partie3_Exo5_main.c$(ObjectSuffix) \
	$(IntermediateDirectory)/TD06_Partie3_Exo6_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD03_Partie1_Partie1.2_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD03_Partie1_Partie1.1_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD03_Partie7_Partie7.2_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD03_Partie7_Partie7.1_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD04_Partie3_Partie3-Exo2_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD04_Partie3_Partie3-Exo3_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD04_Partie3_Partie3-Exo4_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD04_Partie3_Partie3-Exo1_main.c$(ObjectSuffix) $(IntermediateDirectory)/TDPARIS_Entrainement_EXO2_main.c$(ObjectSuffix) \
	$(IntermediateDirectory)/TDPARIS_Entrainement_EXO1_main.c$(ObjectSuffix) $(IntermediateDirectory)/TDPARIS_Entrainement_EXO5_question5.c$(ObjectSuffix) $(IntermediateDirectory)/TDPARIS_Entrainement_EXO5_main.c$(ObjectSuffix) $(IntermediateDirectory)/TDPARIS_Entrainement_EXO3_main.c$(ObjectSuffix) $(IntermediateDirectory)/TDPARIS_Entrainement_EXO4_main.c$(ObjectSuffix) $(IntermediateDirectory)/TDPARIS_Entrainement_EXO6_question7.c$(ObjectSuffix) $(IntermediateDirectory)/TD09_Partie2_Exercice4_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD02_Partie5_Partie5.3_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD02_Partie5_Partie5.2_main.c$(ObjectSuffix) $(IntermediateDirectory)/TD02_Partie5_Partie5.1_main.c$(ObjectSuffix) \
	



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/TP03_main.c$(ObjectSuffix): TP03/main.c $(IntermediateDirectory)/TP03_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TP03/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TP03_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TP03_main.c$(DependSuffix): TP03/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TP03_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TP03_main.c$(DependSuffix) -MM TP03/main.c

$(IntermediateDirectory)/TP03_main.c$(PreprocessSuffix): TP03/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TP03_main.c$(PreprocessSuffix) TP03/main.c

$(IntermediateDirectory)/main2.c$(ObjectSuffix): main2.c $(IntermediateDirectory)/main2.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/main2.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main2.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main2.c$(DependSuffix): main2.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main2.c$(ObjectSuffix) -MF$(IntermediateDirectory)/main2.c$(DependSuffix) -MM main2.c

$(IntermediateDirectory)/main2.c$(PreprocessSuffix): main2.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main2.c$(PreprocessSuffix) main2.c

$(IntermediateDirectory)/up_up_Téléchargements_Jeu_de_la_vie_jeu_de_la_vie.c$(ObjectSuffix): ../../Téléchargements/Jeu_de_la_vie/jeu_de_la_vie.c $(IntermediateDirectory)/up_up_Téléchargements_Jeu_de_la_vie_jeu_de_la_vie.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Téléchargements/Jeu_de_la_vie/jeu_de_la_vie.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_Téléchargements_Jeu_de_la_vie_jeu_de_la_vie.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_Téléchargements_Jeu_de_la_vie_jeu_de_la_vie.c$(DependSuffix): ../../Téléchargements/Jeu_de_la_vie/jeu_de_la_vie.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_Téléchargements_Jeu_de_la_vie_jeu_de_la_vie.c$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_Téléchargements_Jeu_de_la_vie_jeu_de_la_vie.c$(DependSuffix) -MM ../../Téléchargements/Jeu_de_la_vie/jeu_de_la_vie.c

$(IntermediateDirectory)/up_up_Téléchargements_Jeu_de_la_vie_jeu_de_la_vie.c$(PreprocessSuffix): ../../Téléchargements/Jeu_de_la_vie/jeu_de_la_vie.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_Téléchargements_Jeu_de_la_vie_jeu_de_la_vie.c$(PreprocessSuffix) ../../Téléchargements/Jeu_de_la_vie/jeu_de_la_vie.c

$(IntermediateDirectory)/TP02_Exo2_main.c$(ObjectSuffix): TP02/Exo2/main.c $(IntermediateDirectory)/TP02_Exo2_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TP02/Exo2/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TP02_Exo2_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TP02_Exo2_main.c$(DependSuffix): TP02/Exo2/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TP02_Exo2_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TP02_Exo2_main.c$(DependSuffix) -MM TP02/Exo2/main.c

$(IntermediateDirectory)/TP02_Exo2_main.c$(PreprocessSuffix): TP02/Exo2/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TP02_Exo2_main.c$(PreprocessSuffix) TP02/Exo2/main.c

$(IntermediateDirectory)/TP02_Exo1_main.c$(ObjectSuffix): TP02/Exo1/main.c $(IntermediateDirectory)/TP02_Exo1_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TP02/Exo1/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TP02_Exo1_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TP02_Exo1_main.c$(DependSuffix): TP02/Exo1/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TP02_Exo1_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TP02_Exo1_main.c$(DependSuffix) -MM TP02/Exo1/main.c

$(IntermediateDirectory)/TP02_Exo1_main.c$(PreprocessSuffix): TP02/Exo1/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TP02_Exo1_main.c$(PreprocessSuffix) TP02/Exo1/main.c

$(IntermediateDirectory)/TP02_Exo4_main.c$(ObjectSuffix): TP02/Exo4/main.c $(IntermediateDirectory)/TP02_Exo4_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TP02/Exo4/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TP02_Exo4_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TP02_Exo4_main.c$(DependSuffix): TP02/Exo4/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TP02_Exo4_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TP02_Exo4_main.c$(DependSuffix) -MM TP02/Exo4/main.c

$(IntermediateDirectory)/TP02_Exo4_main.c$(PreprocessSuffix): TP02/Exo4/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TP02_Exo4_main.c$(PreprocessSuffix) TP02/Exo4/main.c

$(IntermediateDirectory)/TP02_Exo5_main.c$(ObjectSuffix): TP02/Exo5/main.c $(IntermediateDirectory)/TP02_Exo5_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TP02/Exo5/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TP02_Exo5_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TP02_Exo5_main.c$(DependSuffix): TP02/Exo5/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TP02_Exo5_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TP02_Exo5_main.c$(DependSuffix) -MM TP02/Exo5/main.c

$(IntermediateDirectory)/TP02_Exo5_main.c$(PreprocessSuffix): TP02/Exo5/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TP02_Exo5_main.c$(PreprocessSuffix) TP02/Exo5/main.c

$(IntermediateDirectory)/TP02_Exo6_main.c$(ObjectSuffix): TP02/Exo6/main.c $(IntermediateDirectory)/TP02_Exo6_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TP02/Exo6/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TP02_Exo6_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TP02_Exo6_main.c$(DependSuffix): TP02/Exo6/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TP02_Exo6_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TP02_Exo6_main.c$(DependSuffix) -MM TP02/Exo6/main.c

$(IntermediateDirectory)/TP02_Exo6_main.c$(PreprocessSuffix): TP02/Exo6/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TP02_Exo6_main.c$(PreprocessSuffix) TP02/Exo6/main.c

$(IntermediateDirectory)/TP02_Exo7_main.c$(ObjectSuffix): TP02/Exo7/main.c $(IntermediateDirectory)/TP02_Exo7_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TP02/Exo7/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TP02_Exo7_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TP02_Exo7_main.c$(DependSuffix): TP02/Exo7/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TP02_Exo7_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TP02_Exo7_main.c$(DependSuffix) -MM TP02/Exo7/main.c

$(IntermediateDirectory)/TP02_Exo7_main.c$(PreprocessSuffix): TP02/Exo7/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TP02_Exo7_main.c$(PreprocessSuffix) TP02/Exo7/main.c

$(IntermediateDirectory)/TP02_Exo3_main.c$(ObjectSuffix): TP02/Exo3/main.c $(IntermediateDirectory)/TP02_Exo3_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TP02/Exo3/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TP02_Exo3_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TP02_Exo3_main.c$(DependSuffix): TP02/Exo3/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TP02_Exo3_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TP02_Exo3_main.c$(DependSuffix) -MM TP02/Exo3/main.c

$(IntermediateDirectory)/TP02_Exo3_main.c$(PreprocessSuffix): TP02/Exo3/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TP02_Exo3_main.c$(PreprocessSuffix) TP02/Exo3/main.c

$(IntermediateDirectory)/TD06_Partie1_main.c$(ObjectSuffix): TD06/Partie1/main.c $(IntermediateDirectory)/TD06_Partie1_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD06/Partie1/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD06_Partie1_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD06_Partie1_main.c$(DependSuffix): TD06/Partie1/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD06_Partie1_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD06_Partie1_main.c$(DependSuffix) -MM TD06/Partie1/main.c

$(IntermediateDirectory)/TD06_Partie1_main.c$(PreprocessSuffix): TD06/Partie1/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD06_Partie1_main.c$(PreprocessSuffix) TD06/Partie1/main.c

$(IntermediateDirectory)/TD03_Partie6_main.c$(ObjectSuffix): TD03/Partie6/main.c $(IntermediateDirectory)/TD03_Partie6_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD03/Partie6/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD03_Partie6_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD03_Partie6_main.c$(DependSuffix): TD03/Partie6/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD03_Partie6_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD03_Partie6_main.c$(DependSuffix) -MM TD03/Partie6/main.c

$(IntermediateDirectory)/TD03_Partie6_main.c$(PreprocessSuffix): TD03/Partie6/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD03_Partie6_main.c$(PreprocessSuffix) TD03/Partie6/main.c

$(IntermediateDirectory)/TD03_Partie4_main.c$(ObjectSuffix): TD03/Partie4/main.c $(IntermediateDirectory)/TD03_Partie4_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD03/Partie4/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD03_Partie4_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD03_Partie4_main.c$(DependSuffix): TD03/Partie4/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD03_Partie4_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD03_Partie4_main.c$(DependSuffix) -MM TD03/Partie4/main.c

$(IntermediateDirectory)/TD03_Partie4_main.c$(PreprocessSuffix): TD03/Partie4/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD03_Partie4_main.c$(PreprocessSuffix) TD03/Partie4/main.c

$(IntermediateDirectory)/TD03_Partie3_main.c$(ObjectSuffix): TD03/Partie3/main.c $(IntermediateDirectory)/TD03_Partie3_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD03/Partie3/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD03_Partie3_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD03_Partie3_main.c$(DependSuffix): TD03/Partie3/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD03_Partie3_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD03_Partie3_main.c$(DependSuffix) -MM TD03/Partie3/main.c

$(IntermediateDirectory)/TD03_Partie3_main.c$(PreprocessSuffix): TD03/Partie3/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD03_Partie3_main.c$(PreprocessSuffix) TD03/Partie3/main.c

$(IntermediateDirectory)/TD03_Partie2_main.c$(ObjectSuffix): TD03/Partie2/main.c $(IntermediateDirectory)/TD03_Partie2_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD03/Partie2/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD03_Partie2_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD03_Partie2_main.c$(DependSuffix): TD03/Partie2/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD03_Partie2_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD03_Partie2_main.c$(DependSuffix) -MM TD03/Partie2/main.c

$(IntermediateDirectory)/TD03_Partie2_main.c$(PreprocessSuffix): TD03/Partie2/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD03_Partie2_main.c$(PreprocessSuffix) TD03/Partie2/main.c

$(IntermediateDirectory)/TD03_Partie5_main.c$(ObjectSuffix): TD03/Partie5/main.c $(IntermediateDirectory)/TD03_Partie5_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD03/Partie5/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD03_Partie5_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD03_Partie5_main.c$(DependSuffix): TD03/Partie5/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD03_Partie5_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD03_Partie5_main.c$(DependSuffix) -MM TD03/Partie5/main.c

$(IntermediateDirectory)/TD03_Partie5_main.c$(PreprocessSuffix): TD03/Partie5/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD03_Partie5_main.c$(PreprocessSuffix) TD03/Partie5/main.c

$(IntermediateDirectory)/TD04_Partie2_main.c$(ObjectSuffix): TD04/Partie2/main.c $(IntermediateDirectory)/TD04_Partie2_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD04/Partie2/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD04_Partie2_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD04_Partie2_main.c$(DependSuffix): TD04/Partie2/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD04_Partie2_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD04_Partie2_main.c$(DependSuffix) -MM TD04/Partie2/main.c

$(IntermediateDirectory)/TD04_Partie2_main.c$(PreprocessSuffix): TD04/Partie2/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD04_Partie2_main.c$(PreprocessSuffix) TD04/Partie2/main.c

$(IntermediateDirectory)/TD04_Partie1_main.c$(ObjectSuffix): TD04/Partie1/main.c $(IntermediateDirectory)/TD04_Partie1_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD04/Partie1/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD04_Partie1_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD04_Partie1_main.c$(DependSuffix): TD04/Partie1/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD04_Partie1_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD04_Partie1_main.c$(DependSuffix) -MM TD04/Partie1/main.c

$(IntermediateDirectory)/TD04_Partie1_main.c$(PreprocessSuffix): TD04/Partie1/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD04_Partie1_main.c$(PreprocessSuffix) TD04/Partie1/main.c

$(IntermediateDirectory)/TD07_Exo4_main.c$(ObjectSuffix): TD07/Exo4/main.c $(IntermediateDirectory)/TD07_Exo4_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD07/Exo4/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD07_Exo4_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD07_Exo4_main.c$(DependSuffix): TD07/Exo4/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD07_Exo4_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD07_Exo4_main.c$(DependSuffix) -MM TD07/Exo4/main.c

$(IntermediateDirectory)/TD07_Exo4_main.c$(PreprocessSuffix): TD07/Exo4/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD07_Exo4_main.c$(PreprocessSuffix) TD07/Exo4/main.c

$(IntermediateDirectory)/TD07_Exo3_main.c$(ObjectSuffix): TD07/Exo3/main.c $(IntermediateDirectory)/TD07_Exo3_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD07/Exo3/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD07_Exo3_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD07_Exo3_main.c$(DependSuffix): TD07/Exo3/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD07_Exo3_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD07_Exo3_main.c$(DependSuffix) -MM TD07/Exo3/main.c

$(IntermediateDirectory)/TD07_Exo3_main.c$(PreprocessSuffix): TD07/Exo3/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD07_Exo3_main.c$(PreprocessSuffix) TD07/Exo3/main.c

$(IntermediateDirectory)/TD05_Partie4_main.c$(ObjectSuffix): TD05/Partie4/main.c $(IntermediateDirectory)/TD05_Partie4_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD05/Partie4/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD05_Partie4_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD05_Partie4_main.c$(DependSuffix): TD05/Partie4/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD05_Partie4_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD05_Partie4_main.c$(DependSuffix) -MM TD05/Partie4/main.c

$(IntermediateDirectory)/TD05_Partie4_main.c$(PreprocessSuffix): TD05/Partie4/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD05_Partie4_main.c$(PreprocessSuffix) TD05/Partie4/main.c

$(IntermediateDirectory)/TD05_Partie3_main.c$(ObjectSuffix): TD05/Partie3/main.c $(IntermediateDirectory)/TD05_Partie3_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD05/Partie3/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD05_Partie3_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD05_Partie3_main.c$(DependSuffix): TD05/Partie3/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD05_Partie3_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD05_Partie3_main.c$(DependSuffix) -MM TD05/Partie3/main.c

$(IntermediateDirectory)/TD05_Partie3_main.c$(PreprocessSuffix): TD05/Partie3/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD05_Partie3_main.c$(PreprocessSuffix) TD05/Partie3/main.c

$(IntermediateDirectory)/TD05_Partie5_main.c$(ObjectSuffix): TD05/Partie5/main.c $(IntermediateDirectory)/TD05_Partie5_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD05/Partie5/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD05_Partie5_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD05_Partie5_main.c$(DependSuffix): TD05/Partie5/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD05_Partie5_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD05_Partie5_main.c$(DependSuffix) -MM TD05/Partie5/main.c

$(IntermediateDirectory)/TD05_Partie5_main.c$(PreprocessSuffix): TD05/Partie5/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD05_Partie5_main.c$(PreprocessSuffix) TD05/Partie5/main.c

$(IntermediateDirectory)/TD02_Partie4_main.c$(ObjectSuffix): TD02/Partie4/main.c $(IntermediateDirectory)/TD02_Partie4_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD02/Partie4/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD02_Partie4_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD02_Partie4_main.c$(DependSuffix): TD02/Partie4/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD02_Partie4_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD02_Partie4_main.c$(DependSuffix) -MM TD02/Partie4/main.c

$(IntermediateDirectory)/TD02_Partie4_main.c$(PreprocessSuffix): TD02/Partie4/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD02_Partie4_main.c$(PreprocessSuffix) TD02/Partie4/main.c

$(IntermediateDirectory)/TD02_Partie3_main.c$(ObjectSuffix): TD02/Partie3/main.c $(IntermediateDirectory)/TD02_Partie3_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD02/Partie3/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD02_Partie3_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD02_Partie3_main.c$(DependSuffix): TD02/Partie3/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD02_Partie3_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD02_Partie3_main.c$(DependSuffix) -MM TD02/Partie3/main.c

$(IntermediateDirectory)/TD02_Partie3_main.c$(PreprocessSuffix): TD02/Partie3/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD02_Partie3_main.c$(PreprocessSuffix) TD02/Partie3/main.c

$(IntermediateDirectory)/TD02_Partie2_main.c$(ObjectSuffix): TD02/Partie2/main.c $(IntermediateDirectory)/TD02_Partie2_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD02/Partie2/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD02_Partie2_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD02_Partie2_main.c$(DependSuffix): TD02/Partie2/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD02_Partie2_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD02_Partie2_main.c$(DependSuffix) -MM TD02/Partie2/main.c

$(IntermediateDirectory)/TD02_Partie2_main.c$(PreprocessSuffix): TD02/Partie2/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD02_Partie2_main.c$(PreprocessSuffix) TD02/Partie2/main.c

$(IntermediateDirectory)/TD02_Partie1_main.c$(ObjectSuffix): TD02/Partie1/main.c $(IntermediateDirectory)/TD02_Partie1_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD02/Partie1/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD02_Partie1_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD02_Partie1_main.c$(DependSuffix): TD02/Partie1/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD02_Partie1_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD02_Partie1_main.c$(DependSuffix) -MM TD02/Partie1/main.c

$(IntermediateDirectory)/TD02_Partie1_main.c$(PreprocessSuffix): TD02/Partie1/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD02_Partie1_main.c$(PreprocessSuffix) TD02/Partie1/main.c

$(IntermediateDirectory)/TP01_TP01-Partie1.1_main.c$(ObjectSuffix): TP01/TP01-Partie1.1/main.c $(IntermediateDirectory)/TP01_TP01-Partie1.1_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TP01/TP01-Partie1.1/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TP01_TP01-Partie1.1_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TP01_TP01-Partie1.1_main.c$(DependSuffix): TP01/TP01-Partie1.1/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TP01_TP01-Partie1.1_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TP01_TP01-Partie1.1_main.c$(DependSuffix) -MM TP01/TP01-Partie1.1/main.c

$(IntermediateDirectory)/TP01_TP01-Partie1.1_main.c$(PreprocessSuffix): TP01/TP01-Partie1.1/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TP01_TP01-Partie1.1_main.c$(PreprocessSuffix) TP01/TP01-Partie1.1/main.c

$(IntermediateDirectory)/TP01_TP01-Partie1.2_main.c$(ObjectSuffix): TP01/TP01-Partie1.2/main.c $(IntermediateDirectory)/TP01_TP01-Partie1.2_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TP01/TP01-Partie1.2/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TP01_TP01-Partie1.2_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TP01_TP01-Partie1.2_main.c$(DependSuffix): TP01/TP01-Partie1.2/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TP01_TP01-Partie1.2_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TP01_TP01-Partie1.2_main.c$(DependSuffix) -MM TP01/TP01-Partie1.2/main.c

$(IntermediateDirectory)/TP01_TP01-Partie1.2_main.c$(PreprocessSuffix): TP01/TP01-Partie1.2/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TP01_TP01-Partie1.2_main.c$(PreprocessSuffix) TP01/TP01-Partie1.2/main.c

$(IntermediateDirectory)/TP01_TP01-Partie4.1_main.c$(ObjectSuffix): TP01/TP01-Partie4.1/main.c $(IntermediateDirectory)/TP01_TP01-Partie4.1_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TP01/TP01-Partie4.1/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TP01_TP01-Partie4.1_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TP01_TP01-Partie4.1_main.c$(DependSuffix): TP01/TP01-Partie4.1/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TP01_TP01-Partie4.1_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TP01_TP01-Partie4.1_main.c$(DependSuffix) -MM TP01/TP01-Partie4.1/main.c

$(IntermediateDirectory)/TP01_TP01-Partie4.1_main.c$(PreprocessSuffix): TP01/TP01-Partie4.1/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TP01_TP01-Partie4.1_main.c$(PreprocessSuffix) TP01/TP01-Partie4.1/main.c

$(IntermediateDirectory)/TP01_TP01-Partie1.3_main.c$(ObjectSuffix): TP01/TP01-Partie1.3/main.c $(IntermediateDirectory)/TP01_TP01-Partie1.3_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TP01/TP01-Partie1.3/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TP01_TP01-Partie1.3_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TP01_TP01-Partie1.3_main.c$(DependSuffix): TP01/TP01-Partie1.3/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TP01_TP01-Partie1.3_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TP01_TP01-Partie1.3_main.c$(DependSuffix) -MM TP01/TP01-Partie1.3/main.c

$(IntermediateDirectory)/TP01_TP01-Partie1.3_main.c$(PreprocessSuffix): TP01/TP01-Partie1.3/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TP01_TP01-Partie1.3_main.c$(PreprocessSuffix) TP01/TP01-Partie1.3/main.c

$(IntermediateDirectory)/TP01_TP01-Partie2_main.c$(ObjectSuffix): TP01/TP01-Partie2/main.c $(IntermediateDirectory)/TP01_TP01-Partie2_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TP01/TP01-Partie2/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TP01_TP01-Partie2_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TP01_TP01-Partie2_main.c$(DependSuffix): TP01/TP01-Partie2/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TP01_TP01-Partie2_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TP01_TP01-Partie2_main.c$(DependSuffix) -MM TP01/TP01-Partie2/main.c

$(IntermediateDirectory)/TP01_TP01-Partie2_main.c$(PreprocessSuffix): TP01/TP01-Partie2/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TP01_TP01-Partie2_main.c$(PreprocessSuffix) TP01/TP01-Partie2/main.c

$(IntermediateDirectory)/TP01_TP01-Partie4.2_main.c$(ObjectSuffix): TP01/TP01-Partie4.2/main.c $(IntermediateDirectory)/TP01_TP01-Partie4.2_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TP01/TP01-Partie4.2/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TP01_TP01-Partie4.2_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TP01_TP01-Partie4.2_main.c$(DependSuffix): TP01/TP01-Partie4.2/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TP01_TP01-Partie4.2_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TP01_TP01-Partie4.2_main.c$(DependSuffix) -MM TP01/TP01-Partie4.2/main.c

$(IntermediateDirectory)/TP01_TP01-Partie4.2_main.c$(PreprocessSuffix): TP01/TP01-Partie4.2/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TP01_TP01-Partie4.2_main.c$(PreprocessSuffix) TP01/TP01-Partie4.2/main.c

$(IntermediateDirectory)/TP01_TP01-Partie3_main.c$(ObjectSuffix): TP01/TP01-Partie3/main.c $(IntermediateDirectory)/TP01_TP01-Partie3_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TP01/TP01-Partie3/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TP01_TP01-Partie3_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TP01_TP01-Partie3_main.c$(DependSuffix): TP01/TP01-Partie3/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TP01_TP01-Partie3_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TP01_TP01-Partie3_main.c$(DependSuffix) -MM TP01/TP01-Partie3/main.c

$(IntermediateDirectory)/TP01_TP01-Partie3_main.c$(PreprocessSuffix): TP01/TP01-Partie3/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TP01_TP01-Partie3_main.c$(PreprocessSuffix) TP01/TP01-Partie3/main.c

$(IntermediateDirectory)/TP01_TP01-Partie1.4_main.c$(ObjectSuffix): TP01/TP01-Partie1.4/main.c $(IntermediateDirectory)/TP01_TP01-Partie1.4_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TP01/TP01-Partie1.4/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TP01_TP01-Partie1.4_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TP01_TP01-Partie1.4_main.c$(DependSuffix): TP01/TP01-Partie1.4/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TP01_TP01-Partie1.4_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TP01_TP01-Partie1.4_main.c$(DependSuffix) -MM TP01/TP01-Partie1.4/main.c

$(IntermediateDirectory)/TP01_TP01-Partie1.4_main.c$(PreprocessSuffix): TP01/TP01-Partie1.4/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TP01_TP01-Partie1.4_main.c$(PreprocessSuffix) TP01/TP01-Partie1.4/main.c

$(IntermediateDirectory)/TD06_Partie2_Exo2_main.c$(ObjectSuffix): TD06/Partie2/Exo2/main.c $(IntermediateDirectory)/TD06_Partie2_Exo2_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD06/Partie2/Exo2/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD06_Partie2_Exo2_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD06_Partie2_Exo2_main.c$(DependSuffix): TD06/Partie2/Exo2/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD06_Partie2_Exo2_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD06_Partie2_Exo2_main.c$(DependSuffix) -MM TD06/Partie2/Exo2/main.c

$(IntermediateDirectory)/TD06_Partie2_Exo2_main.c$(PreprocessSuffix): TD06/Partie2/Exo2/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD06_Partie2_Exo2_main.c$(PreprocessSuffix) TD06/Partie2/Exo2/main.c

$(IntermediateDirectory)/TD06_Partie2_Exo1_main.c$(ObjectSuffix): TD06/Partie2/Exo1/main.c $(IntermediateDirectory)/TD06_Partie2_Exo1_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD06/Partie2/Exo1/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD06_Partie2_Exo1_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD06_Partie2_Exo1_main.c$(DependSuffix): TD06/Partie2/Exo1/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD06_Partie2_Exo1_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD06_Partie2_Exo1_main.c$(DependSuffix) -MM TD06/Partie2/Exo1/main.c

$(IntermediateDirectory)/TD06_Partie2_Exo1_main.c$(PreprocessSuffix): TD06/Partie2/Exo1/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD06_Partie2_Exo1_main.c$(PreprocessSuffix) TD06/Partie2/Exo1/main.c

$(IntermediateDirectory)/TD06_Partie2_Exo4_main.c$(ObjectSuffix): TD06/Partie2/Exo4/main.c $(IntermediateDirectory)/TD06_Partie2_Exo4_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD06/Partie2/Exo4/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD06_Partie2_Exo4_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD06_Partie2_Exo4_main.c$(DependSuffix): TD06/Partie2/Exo4/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD06_Partie2_Exo4_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD06_Partie2_Exo4_main.c$(DependSuffix) -MM TD06/Partie2/Exo4/main.c

$(IntermediateDirectory)/TD06_Partie2_Exo4_main.c$(PreprocessSuffix): TD06/Partie2/Exo4/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD06_Partie2_Exo4_main.c$(PreprocessSuffix) TD06/Partie2/Exo4/main.c

$(IntermediateDirectory)/TD06_Partie2_Exo3_main.c$(ObjectSuffix): TD06/Partie2/Exo3/main.c $(IntermediateDirectory)/TD06_Partie2_Exo3_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD06/Partie2/Exo3/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD06_Partie2_Exo3_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD06_Partie2_Exo3_main.c$(DependSuffix): TD06/Partie2/Exo3/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD06_Partie2_Exo3_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD06_Partie2_Exo3_main.c$(DependSuffix) -MM TD06/Partie2/Exo3/main.c

$(IntermediateDirectory)/TD06_Partie2_Exo3_main.c$(PreprocessSuffix): TD06/Partie2/Exo3/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD06_Partie2_Exo3_main.c$(PreprocessSuffix) TD06/Partie2/Exo3/main.c

$(IntermediateDirectory)/TD06_Partie3_Exo5_main.c$(ObjectSuffix): TD06/Partie3/Exo5/main.c $(IntermediateDirectory)/TD06_Partie3_Exo5_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD06/Partie3/Exo5/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD06_Partie3_Exo5_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD06_Partie3_Exo5_main.c$(DependSuffix): TD06/Partie3/Exo5/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD06_Partie3_Exo5_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD06_Partie3_Exo5_main.c$(DependSuffix) -MM TD06/Partie3/Exo5/main.c

$(IntermediateDirectory)/TD06_Partie3_Exo5_main.c$(PreprocessSuffix): TD06/Partie3/Exo5/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD06_Partie3_Exo5_main.c$(PreprocessSuffix) TD06/Partie3/Exo5/main.c

$(IntermediateDirectory)/TD06_Partie3_Exo6_main.c$(ObjectSuffix): TD06/Partie3/Exo6/main.c $(IntermediateDirectory)/TD06_Partie3_Exo6_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD06/Partie3/Exo6/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD06_Partie3_Exo6_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD06_Partie3_Exo6_main.c$(DependSuffix): TD06/Partie3/Exo6/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD06_Partie3_Exo6_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD06_Partie3_Exo6_main.c$(DependSuffix) -MM TD06/Partie3/Exo6/main.c

$(IntermediateDirectory)/TD06_Partie3_Exo6_main.c$(PreprocessSuffix): TD06/Partie3/Exo6/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD06_Partie3_Exo6_main.c$(PreprocessSuffix) TD06/Partie3/Exo6/main.c

$(IntermediateDirectory)/TD03_Partie1_Partie1.2_main.c$(ObjectSuffix): TD03/Partie1/Partie1.2/main.c $(IntermediateDirectory)/TD03_Partie1_Partie1.2_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD03/Partie1/Partie1.2/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD03_Partie1_Partie1.2_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD03_Partie1_Partie1.2_main.c$(DependSuffix): TD03/Partie1/Partie1.2/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD03_Partie1_Partie1.2_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD03_Partie1_Partie1.2_main.c$(DependSuffix) -MM TD03/Partie1/Partie1.2/main.c

$(IntermediateDirectory)/TD03_Partie1_Partie1.2_main.c$(PreprocessSuffix): TD03/Partie1/Partie1.2/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD03_Partie1_Partie1.2_main.c$(PreprocessSuffix) TD03/Partie1/Partie1.2/main.c

$(IntermediateDirectory)/TD03_Partie1_Partie1.1_main.c$(ObjectSuffix): TD03/Partie1/Partie1.1/main.c $(IntermediateDirectory)/TD03_Partie1_Partie1.1_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD03/Partie1/Partie1.1/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD03_Partie1_Partie1.1_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD03_Partie1_Partie1.1_main.c$(DependSuffix): TD03/Partie1/Partie1.1/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD03_Partie1_Partie1.1_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD03_Partie1_Partie1.1_main.c$(DependSuffix) -MM TD03/Partie1/Partie1.1/main.c

$(IntermediateDirectory)/TD03_Partie1_Partie1.1_main.c$(PreprocessSuffix): TD03/Partie1/Partie1.1/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD03_Partie1_Partie1.1_main.c$(PreprocessSuffix) TD03/Partie1/Partie1.1/main.c

$(IntermediateDirectory)/TD03_Partie7_Partie7.2_main.c$(ObjectSuffix): TD03/Partie7/Partie7.2/main.c $(IntermediateDirectory)/TD03_Partie7_Partie7.2_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD03/Partie7/Partie7.2/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD03_Partie7_Partie7.2_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD03_Partie7_Partie7.2_main.c$(DependSuffix): TD03/Partie7/Partie7.2/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD03_Partie7_Partie7.2_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD03_Partie7_Partie7.2_main.c$(DependSuffix) -MM TD03/Partie7/Partie7.2/main.c

$(IntermediateDirectory)/TD03_Partie7_Partie7.2_main.c$(PreprocessSuffix): TD03/Partie7/Partie7.2/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD03_Partie7_Partie7.2_main.c$(PreprocessSuffix) TD03/Partie7/Partie7.2/main.c

$(IntermediateDirectory)/TD03_Partie7_Partie7.1_main.c$(ObjectSuffix): TD03/Partie7/Partie7.1/main.c $(IntermediateDirectory)/TD03_Partie7_Partie7.1_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD03/Partie7/Partie7.1/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD03_Partie7_Partie7.1_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD03_Partie7_Partie7.1_main.c$(DependSuffix): TD03/Partie7/Partie7.1/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD03_Partie7_Partie7.1_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD03_Partie7_Partie7.1_main.c$(DependSuffix) -MM TD03/Partie7/Partie7.1/main.c

$(IntermediateDirectory)/TD03_Partie7_Partie7.1_main.c$(PreprocessSuffix): TD03/Partie7/Partie7.1/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD03_Partie7_Partie7.1_main.c$(PreprocessSuffix) TD03/Partie7/Partie7.1/main.c

$(IntermediateDirectory)/TD04_Partie3_Partie3-Exo2_main.c$(ObjectSuffix): TD04/Partie3/Partie3-Exo2/main.c $(IntermediateDirectory)/TD04_Partie3_Partie3-Exo2_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD04/Partie3/Partie3-Exo2/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD04_Partie3_Partie3-Exo2_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD04_Partie3_Partie3-Exo2_main.c$(DependSuffix): TD04/Partie3/Partie3-Exo2/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD04_Partie3_Partie3-Exo2_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD04_Partie3_Partie3-Exo2_main.c$(DependSuffix) -MM TD04/Partie3/Partie3-Exo2/main.c

$(IntermediateDirectory)/TD04_Partie3_Partie3-Exo2_main.c$(PreprocessSuffix): TD04/Partie3/Partie3-Exo2/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD04_Partie3_Partie3-Exo2_main.c$(PreprocessSuffix) TD04/Partie3/Partie3-Exo2/main.c

$(IntermediateDirectory)/TD04_Partie3_Partie3-Exo3_main.c$(ObjectSuffix): TD04/Partie3/Partie3-Exo3/main.c $(IntermediateDirectory)/TD04_Partie3_Partie3-Exo3_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD04/Partie3/Partie3-Exo3/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD04_Partie3_Partie3-Exo3_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD04_Partie3_Partie3-Exo3_main.c$(DependSuffix): TD04/Partie3/Partie3-Exo3/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD04_Partie3_Partie3-Exo3_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD04_Partie3_Partie3-Exo3_main.c$(DependSuffix) -MM TD04/Partie3/Partie3-Exo3/main.c

$(IntermediateDirectory)/TD04_Partie3_Partie3-Exo3_main.c$(PreprocessSuffix): TD04/Partie3/Partie3-Exo3/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD04_Partie3_Partie3-Exo3_main.c$(PreprocessSuffix) TD04/Partie3/Partie3-Exo3/main.c

$(IntermediateDirectory)/TD04_Partie3_Partie3-Exo4_main.c$(ObjectSuffix): TD04/Partie3/Partie3-Exo4/main.c $(IntermediateDirectory)/TD04_Partie3_Partie3-Exo4_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD04/Partie3/Partie3-Exo4/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD04_Partie3_Partie3-Exo4_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD04_Partie3_Partie3-Exo4_main.c$(DependSuffix): TD04/Partie3/Partie3-Exo4/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD04_Partie3_Partie3-Exo4_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD04_Partie3_Partie3-Exo4_main.c$(DependSuffix) -MM TD04/Partie3/Partie3-Exo4/main.c

$(IntermediateDirectory)/TD04_Partie3_Partie3-Exo4_main.c$(PreprocessSuffix): TD04/Partie3/Partie3-Exo4/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD04_Partie3_Partie3-Exo4_main.c$(PreprocessSuffix) TD04/Partie3/Partie3-Exo4/main.c

$(IntermediateDirectory)/TD04_Partie3_Partie3-Exo1_main.c$(ObjectSuffix): TD04/Partie3/Partie3-Exo1/main.c $(IntermediateDirectory)/TD04_Partie3_Partie3-Exo1_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD04/Partie3/Partie3-Exo1/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD04_Partie3_Partie3-Exo1_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD04_Partie3_Partie3-Exo1_main.c$(DependSuffix): TD04/Partie3/Partie3-Exo1/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD04_Partie3_Partie3-Exo1_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD04_Partie3_Partie3-Exo1_main.c$(DependSuffix) -MM TD04/Partie3/Partie3-Exo1/main.c

$(IntermediateDirectory)/TD04_Partie3_Partie3-Exo1_main.c$(PreprocessSuffix): TD04/Partie3/Partie3-Exo1/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD04_Partie3_Partie3-Exo1_main.c$(PreprocessSuffix) TD04/Partie3/Partie3-Exo1/main.c

$(IntermediateDirectory)/TDPARIS_Entrainement_EXO2_main.c$(ObjectSuffix): TDPARIS/Entrainement/EXO2/main.c $(IntermediateDirectory)/TDPARIS_Entrainement_EXO2_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TDPARIS/Entrainement/EXO2/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TDPARIS_Entrainement_EXO2_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TDPARIS_Entrainement_EXO2_main.c$(DependSuffix): TDPARIS/Entrainement/EXO2/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TDPARIS_Entrainement_EXO2_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TDPARIS_Entrainement_EXO2_main.c$(DependSuffix) -MM TDPARIS/Entrainement/EXO2/main.c

$(IntermediateDirectory)/TDPARIS_Entrainement_EXO2_main.c$(PreprocessSuffix): TDPARIS/Entrainement/EXO2/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TDPARIS_Entrainement_EXO2_main.c$(PreprocessSuffix) TDPARIS/Entrainement/EXO2/main.c

$(IntermediateDirectory)/TDPARIS_Entrainement_EXO1_main.c$(ObjectSuffix): TDPARIS/Entrainement/EXO1/main.c $(IntermediateDirectory)/TDPARIS_Entrainement_EXO1_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TDPARIS/Entrainement/EXO1/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TDPARIS_Entrainement_EXO1_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TDPARIS_Entrainement_EXO1_main.c$(DependSuffix): TDPARIS/Entrainement/EXO1/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TDPARIS_Entrainement_EXO1_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TDPARIS_Entrainement_EXO1_main.c$(DependSuffix) -MM TDPARIS/Entrainement/EXO1/main.c

$(IntermediateDirectory)/TDPARIS_Entrainement_EXO1_main.c$(PreprocessSuffix): TDPARIS/Entrainement/EXO1/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TDPARIS_Entrainement_EXO1_main.c$(PreprocessSuffix) TDPARIS/Entrainement/EXO1/main.c

$(IntermediateDirectory)/TDPARIS_Entrainement_EXO5_question5.c$(ObjectSuffix): TDPARIS/Entrainement/EXO5/question5.c $(IntermediateDirectory)/TDPARIS_Entrainement_EXO5_question5.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TDPARIS/Entrainement/EXO5/question5.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TDPARIS_Entrainement_EXO5_question5.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TDPARIS_Entrainement_EXO5_question5.c$(DependSuffix): TDPARIS/Entrainement/EXO5/question5.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TDPARIS_Entrainement_EXO5_question5.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TDPARIS_Entrainement_EXO5_question5.c$(DependSuffix) -MM TDPARIS/Entrainement/EXO5/question5.c

$(IntermediateDirectory)/TDPARIS_Entrainement_EXO5_question5.c$(PreprocessSuffix): TDPARIS/Entrainement/EXO5/question5.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TDPARIS_Entrainement_EXO5_question5.c$(PreprocessSuffix) TDPARIS/Entrainement/EXO5/question5.c

$(IntermediateDirectory)/TDPARIS_Entrainement_EXO5_main.c$(ObjectSuffix): TDPARIS/Entrainement/EXO5/main.c $(IntermediateDirectory)/TDPARIS_Entrainement_EXO5_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TDPARIS/Entrainement/EXO5/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TDPARIS_Entrainement_EXO5_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TDPARIS_Entrainement_EXO5_main.c$(DependSuffix): TDPARIS/Entrainement/EXO5/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TDPARIS_Entrainement_EXO5_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TDPARIS_Entrainement_EXO5_main.c$(DependSuffix) -MM TDPARIS/Entrainement/EXO5/main.c

$(IntermediateDirectory)/TDPARIS_Entrainement_EXO5_main.c$(PreprocessSuffix): TDPARIS/Entrainement/EXO5/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TDPARIS_Entrainement_EXO5_main.c$(PreprocessSuffix) TDPARIS/Entrainement/EXO5/main.c

$(IntermediateDirectory)/TDPARIS_Entrainement_EXO3_main.c$(ObjectSuffix): TDPARIS/Entrainement/EXO3/main.c $(IntermediateDirectory)/TDPARIS_Entrainement_EXO3_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TDPARIS/Entrainement/EXO3/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TDPARIS_Entrainement_EXO3_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TDPARIS_Entrainement_EXO3_main.c$(DependSuffix): TDPARIS/Entrainement/EXO3/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TDPARIS_Entrainement_EXO3_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TDPARIS_Entrainement_EXO3_main.c$(DependSuffix) -MM TDPARIS/Entrainement/EXO3/main.c

$(IntermediateDirectory)/TDPARIS_Entrainement_EXO3_main.c$(PreprocessSuffix): TDPARIS/Entrainement/EXO3/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TDPARIS_Entrainement_EXO3_main.c$(PreprocessSuffix) TDPARIS/Entrainement/EXO3/main.c

$(IntermediateDirectory)/TDPARIS_Entrainement_EXO4_main.c$(ObjectSuffix): TDPARIS/Entrainement/EXO4/main.c $(IntermediateDirectory)/TDPARIS_Entrainement_EXO4_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TDPARIS/Entrainement/EXO4/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TDPARIS_Entrainement_EXO4_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TDPARIS_Entrainement_EXO4_main.c$(DependSuffix): TDPARIS/Entrainement/EXO4/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TDPARIS_Entrainement_EXO4_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TDPARIS_Entrainement_EXO4_main.c$(DependSuffix) -MM TDPARIS/Entrainement/EXO4/main.c

$(IntermediateDirectory)/TDPARIS_Entrainement_EXO4_main.c$(PreprocessSuffix): TDPARIS/Entrainement/EXO4/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TDPARIS_Entrainement_EXO4_main.c$(PreprocessSuffix) TDPARIS/Entrainement/EXO4/main.c

$(IntermediateDirectory)/TDPARIS_Entrainement_EXO6_question7.c$(ObjectSuffix): TDPARIS/Entrainement/EXO6/question7.c $(IntermediateDirectory)/TDPARIS_Entrainement_EXO6_question7.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TDPARIS/Entrainement/EXO6/question7.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TDPARIS_Entrainement_EXO6_question7.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TDPARIS_Entrainement_EXO6_question7.c$(DependSuffix): TDPARIS/Entrainement/EXO6/question7.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TDPARIS_Entrainement_EXO6_question7.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TDPARIS_Entrainement_EXO6_question7.c$(DependSuffix) -MM TDPARIS/Entrainement/EXO6/question7.c

$(IntermediateDirectory)/TDPARIS_Entrainement_EXO6_question7.c$(PreprocessSuffix): TDPARIS/Entrainement/EXO6/question7.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TDPARIS_Entrainement_EXO6_question7.c$(PreprocessSuffix) TDPARIS/Entrainement/EXO6/question7.c

$(IntermediateDirectory)/TD09_Partie2_Exercice4_main.c$(ObjectSuffix): TD09/Partie2/Exercice4/main.c $(IntermediateDirectory)/TD09_Partie2_Exercice4_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD09/Partie2/Exercice4/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD09_Partie2_Exercice4_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD09_Partie2_Exercice4_main.c$(DependSuffix): TD09/Partie2/Exercice4/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD09_Partie2_Exercice4_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD09_Partie2_Exercice4_main.c$(DependSuffix) -MM TD09/Partie2/Exercice4/main.c

$(IntermediateDirectory)/TD09_Partie2_Exercice4_main.c$(PreprocessSuffix): TD09/Partie2/Exercice4/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD09_Partie2_Exercice4_main.c$(PreprocessSuffix) TD09/Partie2/Exercice4/main.c

$(IntermediateDirectory)/TD02_Partie5_Partie5.3_main.c$(ObjectSuffix): TD02/Partie5/Partie5.3/main.c $(IntermediateDirectory)/TD02_Partie5_Partie5.3_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD02/Partie5/Partie5.3/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD02_Partie5_Partie5.3_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD02_Partie5_Partie5.3_main.c$(DependSuffix): TD02/Partie5/Partie5.3/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD02_Partie5_Partie5.3_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD02_Partie5_Partie5.3_main.c$(DependSuffix) -MM TD02/Partie5/Partie5.3/main.c

$(IntermediateDirectory)/TD02_Partie5_Partie5.3_main.c$(PreprocessSuffix): TD02/Partie5/Partie5.3/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD02_Partie5_Partie5.3_main.c$(PreprocessSuffix) TD02/Partie5/Partie5.3/main.c

$(IntermediateDirectory)/TD02_Partie5_Partie5.2_main.c$(ObjectSuffix): TD02/Partie5/Partie5.2/main.c $(IntermediateDirectory)/TD02_Partie5_Partie5.2_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD02/Partie5/Partie5.2/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD02_Partie5_Partie5.2_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD02_Partie5_Partie5.2_main.c$(DependSuffix): TD02/Partie5/Partie5.2/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD02_Partie5_Partie5.2_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD02_Partie5_Partie5.2_main.c$(DependSuffix) -MM TD02/Partie5/Partie5.2/main.c

$(IntermediateDirectory)/TD02_Partie5_Partie5.2_main.c$(PreprocessSuffix): TD02/Partie5/Partie5.2/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD02_Partie5_Partie5.2_main.c$(PreprocessSuffix) TD02/Partie5/Partie5.2/main.c

$(IntermediateDirectory)/TD02_Partie5_Partie5.1_main.c$(ObjectSuffix): TD02/Partie5/Partie5.1/main.c $(IntermediateDirectory)/TD02_Partie5_Partie5.1_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/pierrad/Bureau/Programmation/TD02/Partie5/Partie5.1/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TD02_Partie5_Partie5.1_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TD02_Partie5_Partie5.1_main.c$(DependSuffix): TD02/Partie5/Partie5.1/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TD02_Partie5_Partie5.1_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/TD02_Partie5_Partie5.1_main.c$(DependSuffix) -MM TD02/Partie5/Partie5.1/main.c

$(IntermediateDirectory)/TD02_Partie5_Partie5.1_main.c$(PreprocessSuffix): TD02/Partie5/Partie5.1/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TD02_Partie5_Partie5.1_main.c$(PreprocessSuffix) TD02/Partie5/Partie5.1/main.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


