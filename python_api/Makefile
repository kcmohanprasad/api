# Sample Makefile for a Tcl extension
SRCS          = pythonFunctions.c socket.c    # Source files
OBJS          =                   # Object files (already created)
INTERFACE     = python.i         # SWIG Interface file
WRAPFILE      = $(INTERFACE:.i=_wrap.c)
WRAPOBJ       = $(INTERFACE:.i=_wrap.o)
TARGET        = python_lancer.so        # Output file


# Compiler options
CC            = gcc
CFLAGS        =
INCLUDE       =

# SWIG Options
SWIG          = /usr/local/bin/swig
SWIGOPT       = -python
SWIGCC        = $(CC)

# Rules for creating .o files from source.
COBJS         = $(SRCS:.c=.o)
ALLOBJS       = $(COBJS) $(OBJS)

# Shared library options (Shown for Linux)
CCSHARED      = -fpic
BUILD         = $(CC) -shared

# Perl installation
PYTHON_INCLUDE   = -I/usr/include/python2.6

# Additional link libraries
LIBS          = 

.SUFFIXES: .c

.c.o:
	$(CC) $(CCSHARED) $(CFLAGS) $(INCLUDE) -c $<

all: $(TARGET)

# Convert the SWIG wrapper file into an object file
$(WRAPOBJ) : $(WRAPFILE)
	$(SWIGCC) -c $(CCSHARED) $(CFLAGS) $(WRAPFILE) $(INCLUDE) $(PYTHON_INCLUDE)

# Run SWIG
$(WRAPFILE) : $(INTERFACE)
	$(SWIG) $(SWIGOPT) -o $(WRAPFILE) $(INTERFACE)

# Build the final extension module
$(TARGET): $(WRAPOBJ) $(ALLOBJS)
	$(BUILD) $(WRAPOBJ) $(ALLOBJS) $(LIBS) -o $(TARGET)

clean:
	\rm $(WRAPFILE) $(WRAPOBJ) $(ALLOBJS) $(LIBS) $(TARGET)
