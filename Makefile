PROJECT_NAME=AppliedC_box

SRC=main.c\
src/add_box.c\
src/display_boxes.c

INC= -Iinc

PROJECT_OUTPUT=$(PROJECT_NAME)

$(PROJECT_NAME):all

.PHONY:all

all:$(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out
