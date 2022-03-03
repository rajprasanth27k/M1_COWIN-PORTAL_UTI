PROJ_NAME=COVID
SRC=main.c\
src/login.c\
src/prov.c\

TEST_SRC=test/test_head.c\
unity/unity.c\
src/login.c\
src/prov.c\

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

INC=-Iinc\
-Iunity\

Build : 
	gcc $(SRC) -Iinc -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

Run : Build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

Build_test:
	gcc $(TEST_SRC) -Iinc -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

Run_test : Build_test
	./$(call FixPath,$(PROJ_NAME).$(EXEC))



staticcheck:
	cppcheck --enable=all -iunity .

coverage:$(TEST_SRC)
	gcc -fprofile-arcs -ftest-coverage $(SRC) -Iinc -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm
	gcov -a ./$(call FixPath,$(PROJ_NAME).$(EXEC))




