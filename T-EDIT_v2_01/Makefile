EXEC_NAME = drawOpenGL
CC = gcc
CFLAGS = -Wall -ansi -std=c99
OPT_FLAGS = -O2
CFLAGS_DEBUG = $(CFLAGS) -O0 -g
SOURCES_DIR = sources
OUTBIN = $(EXEC_NAME)
OUTBIN_DEBUG = dbg_$(EXEC_NAME)
BIN_DIR = build
FILES = *.c
DEPS = $^
INCLUDES_DIR = headers
SDL_FLAGS = `sdl-config --cflags --libs`
OPENGL_FLAGS = -lGL -lGLU
#SDL_FLAGS = -lSDL -L/usr/lib/i386-linux-gnu -lSDL_image-1.2
OUTBIN_ALL = \
	$(OUTBIN) \
	$(OUTBIN_DEBUG)

# commence la creation 

all : $(OUTBIN_ALL)

$(OUTBIN) : $(SOURCES_DIR)/$(FILES)
	$(CC) $(CFLAGS) $(OPT_FLAGS) -I$(INCLUDES_DIR) $(DEPS) $(SDL_FLAGS) $(OPENGL_FLAGS) -o $(BIN_DIR)/$(OUTBIN)

$(OUTBIN_DEBUG) : $(SOURCES_DIR)/$(FILES)
	$(CC) $(CFLAGS_DEBUG) -I$(INCLUDES_DIR) $(DEPS) $(SDL_FLAGS) $(OPENGL_FLAGS) -o $(BIN_DIR)/$(OUTBIN_DEBUG)

clean :
	rm -rf $(BIN_DIR)/$(OUTBIN) $(BIN_DIR)/$(OUTBIN_DEBUG)
	@echo -n "Fichiers binaires supprimés \n"
