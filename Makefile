PROJECT_NAME=AppliedC_box

SRC=main.c\
src/add_box.c\
src/display_boxes.c\
src/count_color.c\
src/box_id.c\
src/avg_volume.c\
src/remove_box_id.c\
src/min_max_diff.c

TEST_SRC=src/add_box.c\
src/display_boxes.c\
src/count_color.c\
src/box_id.c\
src/avg_volume.c\
src/remove_box_id.c\
src/min_max_diff.c\
test/test_main.c

INC= -Iinc

PROJECT_OUTPUT=$(PROJECT_NAME).out

TEST_OUTPUT=test_$(PROJECT_NAME).out

$(PROJECT_NAME):all

.PHONY:all test run clean

all:$(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT)

test:$(TEST_SRC)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) -lcunit -lm
	./$(TEST_OUTPUT)

run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT)

clean:
	rm *.out *.o
