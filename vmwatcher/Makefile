#-- 디렉토리 변수 --#
SRC_DIR = src
HDR_DIR = include
OBJ_DIR = build

TARGET = vmwatcher 

# CFLAGS: gcc에 전달하는 추가 옵션
# LDFLAGS: linker에 전달하는 추가 옵션

#override CFLAGS += -I$(HDR_DIR)

# CC ?= gcc

#-- 파일 목록 정의 --#
OBJS = $(OBJ_DIR)/user_netlink_hook.o\
       $(OBJ_DIR)/proc_search.o\
       $(OBJ_DIR)/graph.o\
       $(OBJ_DIR)/mem.o\
       $(OBJ_DIR)/log.o\
       $(OBJ_DIR)/main.o

all: $(TARGET)

$(OBJ_DIR)/user_netlink_hook.o: $(SRC_DIR)/user_netlink_hook.c\
	$(HDR_DIR)/proc_search.h\
	$(HDR_DIR)/graph.h\
	$(HDR_DIR)/mem.h\
	$(HDR_DIR)/log.h\
	$(HDR_DIR)/ui.h
	
	@echo "---Compiling: $< -> $@"
	$(CC) $(CFLAGS) -c -o $@ $<

$(OBJ_DIR)/proc_search.o: $(SRC_DIR)/proc_search.c\
	$(HDR_DIR)/graph.h\
	$(HDR_DIR)/log.h\
	$(HDR_DIR)/ui.h
	@echo "---Compiling: $< -> $@"
	$(CC) $(CFLAGS) -c -o $@ $<


$(OBJ_DIR)/graph.o: $(SRC_DIR)/graph.c\
	$(HDR_DIR)/ui.h\
	$(HDR_DIR)/log.h
	@echo "---Compiling: $< -> $@"
	$(CC) $(CFLAGS) -c -o $@ $<

$(OBJ_DIR)/mem.o: $(SRC_DIR)/mem.c\
	$(HDR_DIR)/type.h
	@echo "---Compiling: $< -> $@"
	$(CC) $(CFLAGS) -c -o $@ $<

$(OBJ_DIR)/log.o: $(SRC_DIR)/log.c
	@echo "---Compiling: $< -> $@"
	$(CC) $(CFLAGS) -c -o $@ $<

$(OBJ_DIR)/main.o: $(SRC_DIR)/main.c\
	$(HDR_DIR)/user_netlink_hook.h
	@echo "---Compiling: $< -> $@"
	$(CC) $(CFLAGS) -c -o $@ $<

#-- 패턴 --#
#$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
#	gcc $(CFLAGS) -c -o $@ $<
#	@echo "--- Compile Complete: $<   ->  $@"

$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^
	@echo "--- Linking Complete: $(TARGET) Created!! ---"

clean:
	@echo "Cleaning..."
	rm -rf $(OBJ_DIR)/*.o
	rm -rf $(TARGET)

.PHONY: all clean
