c Current date and time, as a character string
c (This version merely returns a string of blanks)

	subroutine datetime(dattim)

	implicit none

c	Parameters:
	character	dattim*20

	character rcsid*150
	data rcsid /"$Header: /home/crhet/julian/src/cmd/hypoDD/RCS/datetime.f,v 1.6 2001/02/06 22:27:25 julian Exp $"/
	save rcsid

      dattim = '                    '
      return
      end ! of subroutine datetime
