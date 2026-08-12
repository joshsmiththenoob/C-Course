##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Challenge
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=C:/Users/ai/Desktop/smithfu/repositories/C-Course/Workspaces/CourseSection15
ProjectPath            :=C:/Users/ai/Desktop/smithfu/repositories/C-Course/Workspaces/CourseSection15/Challenge
IntermediateDirectory  :=../build-$(WorkspaceConfiguration)/Challenge
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=ai
Date                   :=11/08/2026
CodeLitePath           :="C:/Program Files/CodeLite/share/codelite"
MakeDirCommand         :=mkdir
LinkerName             :=C:/mingw64/bin/g++.exe
SharedObjectLinkerName :=C:/mingw64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=
PreprocessSuffix       :=.i
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=C:/Users/ai/Desktop/smithfu/repositories/C-Course/Workspaces/CourseSection15/build-$(WorkspaceConfiguration)/bin
OutputFile             :=..\build-$(WorkspaceConfiguration)\bin\$(ProjectName).exe
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/mingw64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := C:/mingw64/bin/ar.exe -r
CXX      := C:/mingw64/bin/g++.exe
CC       := C:/mingw64/bin/gcc.exe
CXXFLAGS :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
CFLAGS   :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/mingw64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
PATH:=C:\mingw64\bin;$(PATH)
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Account.cpp$(ObjectSuffix) $(IntermediateDirectory)/SavingsAccount.cpp$(ObjectSuffix) $(IntermediateDirectory)/TrustAccount.cpp$(ObjectSuffix) $(IntermediateDirectory)/AccountUtil.cpp$(ObjectSuffix) $(IntermediateDirectory)/CheckingAccount.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@if not exist "$(OutputDirectory)" $(MakeDirCommand) "$(OutputDirectory)"

$(IntermediateDirectory)/.d:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ai/Desktop/smithfu/repositories/C-Course/Workspaces/CourseSection15/Challenge/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Account.cpp$(ObjectSuffix): Account.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ai/Desktop/smithfu/repositories/C-Course/Workspaces/CourseSection15/Challenge/Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Account.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Account.cpp$(PreprocessSuffix): Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Account.cpp$(PreprocessSuffix) Account.cpp

$(IntermediateDirectory)/SavingsAccount.cpp$(ObjectSuffix): SavingsAccount.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ai/Desktop/smithfu/repositories/C-Course/Workspaces/CourseSection15/Challenge/SavingsAccount.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/SavingsAccount.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/SavingsAccount.cpp$(PreprocessSuffix): SavingsAccount.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/SavingsAccount.cpp$(PreprocessSuffix) SavingsAccount.cpp

$(IntermediateDirectory)/TrustAccount.cpp$(ObjectSuffix): TrustAccount.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ai/Desktop/smithfu/repositories/C-Course/Workspaces/CourseSection15/Challenge/TrustAccount.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TrustAccount.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TrustAccount.cpp$(PreprocessSuffix): TrustAccount.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TrustAccount.cpp$(PreprocessSuffix) TrustAccount.cpp

$(IntermediateDirectory)/AccountUtil.cpp$(ObjectSuffix): AccountUtil.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ai/Desktop/smithfu/repositories/C-Course/Workspaces/CourseSection15/Challenge/AccountUtil.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/AccountUtil.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/AccountUtil.cpp$(PreprocessSuffix): AccountUtil.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/AccountUtil.cpp$(PreprocessSuffix) AccountUtil.cpp

$(IntermediateDirectory)/CheckingAccount.cpp$(ObjectSuffix): CheckingAccount.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ai/Desktop/smithfu/repositories/C-Course/Workspaces/CourseSection15/Challenge/CheckingAccount.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/CheckingAccount.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/CheckingAccount.cpp$(PreprocessSuffix): CheckingAccount.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/CheckingAccount.cpp$(PreprocessSuffix) CheckingAccount.cpp

##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


