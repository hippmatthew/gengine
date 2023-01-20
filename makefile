include .env

# Compiler Configuration
CC = g++
CFLAGS = -O2 -std=c++17 `pkg-config --cflags glfw3`
INCLUDES =  -I$(VULKAN_SDK_DIR)/include -I$(LIB_DIR) -I$(LOCAL_SRC)/include
LDFLAGS = -L$(VULKAN_SDK_DIR)/lib -lvulkan `pkg-config --static --libs glfw3`

# Source Files
SRCS = $(wildcard $(LOCAL_SRC)/*.cpp)
OBJS = $(patsubst $(LOCAL_SRC)/%.cpp, $(LOCAL_OBJ)/%.o, $(SRCS))
BINS = $(LOCAL_BIN)/gengine

# Functions
all: $(BINS)

$(LOCAL_BIN)/gengine: $(OBJS)
	$(CC) -o $@ $(CFLAGS) $(INCLUDES) $(OBJS) $(LDFLAGS)

$(LOCAL_OBJ)/%.o: $(LOCAL_SRC)/%.cpp
	$(CC) -o $@ $(CFLAGS) $(INCLUDES) -c $< $(LDFLAGS)

clean:
	rm -r $(LOCAL_BIN)/* $(LOCAL_OBJ)/*