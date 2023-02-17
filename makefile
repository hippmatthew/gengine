include .env

# Functions
all: $(BINS)

$(LOCAL_BIN)/gengine: $(OBJS)
	$(CC) -o $@ $(CXXFLAGS) $(INCLUDES) $(OBJS) $(LDFLAGS)

$(LOCAL_OBJ)/%.o: $(LOCAL_SRC)/%.cpp
	$(CC) -o $@ $(CXXFLAGS) $(INCLUDES) -c $< $(LDFLAGS) 

clean:
	rm -r $(LOCAL_BIN)/* $(LOCAL_OBJ)/*