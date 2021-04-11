c ph2dt.inc: Stores parameters that define array dimensions in ph2dt.
c            Modify to fit size of problem and available computer memory.
c Parameter Description:
c MEV:   Max number of events.
c MSTA:  Max number of stations.
c MOBS:  Max number of phases (P&S) per eventer event.
c MPAIR: Max number of event pairs allowed.
c MCL:   Max number of clusters allowed. 

	integer	MEV, MSTA, MOBS, MPAIR, MCL

	parameter(MEV=    15000,    
     &		MSTA=   2200,		
     &		MOBS=   500,		
     &		MPAIR=  6000000,		
     &		MCL=    50)		

