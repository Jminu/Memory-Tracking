#-- 디렉토리 변수 --#
SRC_DIR = src
HDR_DIR = include
OBJ_DIR = build

TARGET = memorytracker

CFLAGS = -I$(HDR_DIR) -Wall -g
LDFLAGS = 

#-- 파일 목록 정의 --#
OBJS = $(OBJ_DIR)/user_netlink_hook.o

all: $(TARGET)

#-- 패턴 --#
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	gcc $(CFLAGS) -c -o $@ $<
	@echo "--- Compile Complete: $<   ->  $@"

$(TARGET): $(OBJS)
	gcc $(LDFLAGS) -o $@ $^
	@echo "--- Linking Complete: $(TARGET) Created!! ---"

clean:
	@echo "Cleaning..."
	rm -rf $(OBJ_DIR)/*.o
	rm -rf $(TARGET)

.PHONY: all clean
