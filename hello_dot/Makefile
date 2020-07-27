INPUTNAME="graph.gv"
OUTPUTNAME="output.ps"

all: $(OUTPUTNAME)

$(OUTPUTNAME):
	@dot -T ps $(INPUTNAME) -o $(OUTPUTNAME)
	
view: $(OUTPUTNAME)
	@xdg-open $(OUTPUTNAME)

open: all
	xdg-open $(OUTPUTNAME)

clean:
	@rm -rf output.*
