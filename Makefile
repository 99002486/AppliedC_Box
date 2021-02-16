PROJECT_NAME=AppliedC_box

SRC=main.c\
src/add_box.c\
src/display_boxes.c\
src/count_color.c\
src/box_id.c\
src/avg_volume.c\
src/remove_box_id.c

INC= -Iinc

PROJECT_OUTPUT=$(PROJECT_NAME)

$(PROJECT_NAME):all

.PHONY:all

all:$(SRC)
	gcc $(SRC) $(INC) -g -o $(PROJECT_OUTPUT).out
