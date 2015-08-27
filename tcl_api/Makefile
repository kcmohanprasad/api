# Sample Makefile for a Tcl extension
SRCS          = tcl_wrapper.c socket.c    # Source files
OBJS          =                   # Object files (already created)
INTERFACE     = tcl.i         # SWIG Interface file
WRAPFILE      = $(INTERFACE:.i=_wrap.c)
WRAPOBJ       = $(INTERFACE:.i=_wrap.o)
TARGET        = tcl_lancer.so        # Output file


# Compiler options
CC            = gcc
CFLAGS        =
INCLUDE       =

# SWIG Options
SWIG          = /usr/local/bin/swig
SWIGOPT       = -tcl # use -tcl8 for Tcl 8.0
SWIGCC        = $(CC)

# Rules for creating .o files from source.
COBJS         = $(SRCS:.c=.o)
ALLOBJS       = $(COBJS) $(OBJS)

# Shared library options (Shown for Linux)
CCSHARED      = -fpic
BUILD         = $(CC) -shared

# Tcl installation (where is Tcl/Tk located)
TCL_INCLUDE   = -I/usr/local/include
TCL_LIB       = -L/usr/local/lib

# Additional link libraries
LIBS          = 

.SUFFIXES: .c

.c.o:
	$(CC) $(CCSHARED) $(CFLAGS) $(INCLUDE) -c $<

all: $(TARGET)

# Convert the SWIG wrapper file into an object file
$(WRAPOBJ) : $(WRAPFILE)
	$(SWIGCC) -c $(CCSHARED) $(CFLAGS) $(WRAPFILE) $(INCLUDE) $(TCL_INCLUDE)

# Run SWIG
$(WRAPFILE) : $(INTERFACE)
	$(SWIG) $(SWIGOPT) -o $(WRAPFILE) $(INTERFACE)

# Build the final extension module
$(TARGET): $(WRAPOBJ) $(ALLOBJS)
	$(BUILD) $(WRAPOBJ) $(ALLOBJS) $(LIBS) -o $(TARGET)

clean:
	\rm $(WRAPFILE) $(WRAPOBJ) $(ALLOBJS) $(LIBS) $(TARGET)
