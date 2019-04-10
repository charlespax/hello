INPUTNAME="graph.gv"
OUTPUTNAME="output.ps"

all: $(OUTPUTNAME)

$(OUTPUTNAME):
	@dot -T ps $(INPUTNAME) -o $(OUTPUTNAME)
	
view: $(OUTPUTNAME)
	@xdg-open $(OUTPUTNAME)

clean:
	@rm -rf $(OUTPUTNAME)
