#-- 디렉토리 변수 --#
SRC_DIR = src
HDR_DIR = include
OBJ_DIR = build

TARGET = memorytracker

CFLAGS = -I$(HDR_DIR) -Wall -g
LDFLAGS = 

#-- 파일 목록 정의 --#
OBJS = $(OBJ_DIR)/user_netlink_hook.o\
       $(OBJ_DIR)/proc_search.o\
       $(OBJ_DIR)/graph.o

all: $(TARGET)

$(OBJ_DIR)/user_netlink_hook.o: $(SRC_DIR)/user_netlink_hook.c\
	$(HDR_DIR)/proc_search.h\
	$(HDR_DIR)/graph.h\
	$(HDR_DIR)/mem.h
	@echo "---Compiling: $< -> $@"
	gcc $(CFLAGS) -c -o $@ $<

$(OBJ_DIR)/proc_search.o: $(SRC_DIR)/proc_search.c\
	$(HDR_DIR)/graph.h
	@echo "---Compiling: $< -> $@"
	gcc $(CFLAGS) -c -o $@ $<


$(OBJ_DIR)/graph.o: $(SRC_DIR)/graph.c
	@echo "---Compiling: $< -> $@"
	gcc $(CFLAGS) -c -o $@ $<

$(OBJ_DIR)/mem.o: $(SRC_DIR)/mem.c\
	$(HDR_DIR)/type.h
	@echo "---Compiling: $< -> $@"
	gcc $(CFLAGS) -c -o $@ $<

#-- 패턴 --#
#$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
#	gcc $(CFLAGS) -c -o $@ $<
#	@echo "--- Compile Complete: $<   ->  $@"

$(TARGET): $(OBJS)
	gcc $(LDFLAGS) -o $@ $^
	@echo "--- Linking Complete: $(TARGET) Created!! ---"

clean:
	@echo "Cleaning..."
	rm -rf $(OBJ_DIR)/*.o
	rm -rf $(TARGET)

.PHONY: all clean
