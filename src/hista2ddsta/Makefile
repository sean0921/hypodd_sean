CMD	= hista2ddsta
FC	= gfortran
#FC	= g77
#FC	= f77
SRCS	= $(CMD).f
OBJS	= $(SRCS:%.f=%.o)
INCLDIR	= ../../include

# Flags for GNU g77 compiler
FFLAGS	= -O -I$(INCLDIR) -Wall -Wimplicit

# Flags for SUN f77 compiler
#FFLAGS	= -O -I$(INCLDIR)

# Following line needed on HP-UX (hasn't been tested, though).
#LDFLAGS	= +U77

all: $(CMD)

$(CMD): $(OBJS)
	$(FC) $(LDFLAGS) $(OBJS) $(LIBS) -o $@

%.o: %.f
	$(FC) $(FFLAGS) -c $(@F:.o=.f) -o $@

# Extensive lint-like diagnostic listing (SUN f77 only)
hista2ddsta.lst: $(SRCS)
	$(FC) -e -Xlist -c $(SRCS)

clean:
	-rm -f $(CMD) *.o core a.out *.fln junk
